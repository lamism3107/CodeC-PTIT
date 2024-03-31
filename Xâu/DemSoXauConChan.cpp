#include<string.h>
#include<stdio.h>
#include<ctype.h>
/*
Xau con chan la xau co ket thuc la 1 so chan, tinh ca xau rong => = tong cac vi tri co chu so chan +1

#Test1:
INP:
1234
OUP:
6
*/
int main(){
	char c[1005];
	gets(c);
	int res = 0;
	for(int i = 0; i < strlen(c); i++){
		if((c[i] - '0')%2==0){
			res += i + 1;
		}
	}
	printf("%d", res);
}