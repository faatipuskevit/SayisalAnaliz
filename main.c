int debug = 1;
#include<stdio.h>
#include<math.h>

#include "function.h"
#include "graphicalmethod.h"
#include "bisectionmethod.h"

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
	
	
	
	printf("\nRegula False kok = %.3f",regulafalse(y,&degree));
	//printf("\n%f",graphicalmethod(y,&degree));
	//printf("\nbisection kok= %f",bisectionmethod(y,&degree));
	
	
	return 0;
}

