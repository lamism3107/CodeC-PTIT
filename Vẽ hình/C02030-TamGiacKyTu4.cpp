#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[100];
	int c = 0;
	for(int i = 0; i < 100; i+=2){
		a[c++] = i;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			printf("%c", a[j] + 64);
		}
		for(int j = i - 1; j >= 0; j--){
			printf("%c", a[j] + 64);
		}
		printf("\n");
	}
}