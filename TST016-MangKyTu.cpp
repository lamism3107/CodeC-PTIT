#include<stdio.h>
#include<string.h>

int main(){
	char c[1000];
	gets(c);
	int dem1 = 0, dem2 = 0, dem3 = 0, dem4 = 0, dem5 = 0;
	for(int i = 0; i < strlen(c); i++){
		if(c[i] == '{') dem1++;
		if(c[i] == '}') dem1--;
		
		if(c[i] == '(') dem2++;
		if(c[i] == ')') dem2--;
		
		if(c[i] == '[') dem3++;
		if(c[i] == ']')  dem3--;
		
		if(c[i] == '\'' ) dem4++;
		if(c[i] == '\'') dem4--;
		
		if(c[i] == '\"') dem5++;
		if(c[i] == '\"') dem5--;
	}
	if(dem1 != 0 || dem2 != 0 || dem3 != 0 || dem4 != 0 || dem5 !=0 ){
		printf("0");
	}
	else printf("1");
}