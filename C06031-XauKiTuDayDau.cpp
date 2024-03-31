#include<stdio.h>
#include<string.h>

int main(){
	char c[1000];
	scanf("%s", c);
	int lis[strlen(c)];
	for(int i = 0; i < strlen(c); i++){
		lis[i] = 1;
		for(int j = 0; j < i; j++){
			if(c[i] > c[j] && lis[i] < lis[j] + 1){
				lis[i] = lis[j] + 1;
			}
		}
	}
	int res = 0;
	for(int i = 0; i < strlen(c); i++){
		if(lis[i] > res){
			res = lis[i];
		}
	}
	printf("%d",  26 - res);
}