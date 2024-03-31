#include<stdio.h>

int main(){
	int le[100];
	int k = 0;
	int n;
	for(int i = 1; i < 100; i+= 2){
		le[k++] = i;
	}
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0 ; j < n- i -1; j++){
			printf("~");
		}
		for(int j = 0; j <= i; j++){
			printf("%d", le[j]);
		}
		for(int j = i-1; j >= 0; j--){
			printf("%d", le[j]);
		}
		printf("\n");
	}
	
}