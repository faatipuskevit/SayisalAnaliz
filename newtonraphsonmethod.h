float newtonraphsonmethod(float y[],int *degree){
	float x1,x2,y1,yturev,epsilon;
	float yt[10] = {0};
	int ytdegree , k = 0;
	
	printf("\nNewton Raphson icin fonksiyonun turevi gerekmektedir.");
	printf("\nFonksiyonun turevini giriniz.\n");
	
	defY(yt,&ytdegree);
	writeY(yt,&ytdegree);
	
	printf("\nBaslangic degeri(x0) giriniz: ");
	//scanf("%f",&x2);
	x2 =  1;
	printf("\nEspilon degerini giriniz: ");
	//scanf("%f",&epsilon);
	epsilon = 0.01;
	
	if (debug == 1){
		printf("\nk\txk\tx(k+1)\ty\ty\'\tx(k+1) - xk");
	}
	
	do{
		x1 = x2;
		y1 = calcY(x1,y,degree);
		yturev = calcY(x1,yt,&ytdegree);
		x2 = x1 - ( y1 / yturev);
	if (debug == 1){
		//\nk\txk\tx(k+1)\ty,y\'\tx(k+1) - xk"
		printf("\n%d\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f",k,x1,x2,y1,yturev,x2-x1);
		k += 1;
	}
		
	}while(fabsf(x2-x1) > epsilon);
	
	return x2;	
}
