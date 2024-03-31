#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int t;
	scanf("%d", &t);
	int k = 1;
	getchar();
	while(t--){
		char c[1005];
		gets(c);
		char c2[1005];
 		gets(c2);
		printf("Test %d: ", k);
		k++;
		char a[100][100];
		int n = 0;
		char *token = strtok(c," ");
		while(token !=NULL){
			if(strcasecmp(token, c2)!=0) printf("%s ", token);
			token = strtok(NULL, " ");
		}
		
		printf("\n");
	}
}