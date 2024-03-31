#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[20];
		scanf("%s", c);
		for(int i = 0; i < strlen(c); i++){
			for(int j = 0; j < strlen(c) - i - 1; j++){
				if((c[j] ) > c[j + 1] ){
					int tmp = c[j] ;
					c[j]  = c[j + 1] ;
					c[j + 1]  = tmp; 				
				}
			}
		}
		int id = 0;
		while(c[id] == '0'){
			id ++;
		}
		for(int i = id; i < strlen(c); i++){
			printf("%c", c[i]);
		}
		printf("\n");
	}
}