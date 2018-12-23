void newtonraphsonmethod(){
	int k = 0, degree, ytdegree;
	float x1,x2,y1,yturev,epsilon;
	
	printf("\n\n");
	//system("CLS");
	printf("Newton-Raphson Y�ntemi �le K�k Bulma");
	printf("\nKa��nc� dereceden bir fonksiyon gireceksiniz: ");
	scanf("%d", &degree);
	
	float y[degree];
	defY(y,&degree);
	
	printf("\nBu y�ntem i�inicin fonksiyonun t�revi gerekmektedir.");
	printf("\nFonksiyonun turevini giriniz.\n");
	
	ytdegree = degree-1;
	float yt[ytdegree];
	defY(yt,&ytdegree);
	
	printf("\nBa�lang�� de�erini(x0) giriniz: ");
	scanf("%f",&x2);
	printf("\nEpsilon de�erini giriniz: ");
	scanf("%f",&epsilon);
		
	do{
		x1 = x2;
		y1 = calcY(x1,y,degree);
		yturev = calcY(x1,yt,ytdegree);
		x2 = x1 - ( y1 / yturev);
		k += 1;
		
	}while(fabsf(x2-x1) > epsilon);
	printf("K�k = %f", x2);
}
