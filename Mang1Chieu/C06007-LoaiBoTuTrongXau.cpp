#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	char c1[300], c2[300];
	gets(c1);
	scanf("%s", c2);
	char *token = strtok(c1, " ");
	while(token != NULL){
		if(strcmp(token, c2) != 0) printf("%s ",token );
		token = strtok(NULL, " ");
	}
	
}