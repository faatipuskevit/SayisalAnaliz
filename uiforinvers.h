void inversalma(){
	int i,j,rows,columns;
	
	printf("�nversi al�nacak kare matrisin;\n"
	"Sat�r/s�tun say�s�: ");
	scanf("%d", &rows);
	
	columns = rows;
	
	float matrix[rows][columns];
	defmatrix(rows,columns,matrix);
	printmatrix(rows,columns,matrix);
	
	float inverseMatrix[rows][columns];
	for(i=0;i<rows;i++){
		inverseMatrix[i][i] = 1;		
	}
	
	float cmatrix[rows][columns];
	
	for(i=0;i<rows;i++){
		for(j=0;j<rows;j++){
			cmatrix[i][j] = matrix[i][j]	;
		}
	}
	printf("\ndeterminant= %f",determinant(columns,rows,cmatrix));
	printmatrix(rows,columns,inverseMatrix);
	if(determinant(columns,rows,matrix) != 0){
		inverse(rows,columns,matrix,inverseMatrix);
		printmatrix(rows,columns,inverseMatrix);
	}else{
		printf("\nDeterminant 0 oldu�undan matrisin inversi yoktur! ");
	}
	
	
}
