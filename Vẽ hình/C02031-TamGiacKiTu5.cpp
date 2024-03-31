#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i = n - 1; i >= 0; i--){
		int cnt = i + 64;
		for(int j = 0; j <= i; j++){
			printf("%c", cnt);
			cnt++;
		}
		printf("\n");
	}
}