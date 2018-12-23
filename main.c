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
		printf("Kök bulma yöntemleri\n"
		"Kapalý Yöntemler\n"
			"\t1- Grafik Yöntemi\n"
			"\t2- Yarýyabölme(Bisection) Yöntemi\n"
			"\t3- Regula False Yöntemi\n"
		"Açýk Yöntemler\n"
			"\t4- Newton-Raphson Yöntemi\n"
		"Matris Ýþlemleri\n"
			"\t5- Matrisin inversinin alýnmasý\n"
		"Doðrusal Denklem Takýmlarýnýn Çözümü\n"
			"\t6- Gauss-Jordan Eleminasyon Yöntemi\n"
		"Nümerik Ýntegral\n"
			"\t7- Trapez Yöntemi\n"
			"\t8- Simspon Yöntemi\n"
		"Nümerik Türev\n"
			"\t9- Merkezi Türev\n");
		
		printf("Seçiminizi giriniz: ");
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
		
		
		printf("\nBaþka bir iþlem yapmak istiyor musunuz? [e/h] ");
		scanf(" %c",&yeniden);
		printf("\n\n");	
	}while(yeniden == 'e');
	return 0;
}

