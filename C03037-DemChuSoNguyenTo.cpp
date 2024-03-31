#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char c[20];
	int cnt[100];
	gets(c);
	int dem2 = 0, dem5 = 0, dem7 = 0, dem3 = 0;
	for(int i = 0; i < strlen(c); i++){
		if(c[i] == '2') dem2++;
		if(c[i] == '3') dem3++;
		if(c[i] == '5') dem5++;
		if(c[i] == '7') dem7++;
	}
	for(int i = 0; i < strlen(c); i++){
		if(c[i] == '2' && dem2!=0){
			printf("2 %d\n", dem2);
			dem2 = 0;
		}
		if(c[i] == '3' && dem3!=0){
			printf("3 %d\n", dem3);
			dem3 = 0;
		}
		if(c[i] == '5' && dem5!=0){
			printf("5 %d\n", dem5);
			dem5 = 0;
		}
		if(c[i] == '7' && dem7!=0){
			printf("7 %d\n", dem7);
			dem7 = 0;
		}
		
	}
}