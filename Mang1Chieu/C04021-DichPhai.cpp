#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int k;
	scanf("%d", &k);
	for(int i = 0; i < k; i++){
		printf("%d ", a[n - k + i]);
	}
	for(int i = k; i < n;i++){
		printf("%d ", a[i -k]);
	}
}