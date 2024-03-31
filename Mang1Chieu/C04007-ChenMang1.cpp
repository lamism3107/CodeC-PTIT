#include<stdio.h>
#include<math.h>

void chen(int *n, int m, int a[], int b[], int k){
	*n = *n + m;
	// dich mang ban dau
	for(int i = m + k; i < *n; i++){
		a[i] = a[i - m];
	}
	//chen mang
	for(int i = k; i < k+m; i++){
		a[i] = b[i - k];
	}
}
int main(){

	int n,m, k;
	scanf("%d%d", &n, &m);
	int a[n], b[m];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < m; i++){
		scanf("%d", &b[i]);
	}
	scanf("%d", &k);
	chen(&n, m, a, b, k);
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	
}