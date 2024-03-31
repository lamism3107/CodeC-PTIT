#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int cmp(const void*a, const void*b){
	int*x = (int*) a;
	int*y = (int*) b;
	return *x - *y;
	
}
int main(){
	int t;
	scanf("%d", &t);
	int test = 1;
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n+1];
		int b[n+1];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			scanf("%d", &b[i]);
		}
		qsort(a, n, sizeof(int), cmp);
		qsort(b, n, sizeof(int), cmp);
		int l = 0, r = n - 1;
		while(l <= r){
			int tmp =  b[l];
			b[l] = b[r];
			b[r] = tmp;
			l++; r--;
		}
		int i = 0, j = 0, k = 0;
		printf("Test %d:\n", test);
		test++;
		while(i < n + n){
			if(i % 2 == 0) {
				printf("%d ", a[j++]);
				i++;
			}
			else{
				printf("%d ", b[k++]);
				i++;
			}
		}
		printf("\n");
	}
}