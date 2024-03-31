#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	char c[100];
	gets(c);
	int num = 0, kitu = 0, alp = 0;
	for(int i = 0; i < strlen(c); i ++){
		if(isdigit(c[i])) num++;
		else if(isalpha(c[i])) alp++;
		else kitu++;
	}
	printf("%d %d %d", alp, num, kitu);
}