#include <stdio.h>
#include <gmp.h>

mpf_t n, e, temp, c;
mpz_t calc;

int main(int argc, char* argv[]) {
        int i;
        char* output;
        mp_exp_t exp;

	n = atoi(argv[1]);
	assert(n >= 0);

        // inicializa os floats
        mpf_set_default_prec(100000);
        mpf_init(e);
        mpf_init(n);
        mpf_init(temp);
        mpf_init(c);
        mpf_set_d(e, 1.0);
        mpf_set_d(c, 1.0);
        mpz_init_set_ui(calc, 1);

        // loop para calcular o valor de e.
        for(i = 0; i < n; i++){
                mpz_mul_ui(calc, calc, i+1); // calcula o fatorial para esse loop
                mpf_set_z(n, calc); // copia int (mpz) para um float (mpf) 
                mpf_div(temp, c, n); // divide c (1) por n (fatorial) e guarda em temp
                mpf_add(e, temp, e); // soma o temp para e, o resultado
        }

        // printa o float
        printf ("e = ");
        output = mpf_get_str(NULL, &exp, 10, 0, e); // converte float para string
        printf("%.*s.%s\n", (int)exp, output, output+exp); // printa a string com o valor do float

        // libera a memoria
        mpf_clear(n);
        mpf_clear(e);
        mpf_clear(temp);
        mpf_clear(c);
        mpz_clear(calc);

        return 0;
}
