void newtonraphsonmethod(){
	int k = 0, degree, ytdegree;
	float x1,x2,y1,yturev,epsilon;
	
	printf("\n\n");
	//system("CLS");
	printf("Newton-Raphson Yöntemi Ýle Kök Bulma");
	printf("\nKaçýncý dereceden bir fonksiyon gireceksiniz: ");
	scanf("%d", &degree);
	
	float y[degree];
	defY(y,&degree);
	
	printf("\nBu yöntem içinicin fonksiyonun türevi gerekmektedir.");
	printf("\nFonksiyonun turevini giriniz.\n");
	
	ytdegree = degree-1;
	float yt[ytdegree];
	defY(yt,&ytdegree);
	
	printf("\nBaþlangýç deðerini(x0) giriniz: ");
	scanf("%f",&x2);
	printf("\nEpsilon deðerini giriniz: ");
	scanf("%f",&epsilon);
		
	do{
		x1 = x2;
		y1 = calcY(x1,y,degree);
		yturev = calcY(x1,yt,ytdegree);
		x2 = x1 - ( y1 / yturev);
		k += 1;
		
	}while(fabsf(x2-x1) > epsilon);
	printf("Kök = %f", x2);
}
