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
		int cnt= 1;
		for(int i = 0; i < strlen(a) - 1; i++){
			if(a[i] == a[i + 1]) {
				if(i == strlen(a) - 2){
					printf("%c%d", a[i], ++cnt);
				}
				else{
					cnt++;
				}
			}
			else{
				printf("%c%d", a[i], cnt);
				cnt = 1;
				
			}
		}
		if(a[strlen(a) - 1] != a[strlen(a) - 2]) printf("%c1", a[strlen(a) - 1]);
		printf("\n");
	}
}