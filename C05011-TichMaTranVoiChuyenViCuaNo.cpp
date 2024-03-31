#include<stdio.h> 

int main(){
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		int n, m;
	    scanf("%d %d", &n, &m);
	    int a[n][m];
	    int b[m][n]; // Ma tr?n chuy?n v?
	    for (int i = 0; i < n; i++)
	        for (int j = 0; j < m; j++)
	            scanf("%d", &a[i][j]);
	    for (int j = 0; j < m; j++)
	        for (int i = 0; i < n; i++)
	            b[j][i] = a[i][j];
	    printf("Test %d:\n", i);
	    for (int i = 0; i < n; i++)
	    {
	        for (int j = 0; j < n; j++)
	        {
	            int s = 0;
	            for (int k = 0; k < m; k++)
	                s += a[i][k] * b[k][j];
	            printf("%d ", s);
	        }
	        printf("\n");
	    }
	    printf("\n");
	}
}