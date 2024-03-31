#include<stdio.h>
int main(){
	int c = 0;
	int a[100];
	for(int i = 1; i <= 100; i+=2){
		a[c++] = i;
	}
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = i; j < n ; j++){
			printf("%c", a[j] + 64);
		}
		printf("\n");
	}
}