#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main(){
    char s[100];
    gets(s);
    int len = strlen(s);
    for (int i = 0; i < len; i++){
    	s[i] = tolower(s[i]);
	}
    char res[100][100];
    int n = 0;
    char *token = strtok(s, " ");
    while (token != NULL){
        strcpy(res[n++], token);
        token = strtok(NULL, " ");
    }
    for (int i = 0; i < n; i++){
        if (i == n - 1)
            printf("%s", res[i]);
        else
            printf("%c", res[i][0]);
    }
    printf("@ptit.edu.vn");
    return 0;
}