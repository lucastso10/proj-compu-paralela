#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x);

int main(){
	double approx, h;
	double a = 20, b = 45, x_i;
	int n = 5, i;

	h = (b-a)/n;
	approx = (f(a) + f(b))/2.0;
	for (i = 1; i <= n-1; i++){
		x_i = a + i*h;
		approx += f(x_i);
	}
	approx += h*approx;

	printf("With n = %d trapezoids, our estimate\n", n);
	printf("of the integral from %f to %f = %.14e\n",
		a, b, approx);
	return 0;
}

double f(double x){return exp(x);}
