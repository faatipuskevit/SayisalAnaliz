float bisectionmethod(float y[], int *degree){
	float xavg, xtop, xbot, epsilon, yavg, ytop , ybot;
	int k = 1;
	
	printf("Alt siniri giriniz: ");
	printf("1.75\n");
	xbot = 1.75; 
	//scanf("%f",&xbot);
	
	printf("Ust siniri giriniz: ");
	printf("2.5\n");
	xtop = 2.5;
	//scanf("%f", &xtop);
	
	printf("Epsilon degerini giriniz: ");
	printf("0.007\n");
	epsilon = 0.002;
	//scanf("%f", &epsilon);
	
	if(debug == 1){
		printf("\nk \txavg \tyavg \txbot \tybot \txtop \tytop");
	}
	
	if(calcY(xtop,y,degree) == 0){
		return xtop;
	}else if(calcY(xbot,y,degree) == 0){
		return xbot;
	}else{
		do{			
			xavg = (xtop + xbot) / 2;
			yavg = calcY(xavg,y,degree);			
			ytop = calcY(xtop,y,degree);
			ybot = calcY(xbot,y,degree);
			
			if(debug == 1){
				printf("\n%d \t%.3f \t%.3f \t%.3f \t%.3f \t%.3f \t%.3f",k,xavg,yavg,xbot,ybot,xtop,ytop);
			}
			
			if ((ybot * yavg) < 0){
				xtop = xavg;
			}else{
				xbot = xavg;
			}
			//k \txavg \tyavg \txbot \tybot \txtop \tytop
			//printf( "\nabs(yavg) = %.3f yavg = %.3f " ,fabsf(yavg),yavg);
			k += 1;
		}while(fabsf(yavg) > epsilon);
		return xavg;
		
	}
}
