int debug = 1;
#include<stdio.h>
#include<math.h>

#include "function.h"
#include "graphicalmethod.h"
#include "bisectionmethod.h"
#include "regulafalsemethod.h"

#define SIZE 10

int main(){
	int degree;
	float x, y[SIZE] = {0};

	//defY(y,&degree);
	degree = 3;
	y[0] = -9;
	y[1] = 13.5;
	y[2] = -6.5;
	y[3] = 1;
	
	
	
	printf("\n\n graphicalmethod kok %f\n\n",graphicalmethod(y,&degree));
	printf("\n\n bisection kok= %f\n\n",bisectionmethod(y,&degree));
	printf("\n\nRegula False kok = %.3f\n\n",regulafalsemethod(y,&degree));
	
	
	return 0;
}

