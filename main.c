#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>

//#define  DEBUG 0

//#define SIZE 10

#include "function.h"
#include "graphicalmethod.h"
#include "bisectionmethod.h"
#include "regulafalsemethod.h"
#include "newtonraphsonmethod.h"

#include "matrix.h"
#include "integration.h"
#include "uiforinvers.h"
#include "derivative.h"
#include "gaussjordan.h"


int main(){
	setlocale(LC_ALL,"Turkish");
	
	int choice;
	int devam =1;	
	char yeniden = 'h';
	
	system("CLS");
	
	
	do{
		printf("K�k bulma y�ntemleri\n"
		"Kapal� Y�ntemler\n"
			"\t1- Grafik Y�ntemi\n"
			"\t2- Yar�yab�lme(Bisection) Y�ntemi\n"
			"\t3- Regula False Y�ntemi\n"
		"A��k Y�ntemler\n"
			"\t4- Newton-Raphson Y�ntemi\n"
		"Matris ��lemleri\n"
			"\t5- Matrisin inversinin al�nmas�\n"
		"Do�rusal Denklem Tak�mlar�n�n ��z�m�\n"
			"\t6- Gauss-Jordan Eleminasyon Y�ntemi\n"
		"N�merik �ntegral\n"
			"\t7- Trapez Y�ntemi\n"
			"\t8- Simspon Y�ntemi\n"
		"N�merik T�rev\n"
			"\t9- Merkezi T�rev\n");
		
		printf("Se�iminizi giriniz: ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				graphicalmethod();
			case 2:
				bisectionmethod();
			case 3:
				regulafalsemethod();
			case 4:
				newtonraphsonmethod();
			case 5:
				inversalma();
			case 6:
				gaussJordanElemination();
			case 7:
				trapez();	
			case 8:
				simpson();
			case 9:
				centralDerivative();
		}
		
		
		printf("\nBa�ka bir i�lem yapmak istiyor musunuz? [e/h] ");
		scanf(" %c",&yeniden);
		printf("\n\n");	
	}while(yeniden == 'e');
	return 0;
}

