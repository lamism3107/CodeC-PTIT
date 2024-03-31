#include<stdio.h>

int main(){
	int chan[100], le[100];
	int k = 0, m = 0;
	for(int i = 1; i < 100; i+= 2){
		le[k++] = i;
	}
	for(int j = 2; j < 100; j+=2){
		chan[m++] = j;
	}
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		if(i % 2 == 0){
			for(int j = 0; j < i; j++){
				printf("%d", chan[j]);
			}
			printf("\n");
		}
		else{
			for(int j = 0; j < i; j++){
				printf("%d", le[j]);			
			}
			printf("\n");
		}	
	}
}