#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char c[102];
	gets(c);
	char a[100][100];
	int n = 0;
	strlwr(c);
	char *token = strtok(c," ");
	while(token != NULL){
		strcpy(a[n++], token);
		token = strtok(NULL, " ");
	}
	int used[100] ;
	for(int i = 0; i < n; i++){
		if(used[i] == 0){
			int cnt = 1;
			for(int j = i + 1; j < n; j++){
				if(strcmp(a[i], a[j]) == 0){
					cnt++;
					used[j] =	 1;
				}
			}
			printf("%s %d\n", a[i], cnt);	
		}
	
	}
	
}