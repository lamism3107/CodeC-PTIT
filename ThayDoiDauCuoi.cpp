#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char c[100];
	gets(c);
	int n = strlen(c) -1;
	char tmp = c[n];
	c[n] = c[0];
	c[0] = tmp;
	if(c[0] == '0'){
		for(int i = 1;i <= n; i++){
			printf("%c", c[i]);
		}
	}
	else {
		for(int i = 0; i <= n;i++){
			printf("%c", c[i]);
		}
	}
	
}