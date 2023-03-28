#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#define SHM_KEY 12345
#define SHM_SIZE sizeof(int)

int main() {
    int shmid, *shared_value;
    
    // cria a memória compartilhada
    shmid = shmget(SHM_KEY, SHM_SIZE, IPC_CREAT | 0666);
    shared_value = shmat(shmid, NULL, 0);
    
    *shared_value = 1;
    printf("Processo pai - valor inicial: %d\n", *shared_value);

    pid_t pid = fork();
    
    if (pid == 0) {
        // processo filho
        *shared_value += 2;
        printf("Processo filho - valor: %d\n", *shared_value);
        exit(0);
    } else if (pid > 0) {
        // processo pai
        wait(NULL);
        *shared_value *= 4;
        printf("Processo pai - valor final: %d\n", *shared_value);
        
        // remove a memória compartilhada
        shmdt(shared_value);
        shmctl(shmid, IPC_RMID, NULL);
    } else {
        exit(1);
    }
    
    return 0;
}

