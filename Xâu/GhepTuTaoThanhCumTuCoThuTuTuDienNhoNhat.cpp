#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int cmp(const void *a, const void *b){
	char x[1000], y[1000], z[1000], t[1000];
	strcpy(x,(char*)a); strcpy(z, (char*)a);
	strcpy(y,(char*)b); strcpy(t, (char*)b);
	return strcat(x,y) < strcat(z,t);
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[101];
		gets(c);
		char *token = strtok(c," ");
		char  a[101][101];
		int n= 0;
		while(token != NULL){
			strcpy(a[n++], token);
			token = strtok(NULL, " ");
		}
		qsort(a, n, sizeof(a[0]), cmp);
		for(int i = 0; i < n; i++){
			printf("%s", a[i]);
		}
		printf("\n");
	}
}