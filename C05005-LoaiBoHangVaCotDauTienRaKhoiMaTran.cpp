#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	int test = 1;
	while(t--){
		int n, m;
		scanf("%d%d", &n,&m);
		int a[100][100];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		printf("Test %d:\n", test);
		test++;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(i != 0 && j != 0){
					printf("%d ", a[i][j]);
				}
			}
			printf("\n");
		}
	}
}