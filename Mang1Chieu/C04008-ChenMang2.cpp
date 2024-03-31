#include<stdio.h>
#include<math.h>
//
//void chen(int *n, int m, int a[], int b[], int k){
//	*n = *n + m;
//	// dich mang ban dau
//	for(int i = m + k; i < *n; i++){
//		a[i] = a[i - m];
//	}
//	//chen mang
//	for(int i = k; i < k+m; i++){
//		a[i] = b[i - k];
//	}
//}
int main(){
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		int n,m, k;
		scanf("%d%d", &n, &m);
		scanf("%d", &k);
		int a[100], b[100];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < m; i++){
			scanf("%d", &b[i]);
		}	
		printf("Test %d:\n", i );
		n = n + m;
		for(int i = 0; i < k; i++){
			printf("%d ", a[i]);
		}
		for(int i = k; i < k+m; i++){
			printf("%d ", b[i - k]);
		}
			for(int i = m + k; i < n; i++){
			printf("%d ",a[i - m] );
		}		
		printf("\n");
		
		
	}
	
}