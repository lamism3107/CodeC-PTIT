#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char s[101];
	char a[100][100];
	int n =0;
	int max = 0;
	while(scanf("%s", s) != -1){
		if(strlen(s) > max){
			max = strlen(s);
			strcpy(a[n++], s);
		}
	}
	for(int i = 0; i < n; i++){
		if(strlen(a[i]) == max){
			printf("%s - %d", a[i], max);
		}
	}
}