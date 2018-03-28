int debug = 1;
#include<stdio.h>
#include<math.h>

#define SIZE 11

#include "function.h"
#include "graphicalmethod.h"
#include "bisectionmethod.h"
#include "regulafalsemethod.h"
#include "jacobimethod.h"
#include "newtonraphsonmethod.h"



int main(){
	int degree;
	float x, y[SIZE] = {0};

	//defY(y,&degree);
	degree = 3;
	y[0] = -5;
	y[1] = 0;
	y[2] = 0;
	y[3] = 1;
	
	printf("\nf(x) = ");
	writeY(y,&degree);
	printf("\n");
	
	
	//printf("\n\n graphicalmethod kok %f\n\n",graphicalmethod(y,&degree));
	//printf("\n\n bisection kok= %f\n\n",bisectionmethod(y,&degree));
	//printf("\n\nRegula False kok = %.3f\n\n",regulafalsemethod(y,&degree));
	// ???? printf("\n\n jacobi method = %.3f \n\n", jacobimethod(y,&degree));
	printf("\nnewtonraphson methoda gore kok = %.3f",newtonraphsonmethod(y,&degree));
	
	return 0;
}

