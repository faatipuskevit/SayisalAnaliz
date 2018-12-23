void bisectionmethod(){
	int k = 1, degree;
	float xavg, xtop, xbot, epsilon, yavg, ytop , ybot;

	printf("\n\n");
	//system("CLS");
	printf("Bisection Yöntemi Ýle Kök Bulma");
	printf("\nKaçýncý dereceden bir fonksiyon gireceksiniz: ");
	scanf("%d",&degree);
	
	float y[degree];
	
	defY(y,&degree);
	
	printf("Alt sýnýrý giriniz:  ");
	scanf("%f",&xbot);
	
	printf("Üst sýnýrý giriniz: ");
	scanf("%f", &xtop);
	
	printf("Epsilon deðerini giriniz: ");
	scanf("%f", &epsilon);
	
	
	if(calcY(xtop,y,degree) == 0){
		printf("Kök = %f", xtop);
	}else if(calcY(xbot,y,degree) == 0){
		printf("Kök = %f", xbot);
	}else{
		do{			
			xavg = (xtop + xbot) / 2;
			yavg = calcY(xavg,y,degree);			
			ytop = calcY(xtop,y,degree);
			ybot = calcY(xbot,y,degree);
			
			
			if ((ybot * yavg) < 0){
				xtop = xavg;
			}else{
				xbot = xavg;
			}
			//k \txavg \tyavg \txbot \tybot \txtop \tytop
			//printf( "\nabs(yavg) = %.3f yavg = %.3f " ,fabsf(yavg),yavg);
			k += 1;
		}while(fabsf(yavg) > epsilon);
		printf("Kök = %f", xavg);
	}
}
