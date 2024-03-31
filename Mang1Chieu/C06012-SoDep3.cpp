#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[500]; 
		gets(c);
		int ok = 1;
		for(int i = 0; i < strlen(c)/2; i++){
			if(c[i] != c[strlen(c) - i - 1]) {
				ok = 0;
				break;
			}
		}
		for(int i = 0; i < strlen(c); i++){
			if(c[i] != '2' && c[i] != '3' && c[i] != '5' && c[i] != '7'){
				ok = 0; 
				break;
			}
		}
		if(ok) printf("YES\n");
		else printf("NO\n");
	}
}