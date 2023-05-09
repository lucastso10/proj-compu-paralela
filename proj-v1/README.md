# Projeto

A versão paralela e a serial chegam a 30 mil casas decimais com o uso da biblioteca GMP.

![2023-05-02-135551_2091x677_scrot](https://user-images.githubusercontent.com/84486266/235746762-82b16b8c-2918-4d94-af53-28ca9d565763.png)

## Serial
compilar com: gcc serial.c -lgmp

Com 10000 de precisão: 6s 525ms

## Paralelo
Compilar com: gcc paralelo.c -lgmp -fopenmp

Com 10000 de precisão: 6s 435ms
