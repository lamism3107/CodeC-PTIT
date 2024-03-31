#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[20];
		scanf("%s", c);
		for(int i = 0; i < strlen(c) - 1; i++){
			int min = i;
			for(int j = i+1; j < strlen(c); j++){
				if(c[j] < c[min]){
					min = j;
				}
			}
			char tmp = c[min];
			c[min] = c[i];
			c[i] = tmp;
		}
		int id = 0;
		while(c[id] == '0'){
			id++;
		}
		for(int i = id; i < strlen(c); i++){
			printf("%c", c[i]);
		}
		printf("\n");
	}
}