#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		int n;
		scanf("%d", &n);
		int a[100][100], b[100][100];
		for(int i = 0; i < n; i++){
			int cnt = 1;
			for(int j = 0; j <= i; j++){
				a[i][j] = cnt;
				cnt++;
			}
		}
		for (int j = 0; j < n; j++){
			for (int i = 0; i < n; i++){
				b[j][i] = a[i][j];
			}
	            
		}
		printf("Test %d: \n", i);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n;j++){
				int s = 0;
				for(int k = 0; k < n; k++){
					s += a[i][k] * b[k][j];
				}
				printf("%d ", s);
			}
			printf("\n");
		}
		printf("\n");
	}
}