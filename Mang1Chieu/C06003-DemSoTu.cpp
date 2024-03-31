#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[300];
		gets(c);
		char *token = strtok(c, " ");
		int cnt = 0;
		while(token != NULL){
			cnt++;
			token = strtok(NULL, " ");
		}
		printf("%d\n", cnt);
	}
}