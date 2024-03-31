#include<math.h>
#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int cnt = 1;
		for(int j = 0; j <= i * 2 ; j++ ){
			printf("%d", cnt);
			cnt++;
		}
		printf("\n");
	}
}