#include<stdio.h>
#include<math.h>

int cmp(const void*a, const void *b){
	int* x = (int*) a;
	int* y = (int*) b;
	return *x - *y;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n;i++){
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), cmp);
	for(int i = n-1; i >= 0; i--){
		printf("%d ", a[i]);
	}
}