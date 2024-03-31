#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[300];
		gets(a);
		int ok = 1;
		for(int i = 0; i < strlen(a); i++){
			if(a[i] != '0' && a[i] != '1' && a[i] != '2') {
				ok = 0;
				break;
			}
		}
		if(ok) printf("YES\n");
		else printf("NO\n");
	}
}