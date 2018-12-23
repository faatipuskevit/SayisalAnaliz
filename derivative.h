//I don't care about using right words anymore.
float forwardDerivative(float y[], int *degree, float x, float deltaX){
	return (calcY(x + deltaX,y,*degree) - calcY(x,y,*degree)) / deltaX;
}

float backwardDerivative(float y[], int *degree,float x, float deltaX){
	return (calcY(x,y,*degree) - calcY(x - deltaX,y,*degree)) / deltaX;
}

void centralDerivative(){
	int degree;
	float deltaX,x,derivative;
	printf("\nTürevini almak istediðiniz fonksiyonun derecesini giriniz: ");
	scanf("%d",&degree);
	
	float y[degree];
	defY(y,&degree);
	
	printf("Hangi noktada türev almak istiyorsunuz: ");
	scanf("%f",&x);
	printf("DeltaX'i giriniz: ");
	scanf("%f",&deltaX);
	
	derivative = (forwardDerivative(y,&degree,x,deltaX) + backwardDerivative(y,&degree,x,deltaX)) / 2;
	printf("%f",derivative);
}
