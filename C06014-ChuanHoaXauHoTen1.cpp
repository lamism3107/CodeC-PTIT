#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		for(int i = 0; i < strlen(c); i++){
			c[i] = tolower(c[i]);
		}
		char a[100][100];
		int n = 0;
		char *token = strtok(c, " ");
		while(token !=NULL){
			strcpy(a[n++], token);
			token = strtok(NULL, " ");
		}
		for(int i  = 0; i < n; i++){
			for(int j = 0; j < strlen(a[i]); j++){
				if(j == 0) {
					a[i][j] = toupper(a[i][j]);
					printf("%c", a[i][j]);
				}
				else printf("%c", a[i][j]);
			}
			if(i != n-1){
				printf(" ");
			}
		}
		printf("\n");
	}
}