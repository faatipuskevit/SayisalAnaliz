void trapez(){
	int i, degree;
	float a,b,n,h,x0,integration;
	printf("\n\nTrapez Yöntemi Ýle Nümerik Ýntegral Hesaplama");
	printf("\nKaçýncý derececeden bir fonksiyon gireceksiniz: ");
	scanf("%d",&degree);
	
	float y[degree];
	defY(y,&degree);
	
	printf("Ýntegralin alt sýnýrýný giriniz: ");
	scanf("%f", &a);
	
	printf("Ýntegralin üst sýnýrýný giriniz: ");
	scanf("%f", &b);
	
	printf("Ýntegrali kaç parçaya ayýrarak hesaplamak istiyorsunuz:  ");
	scanf("%f", &n);
	
	h = (b-a)/n;
	x0 = a + h;
	integration = (calcY(a,y,degree) + calcY(b,y,degree))/2;
	
	for(i=1;i<n;i++){
		integration += calcY(x0,y,degree);
		x0 += h;
	}
	integration *= h;
	printf("\nÝntegralin sonucu = %f",integration);
}

void simpson(){
	float a,b,tmp = 0,h,integration = 0,x0;
	int i,n,degree;
	
	printf("\n\nSimpson Yöntemi Ýle Nümerik Ýntegral Hesaplama");
	printf("\nKaçýncý derececeden bir fonksiyon gireceksiniz: ");
	scanf("%d",&degree);
	
	float y[degree];
	defY(y,&degree);
	
	printf("Ýntegralin alt sýnýrýný giriniz: ");
	scanf("%f", &a);
	
	printf("Ýntegralin üst sýnýrýný giriniz: ");
	scanf("%f", &b);
	
	printf("Ýntegrali kaç parçaya ayýrarak hesaplamak istiyorsunuz:\n"
			"Lütfen çift sayý giriniz");
	scanf("%d", &n);
	
	h = (b-a)/n;
	x0 = a;
	
	for(i=1;i<n;i+=2){
		integration += calcY(x0 + i*h,y,degree);
	}
	integration *= 2;
	for(i=2;i<n;i+=2){
		integration += calcY(x0 + i*h,y,degree);
	}
	integration *=2;
	integration +=  calcY(x0,y,degree) + calcY(b,y,degree);
	integration *= h/3;
	printf("\nÝntegralin sonucu = %f",integration);

}
