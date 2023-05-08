#include <stdio.h>
#include <gmp.h>
#include <assert.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	mpf_t n, e, temp, c;

        int i, pres;
        char* output;
        mp_exp_t exp;

	pres = atoi(argv[1]);
	assert(pres >= 0);

        // inicializa os floats
        mpf_set_default_prec(100000);
        // mpf_inits(n, temp, NULL);
        mpf_init(temp);
	mpf_init_set_d(n, 1.0);
        mpf_init_set_d(e, 1.0);
        mpf_init_set_d(c, 1.0);

        // loop para calcular o valor de e.
        for(i = 0; i < pres; i++){
                mpf_mul_ui(n, n, i+1); // calcula o fatorial para esse loop
                mpf_div(temp, c, n); // divide c (1) por n (fatorial) e guarda em temp
                mpf_add(e, temp, e); // soma o temp para e, o resultado
        }

        // printa o float
        output = mpf_get_str(NULL, &exp, 10, 0, e); // converte float para string
        printf("e = %.*s.%s\n", (int)exp, output, output+exp); // printa a string com o valor do float

        // libera a memoria
        mpf_clear(n);
        mpf_clear(e);
        mpf_clear(temp);
        mpf_clear(c);

        return 0;
}
