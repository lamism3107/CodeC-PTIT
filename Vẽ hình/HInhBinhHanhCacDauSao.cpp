#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	char a[n][n];
	for(int i = n-1; i>=0; i--){
		if(i != 0){
			for(int j = 0; j <i;j++){
				printf("~");
			}
		}
		for(int k = 0; k < n; k++){
			printf("*");
		}
		printf("\n");
	}
}