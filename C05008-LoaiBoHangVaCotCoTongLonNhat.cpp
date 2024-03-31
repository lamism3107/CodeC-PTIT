#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	int test = 1;
	while(t--){
		int n, m;
		scanf("%d%d",&n, &m );
		int a[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				scanf("%d", &a[i][j]);

			}
		}
		int res1  =0;
		int maxRow;
		for(int i = 0; i < n; i++){
			int sum1 = 0;
			for(int j = 0; j < m; j++){
				sum1 += a[i][j];
			}
			if(sum1 > res1){
				res1 = sum1;
				maxRow = i;
			}
		}
		int res2 = 0;
		int maxCol;
		for(int j = 0; j < m;j++){
			int sum2 = 0;
			for(int i = 0; i < n; i++){
				if(i == maxRow){ 
					continue;
				}
				else{
					sum2+= a[i][j];								
				}
			}
			if(sum2 > res2){
				res2 = sum2;
				maxCol = j;
			}
		}
		printf("Test %d:\n", test);
		test++;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(i == maxRow || j == maxCol) continue;
				else printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}