#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i =0; i < n; i++){
		for(int j = 0; j < i; j++){
			printf("~");
		}
		for(int k = 0; k < m; k++){
			if(k ==0 || k == m-1 || i == 0 || i == n-1){
				printf("*");
			}
			else printf(".");
		}
		printf("\n");
	}
}