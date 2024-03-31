#include<stdio.h>
#include<math.h>

int cmp(const void *a, const void *b){
	int* x = (int*) a;
	int* y = (int*) b;
	return *x - *y;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[101], chan[101] , le[101] ;
	int j = 0, k = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if(a[i] % 2 == 0){
			chan[j] = a[i];
			j++;
		} 
		else {
//			printf("%d ", a[i]);
			le[k] = a[i];
			k++;
		}
	}
	qsort(chan, j, sizeof(int), cmp);
	qsort(le, k, sizeof(int), cmp);
	for(int i =0; i < j; i++){
		printf("%d ", chan[i]);
	}
	for(int i = 0; i < k; i++){
		printf("%d ", le[i]);
	}
}