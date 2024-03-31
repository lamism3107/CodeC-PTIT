#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		int ok = 1;
		if(c[0] != '8' || c[strlen(c)-1] != '8') ok = 0;
		for(int i = 0; i < strlen(c)/2; i++){
			if(c[i] != c[strlen(c)-i-1]) {
				ok = 0;
				break;
			}
		}
		int sum = 0;
		for(int i = 0; i < strlen(c); i++){
			sum += c[i] -'0';
		}
		if(sum % 10 != 0) ok = 0;
		if(ok) printf("YES\n");
		else printf("NO\n");
	}
}