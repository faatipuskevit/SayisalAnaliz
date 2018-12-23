void regulafalsemethod(){
	int k = 1, degree;
	float xavg, xtop, xbot, epsilon, yavg, ytop , ybot;
	
	printf("\n\n");
	//system("CLS");
	printf("Regula False Y�ntemi �le K�k Bulma");
	printf("\nKa��nc� dereceden bir fonksiyon gireceksiniz: ");
	scanf("%d", &degree);
	
	float y[degree];
	defY(y,&degree);
	
	printf("Alt s�n�r� giriniz: ");
	scanf("%f",&xbot);
	
	printf("Ust s�n�r� giriniz: ");
	scanf("%f", &xtop);
	
	printf("Epsilon de�erini giriniz: ");
	scanf("%f", &epsilon);
	
	
	if(calcY(xtop,y,degree) == 0){
		printf("K�k = %f", xtop);
	}else if(calcY(xbot,y,degree) == 0){
		printf("K�k = %f", xbot);
	}else{
		do{			
						
			ytop = calcY(xtop,y,degree);
			ybot = calcY(xbot,y,degree);
			
			xavg = (xtop*ybot - xbot*ytop)/(ybot-ytop);
			yavg = calcY(xavg,y,degree);
			
			
			if ((ybot * yavg) < 0){
				xtop = xavg;
			}else{
				xbot = xavg;
			}
			//k \txavg \tyavg \txbot \tybot \txtop \tytop
			//printf( "\nabs(yavg) = %.3f yavg = %.3f " ,fabsf(yavg),yavg);
			k += 1;
		}while(fabsf(yavg) > epsilon);
		printf("K�k = %f", xavg);	
	}
}
