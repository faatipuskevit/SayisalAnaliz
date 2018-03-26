float graphicalmethod(float y[], int *degree){
	int k = 1;
	float kok;
	float diff,x0,x1,y1,y2,delta,epsilon;
	
	printf("Baslangic degerini(x0) giriniz: ");
	//printf("x0 = 1,5 \n");
	//x0 = 1.5;
	scanf("%f",&x0);
	
	printf("Artis miktarini(delta) giriniz: ");
	//printf("delta = 0.75 \n");
	//delta = 0.75;
	scanf("%f", &delta);
	
	printf("Epsilon degerini giriniz: ");
	scanf("%f", &epsilon);
	//printf("epsilon = 0.02\n");
	//epsilon = 0.02;
	
	if(debug == 1){
		printf("k\tx1\ty1\ty2\tdelta");
	}
	
	x1=x0;
	do{
		do{
			y1 = calcY(x1,y,degree);
			y2 = calcY((x1 + delta),y,degree);
			if(debug == 1){
				printf("\n%d\t%.3f\t%.3f\t%.3f\t%.3f\t",k,x1,y1,y2,delta);
			}
			
			x1 += delta;

			
			k += 1;
			
		}while(y1*y2 > 0);
		
		x1-=delta;
		delta /= 2;
		
		//k x1 y1 y2 delta;
		if(debug == 1){
				printf("\n%d\t%.3f\t%.3f\t%s\t%.3f\t",k-1,(x1+delta*2),y1,"  -",delta*2);
		}
		
	}while(delta > epsilon);
	
	if(y2 == 0){
		kok = x1 + delta;
	}else{
		kok = x1;
	}
	
	return kok;	
}

