//Graphical Method
/*
	Keeps adding delta to start point until the change in the sign of the function.
	When the sign changes it means there is a root.
	Delta gets halved.`
	We take the last x0.
	We keep the process going on until delta(difference between x(k+1) and x(k) < epsilon.
*/


void graphicalmethod(){
	int k = 1,degree,limit = 1000;
	float root,diff,x0,delta,epsilon,x1,y1,y2;
	int devam = 1;
	char devammi = 'e';
	
	printf("\n\n");
	//system("CLS");
	printf("Grafik Yöntemi Ýle Kök Bulma");
	printf("\nKaçýncý dereceden bir fonksiyon gireceksiniz: ");
	scanf("%d", &degree);
	
	float y[degree];
	
	defY(y,&degree);
	
	printf("\nBaþlangýç deðerini(x0) giriniz: ");
	scanf("%f", &x0);
	
	printf("Delta(Her adýmda x'deki deðiþim miktarý) deðerini giriniz: ");
	scanf("%f", &delta);
	
	printf("Epsilon\'u giriniz: ");
	scanf("%f", &epsilon);	
	
	x1=x0;
	do{
		do{
			y1 = calcY(x1,y,degree); //value of f(x1)
			y2 = calcY((x1 + delta),y,degree); //value of f(x1 + delta)
			
			x1 += delta; //x1 is increased by delta
			k += 1; // Counter
			
		}while(y1*y2 > 0);
			x1-=delta; //When the sign changes we have to use the x value before sign change so we subtract delta.
			delta /= 2; // Delta is halved.
	}while(delta > epsilon);
	
	if(y2 == 0){ //Checks if x + delta is a root or not.
		root = x1 + delta;
	}else{
		root = x1;
	}
		printf("\nKök = %f",root);
}

