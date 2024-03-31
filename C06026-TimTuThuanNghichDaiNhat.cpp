#include<stdio.h>
#include<math.h>
#include<string.h>

struct thuanNghich{
	char c[1000];
	int fre ;	
};
typedef struct thuanNghich tn;

int check(char s[]){
	for(int i = 0; i < strlen(s)/2; i++){
		if(s[i] != s[strlen(s) - i - 1]) return 0;
	}
	return 1;
}
int main(){
	thuanNghich tn[1000];
	int n = 0;
	char s[1000];
	while(scanf("%s", s) != -1){
		if(check(s)){
			int ok = 0;
			for(int i = 0; i < n; i++){
				if(strcmp(tn[i].c, s)==0 ){
					ok = 1;
					tn[i].fre++;
				}
			}
			if(ok == 0){
				strcpy(tn[n].c, s);
				tn[n].fre = 1;
				n++;
			}
		}
	}
	int res = 0;
	for(int i = 0; i < n; i++){
		if(strlen(tn[i].c) >= res){
			res = strlen(tn[i].c);
		}
	}
	for(int i =0; i < n; i++){
		if(strlen(tn[i].c) == res ){
			printf("%s %d\n", tn[i].c, tn[i].fre);
		}
	}
}