#include<stdio.h>

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
		int res = 1;
		int max = a[0];
		for(int i = 1; i < n; i++){
			if(a[i] > max) {
				max = a[i];
				res++;
			}
		}
		printf("%d", res);
		printf("\n");
	}
}