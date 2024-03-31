#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	int t;
	scanf("%d ", &t);
	while(t--){
		char c[200];
		scanf("%s", c);
		int ok = 1; 
		for(int i = 0; i< strlen(c)/2; i++){
			if(c[i] != c[(strlen(c) - i - 1)]){
				ok = 0; 
				break;
			}
		}
		for(int i  = 0; i < strlen(c); i++){
			if((c[i] - '0') % 2 == 1){
				ok = 0;
				break;
			}
		}
		if(ok) printf("YES\n");
		else printf("NO\n");
	}
}