/*
intput:
1
2*x^5 + 3*x^2 + 5*x^0
4*x^5 + 2*x^1 + 10*x^0
output:
#Test 1: 6*x^10 + 5*x^3 + 15*x^0
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

int dt[10001];

void solve(char c[]){
	for(int i = 0; i < strlen(c); i++){
		if(isdigit(c[i])){
			int tmp = 0;
			while(c[i]!='*'){
				tmp = tmp * 10 + c[i] - '0';
				i++;
			}
			i+=3;
			int mu = 0;
			while(isdigit(c[i])){
				mu = mu * 10 + c[i] - '0';
				i++;
			}
			dt[mu] += tmp;
		}
	}
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c1[10000];
		char c2[10000];
		gets(c1);
		gets(c2);
		memset(dt, 0 , sizeof(dt));
		solve(c1);
		solve(c2);
		int cnt = 0;
		int test = 0;
		++test;
		printf("#Test %d: ", test);
		for(int i = 10000; i >= 0; i--){
			if(dt[i]) cnt++;
		}
		for(int i = 10000; i >= 0; i--){
			if(dt[i]!=0){
				printf("%d*x^%d", dt[i], i);
				cnt--;
				if(cnt!=0){
					printf(" + ");
				}
			}
	
		}
		printf("\n");
	}
}