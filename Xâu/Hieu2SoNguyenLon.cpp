#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
/*
INP:
12835   53821
79		97
OUTP:
12756
*/
void reverse(char c[]){
	int l = 0, r = strlen(c) -1;
	while(l < r){
		char tmp = c[l];
		c[l] = c[r];
		c[r] = tmp;
		l++; r--;
	}
}
void solve(char c1[], char c2[]){
	reverse(c1);
	reverse(c2);
	int n1 = strlen(c1), n2 = strlen(c2);
	int x[1001], y[1001], z[1001];
	int n = 0, m = 0, l = 0;
	for(int i = 0; i < n1;i++){
		x[n++] = c1[i] - '0';
	}
	for(int i = 0; i < n2;i++){
		y[m++] = c2[i] - '0';
	}
	for(int i = n2; i < n1; i++){
		y[i] = 0; 
	}
	int nho = 0;
	for(int i  = 0; i < n1; i++){
		int tmp = x[i] - y[i] - nho;
		if(tmp < 0){
			nho = 1;
			z[l++] = tmp + 10;
		} 
		else{
			nho = 0;
			z[l++] = tmp;
		}
	}
	int ok = 0;
	for(int i = l-1; i >= 0; i--){
		if(z[i]==0 && ok == 0) continue;
		else{
			ok = 1;
			printf("%d", z[i]);
		}
	}
	if(ok == 0) printf("0");
}

int main(){
	char c1[1000], c2[1000];
	gets(c1);
	gets(c2);
	if(strlen(c1) > strlen(c2)){
		solve(c1, c2);
	}
	else if(strlen(c1) == strlen(c2)){
		if(strcmp(c1,c2) == 1) solve(c1,c2);
		else solve(c2,c1);
	}
	else solve(c2,c1);
	
}