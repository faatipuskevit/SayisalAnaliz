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
	
	//printf("\n%f",graphicalmethod(y,&degree));
	printf("\nbisection kok= %f",bisectionmethod(y,&degree));
	
	
	
	
	
	
	
	/*int degree;
	float x;
	int i;
	
	float y[SIZE] = {0};
	
	
	defY(y,&degree);
	for(i=2;i>=0;i--){	
		if(y[i] != 0){
			printf("%.2fx^%d + ",y[i],i);
		}
	}	
	printf("\n");
	graphicalmethod(y);
	
	printf("Burasi");
	for(i=2;i>=0;i--){	
		{
			printf("%.2fx^%d + ",y[i],i);0
		}
	}	
	
	
	
	//scanf("%f",&x);
	*/
 	//	printf("%f", calcY(1,y,&degree));

	return 0;
}

