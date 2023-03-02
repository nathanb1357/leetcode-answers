int checkValid(int** matrix, int matrixSize, int* matrixColSize) {
    int i,j,k;
    int count = 0;

    for(i = 0; i<matrixSize; i++) {
        for(j = 0; j<matrixSize; j++) {
            for(k = 1; k<matrixSize; k++) {
                if (j==k) break;
                if (matrix[i][j] == matrix[i][k]) count++;
                if (matrix[j][i] == matrix[k][i]) count++;
            }
        }
    }
    
    if (count==0) {return 1;}
    else {return 0;}
}