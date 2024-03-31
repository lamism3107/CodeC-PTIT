#include<stdio.h>
#include<string.h>
#include<ctype.h>

/*
SDT hop le la day co 11 so va co so 8 o dau
#Test1
inp:
7818005553535
outp: 
YES
Test2
inp
31234524242522
outp: 
NO
*/
int main(){
	char c[1000];
	gets(c);
	int index = -1;
	for(int i = 0; i < strlen(c); i++){
		if(c[i] == '8'){
			index = i;
			break;
		}
	}
	if(index == -1){
		printf("NO");
	}
	else{
		if(strlen(c)- index >= 11) printf("YES");
		else printf("NO");
	}
}