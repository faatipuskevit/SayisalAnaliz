void writeY(float y[], int *degree){
	int i;
	int coefftmp;
	
	printf("%.2fx^%d ",y[*degree],*degree);
	for(i=*degree-1;i>1;i--){
		coefftmp = y[i];
		if(coefftmp != 0){
			if(coefftmp>0){
				printf("+ %.2fx^%d ",coefftmp,i);
			}else{
				printf("- %.2fx^%d ",(-1*coefftmp), i);
			}
		}
	}
	coefftmp = y[1];
	if(coefftmp != 0){
		if(coefftmp>0){
			printf("+ %.2fx ",coefftmp);
		}else{
			printf("- %.2fx ",(-1*coefftmp));
		}
	}
	coefftmp = y[0];
	if(coefftmp != 0){
		if(coefftmp>0){
			printf("+ %.2f ",coefftmp);
		}else{
			printf("- %.2f ",(-1*coefftmp));
		}
	}
}


/* Working writeY
void writeY(float y[], int *degree){
	int i;
	for(i=*degree;i>=0;i--){	
		if(y[i] != 0){
			printf("%.2fx^%d + ",y[i],i);
		}
	}
	printf("\n");
}
*/
void defY(float *y, int *degree){
	int i;
	for(i=*degree;i>=0;i--){
		printf("Derecesi %d olan elemanýn katsayýsýný giriniz: ",i);
		scanf("%f", &y[i]);
	}
}


float calcY(float x, float *y, int degree){
	int i;
	float result = 0, t=1;
	for(i=0;i<=degree;i++){
		result += y[i] * t;
		t *= x;
	}
	return result;
}
