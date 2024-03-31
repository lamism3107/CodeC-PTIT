#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
	char c[100];
	scanf("%s", &c);
	int cnt = 0;
	for(int i =0; i < strlen(c)-1; i++){
		if(c[i] == c[i+1]) cnt++;
	}
	printf("%d", cnt);
}