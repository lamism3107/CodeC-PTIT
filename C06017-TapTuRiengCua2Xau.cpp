#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int cmp (const void *a, const void *b){
	char *x = (char*) a;
	char *y = (char*) b;
	return strcmp(x,y);
}
int main(){
	char c[1000], c2[1000];
	gets(c);
	gets(c2);
	char a[100][100], b[100][100];
	int n = 0, m = 0;;
	char *token = strtok(c," ");
	while(token != NULL){
		strcpy(a[n++], token);
		token = strtok(NULL, " ");
	}
	token = strtok(c2," ");
	while(token != NULL){
		strcpy(b[m++], token);
		token = strtok(NULL, " ");
	}
	int used[100];
	qsort(a, n, sizeof(a[0]), cmp);

	for(int i = 0; i< n; i++){
		while(strcmp(a[i], a[i+1]) == 0) i++;
		int ok = 1;
		for(int j = 0; j< m; j++){
			if(strcmp(a[i], b[j]) == 0) {
				ok = 0;
				break;
			}
		}
		if(ok) printf("%s ", a[i]);
	}
}