#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char c[20];
	gets(c);
	int d2 = 0, d3 = 0, d5 = 0, d7 = 0;
	for(int i = 0; i < strlen(c); i++){
		int x = c[i] - '0';
		if(x == 2) d2++;
		if(x == 3) d3++;
		if(x == 5) d5++;
		if(x == 7) d7++;
	}
	for(int i = 0; i< strlen(c); i++){
		int x = c[i] - '0';
		if(x == 2) {
			printf("2 %d\n", d2);
			d2 = 0;
		}
		if(x == 3){
			printf("3 %d\n", d3);
			d3 = 0;
		}
		if(x == 5){
			printf("5 %d\n", d5);
			d5 = 0;
		}
		if(x == 7){
			printf("7 %d\n", d7);
			d7 = 0;
		}
	}
}