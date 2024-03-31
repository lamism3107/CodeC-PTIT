#include <stdio.h>

int main(){
    int m, n, p, q;
    scanf("%d %d %d %d", &m, &n, &p, &q);
    int a[m][n], b[n][p], c[p][q];
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);
    }
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < p; ++j)
            scanf("%d", &b[i][j]);
    }
    for (int i = 0; i < p; ++i){
        for (int j = 0; j < q; ++j)
            scanf("%d", &c[i][j]);
    }

    int res[m][p];
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < p; ++j){
        	res[i][j] = 0;
            for (int k = 0; k < n; ++k)
                res[i][j] += a[i][k] * b[k][j];
        }
    }

    /* Output[m][q] = res[m][p] * c[p][q] */
    int output[m][q];
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < q; ++j){
            output[i][j] = 0;
            for (int k = 0; k < p; ++k)
                output[i][j] += res[i][k] * c[k][j];
        }
    }
    for(int i = 0; i < m; i++){
    	for(int j = 0; j < q; j++){
    		printf("%d ", output[i][j]);
		}
		printf("\n");
	}
    return 0;
}