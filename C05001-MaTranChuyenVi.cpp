#include<stdio.h>
#include<math.h>
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[100][100];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 1; i <= m ;i++){
		for(int j = 1; j <= n ;j++){
			printf("%d", a[j][j]);
		}
		printf("\n");
	}
}