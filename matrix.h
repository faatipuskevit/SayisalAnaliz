void defmatrix(int rows, int columns, float matrix[][columns]){
	int i, j;
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("\n[%d,%d] = ",i+1,j+1);
			scanf("%f", &matrix[i][j]);
		}
	}
}

void printmatrix(int rows, int columns, float matrix[][columns]){
	int i,j;
	printf("\n");
	for(i=0;i<rows;i++){
		printf("\n| ");
		for(j=0;j<columns;j++){
			printf(" %8.4f ", matrix[i][j]);
		}
		printf("|");
	}
}

void swaprows(int columns, int row1, int row2, float matrix[][columns]){
	int i;
	float tmp;
	for(i=0;i<columns;i++){
		tmp = matrix[row1][i];
		matrix[row1][i] = matrix[row2][i];
		matrix[row2][i] = tmp;
	}	
}

void rowoperation(int columns, int row, float multiplier, float matrix[][columns]){
	int i;
	for(i=0;i<columns;i++){
		matrix[row][i] *= multiplier;
	}
}

void rowoperationadd(int columns, int sourceRow, int targetRow, float multiplier, float matrix[][columns]){
	int i;
	for(i=0;i<columns;i++){
		matrix[targetRow][i] += matrix[sourceRow][i]*multiplier;
	}
}

float determinant(int columns, int rows, float matrix[][columns]){
	int i = 0,j = 0, k;
	int rowNtmp =1;
	float determinantis = 1.0;	
	while(i<rows){
		
		//printmatrix(matrix,rows,columns);
		
		if(matrix[i][i] != 0){
			rowNtmp = i+1;
			for(k = i+1; k<rows;k++){
				for(j=0;j<columns;j++);
				{
					//void rowoperationadd(int columns, int sourceRow, int targetRow, float multiplier float matrix[][columns]){
					//rowoperationadd(matrix,columns,i,k,((-1)*matrix[k][i]/matrix[i][i]));
					rowoperationadd(columns,i,k,((-1)*matrix[k][i]/matrix[i][i]),matrix);
				}
				
			}
			
			i++;
		}else{
			swaprows(columns,i,rowNtmp,matrix);
			//swaprows(matrix,columns,i,rowNtmp);
			rowNtmp++;
		}
		
	}
	for(i=0;i<rows;i++){
		determinantis *= matrix[i][i];
	}
	
	return determinantis;
}

void inverse(int rows, int columns, float matrix[][columns],float inversmatrix[][columns]){
	int i = 0,j = 0, k;
	int rowNtmp =1;
	float determinantis = 1.0,multiplier, simplifier;	
	while(i<rows){
		if(matrix[i][i] != 0){
			rowNtmp = i+1;
			simplifier = 1/matrix[i][i];
			
			//rowoperation(matrix,columns,i,simplifier);
			rowoperation(columns,i,simplifier,matrix);
			//rowoperation(inversmatrix,columns,i,simplifier);
			rowoperation(columns,i,simplifier,inversmatrix);
			for(k = 0; k<rows;k++){
				if(k!=i){
					multiplier = (-1)*matrix[k][i]/matrix[i][i];
					//rowoperationadd(matrix,columns,i,k,multiplier);
					rowoperationadd(columns,i,k,multiplier,matrix);
					//rowoperationadd(inversmatrix,columns,i,k,multiplier);
					rowoperationadd(columns,i,k,multiplier,inversmatrix);
				}
			}
			
			i++;
		}else{
			if(matrix[rowNtmp][i] != 0){
				//swaprows(matrix,columns,i,rowNtmp);
				swaprows(columns,i,rowNtmp,matrix);
				//swaprows(inversmatrix,columns,i,rowNtmp);
				swaprows(columns,i,rowNtmp,inversmatrix);
			}else{
				rowNtmp++;	
			}
		}
		
	}	
}
