#include<stdio.h>
#include<math.h>
void reverse(int a[], int n){
	for(int i = 0; i < n/2; i++){
		int tmp = a[i];
		a[i] = a[n-i-1];
		a[n- i - 1] = tmp;
	}
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n;i++){
			scanf("%d", &a[i]);
		}
		int res[n];
		int k = 0;
		int max = a[n-1];
		res[k++] = a[n-1];
		for(int i = n-2; i >=0; i--){
			if(a[i] > max){
				max = a[i];
				res[k++] = a[i];
			}
		}
		reverse(res, k);
		for(int i = 0; i < k ;i++){
			printf("%d ", res[i]);
		}
		printf("\n");
	}
}