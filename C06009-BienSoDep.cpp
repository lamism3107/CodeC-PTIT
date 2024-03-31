#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int check1(char c[]){
	for(int i = 0; i < strlen(c) - 1; i++){
		if(c[i]- '0' >= c[i + 1]-'0') {
			return 0;
		}
	}
	return 1;
}
int check2(char c[]){
	for(int i = 1;i < strlen(c) ; i++){
		if(c[i] != c[0]) return 0;
	}
	return 1;
}
int check3(char c[]){
	for(int i = 1; i <= 2; i++ ){
		if(c[i] != c[0]) return 0;
	}
	if(c[strlen(c) - 1] != c[strlen(c) - 2]) return 0;
	return 1;
}

int check4(char c[]){
	for(int i = 0; i < strlen(c); i++){
		if(c[i] != '6' && c[i] !='8') return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[100];
		gets(c);
		char s[100];
		int n = 0;
	
		for(int i = 6; i < strlen(c); i++){
			if(isdigit(c[i])){
				s[n++] = c[i];
			}
		}
	
		if(check1(s) || check2(s) || check3(s) || check4(s)) printf("YES\n");
		else printf("NO\n");
	}
}