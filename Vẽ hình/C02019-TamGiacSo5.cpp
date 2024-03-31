#include<stdio.h>

int main(){
	int chan[100];
	int k = 0;
	for(int i = 2; i <= 100; i+=2){
		chan[k++] = i;
	}
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j= 0; j <= i;j++){
			printf("%d", chan[j]);
		}
		for(int j = i-1; j >= 0; j--){
			printf("%d", chan[j]);
		}
		printf("\n");
	}
}