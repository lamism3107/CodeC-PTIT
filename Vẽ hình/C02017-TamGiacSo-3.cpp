#include<math.h>
#include<stdio.h>

int main(){
	int le[100];
	int k = 0;
	for(int i = 1; i < 100; i+= 2){
		le[k++] = i;
	}
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int cnt = 1;
		for(int j = 0; j <= i  ; j++ ){
			printf("%d", le[j]);
		}
		for(int j = i - 1; j >= 0; j--){
			printf("%d", le[j]);
		}
		printf("\n");
	}
}