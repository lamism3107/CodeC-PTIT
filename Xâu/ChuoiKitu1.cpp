#include<string.h>
#include<stdio.h>
#include<ctype.h>

/*
in:
010011
out:
2

test 2:
in:
00
out
0

test 3:
in: 
11100
out
0
*/
int main(){
	char s[1000];
	gets(s);
	int idex = -1;
	int res = 0;
	for(int i = 0; i < strlen(s); i++){
		if(s[i] == '1'){
			if(idex == -1){
				idex = i;
			}
			else{
				res = res + i - idex -1;
				idex = i;
			}
		}
	}
	printf("%d", res);
}