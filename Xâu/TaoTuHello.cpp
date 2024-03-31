#include<string.h>
#include<stdio.h>
#include<ctype.h>

int main(){
	char tmp[6] = "hello";
	char c[1000];
	scanf("%s", &c);
	int n = 0;;
	char s[1000];
	for(int i =0; i < strlen(c); i++){
		if(c[i] == tmp[n]){
			n++;
			if(n==5){
				printf("YES");
				return 0;
			}
		}
	}
	printf("NO");
	
}