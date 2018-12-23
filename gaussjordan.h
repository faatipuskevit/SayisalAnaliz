void gaussJordanElemination(){
	int i,j,k, rowNtmp, equationCount, unknownCount;
	float simplifier, multiplier;
	
	printf("Denklem sayisini giriniz:");
	scanf("%d",&equationCount);
	
	printf("Bilinmeyen sayýsýný giriniz: ");
	scanf("%d", &unknownCount);
	
	printf("Katsayýlar matrisinin elemanlarýný giriniz: ");
	float coeffMatrix[equationCount][unknownCount];
	defmatrix(equationCount,unknownCount,coeffMatrix);
	
	printf("Sonuç matrisini giriniz: ");
	float arrResult[equationCount];
	
	for(i=0;i<equationCount;i++){
		printf("[%d,1]= ",i+1);
		scanf("%f",&arrResult[i]);	
	}
	
	
	
	float arrUnknown[unknownCount];
	
	
	
	float cmatrix[equationCount][unknownCount+1];	
	for(i=0;i<equationCount;i++){
		for(j=0;j<unknownCount;j++){
			cmatrix[i][j] = coeffMatrix[i][j];
		}
	}
	for(i=0;i<equationCount;i++){
		cmatrix[i][unknownCount] = arrResult[i];
	}
	//printmatrix(equationCount,unknownCount+1,cmatrix);
	i=0;
	rowNtmp = 1;
	while(i<equationCount){
		if(cmatrix[i][i] != 0){
			rowNtmp = i+1;
			simplifier = 1/cmatrix[i][i];
			
			rowoperation(unknownCount+1,i,simplifier,cmatrix);
			
			for(k=0;k<equationCount;k++){
				if(k!=i){
					multiplier = (-1)*cmatrix[k][i]/cmatrix[i][i];
					rowoperationadd(unknownCount+1,i,k,multiplier,cmatrix);
				}
			}
			i++;
		}else{
			if(cmatrix[rowNtmp][i] != 0){
				swaprows(unknownCount + 1,i,rowNtmp,cmatrix);
				
			}else{
				rowNtmp++;
			}
		}
		
	}
	//printmatrix(equationCount,unknwnCount+1,cmatrix);
	printf("Sýrasý ile bilinmeyenler");
	for(i=0;i<unknownCount;i++){
		arrUnknown[i] = cmatrix[i][unknownCount];
		printf("\nx%d = %f ",i,arrUnknown[i]);
	}
	
}
