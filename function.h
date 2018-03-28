void writeY(float y[], int *degree){
	int i;
	
	for(i=*degree;i>=0;i--){	
		if(y[i] != 0){
			printf("%.2fx^%d + ",y[i],i);
		}
	}
	printf("\n");
}

void defY(float *y, int *degree){
	int i;
	
	printf("Kacinci dereceden bir denklem gireceksiniz: ");
	scanf("%d", degree);
	
	for(i=*degree;i>=0;i--){
		printf("Derecesi %d olan elamanin katsayisini giriniz: ",i);
		scanf("%f", &y[i]);
	}
	
}


float calcY(float x, float *y, int *degree){
	int i;
	float result = 0, t=1;
	for(i=0;i<=*degree;i++){
		result += y[i] * t;
		t *= x;
	}
	return result;
}
