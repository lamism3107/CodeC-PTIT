#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
/*
INP:
123456789
987654321
OUTP:
1111111110
*/


//Coi c1 la so lon hon
void solve(char c1[], char c2[]){
	//dao nguoc chuoi
	int l = 0, r = strlen(c1) ;
	while(l <= r){
	    char tmp;
	    tmp = c1[l];
	    c1[l] = c1[r];
	    c1[r] = tmp;
	    l++, r--;
	}
	l = 0; 
	r = strlen(c2) - 1;
	while(l <= r){
	    char tmp;
	    tmp = c2[l];
	    c2[l] = c2[r];
	    c2[r] = tmp;
	    l++, r--;
	}
// 	strrev(c2);
	int n1 = strlen(c1);
	int n2 = strlen(c2);
	int x[1000], y[1000];
	int n = 0, m = 0;
	//chuyen chuoi sang mang chu so
	for(int i = 0; i < n1; i++){
		x[n++] = c1[i] - '0';
	}
	for(int i = 0; i < n2; i++){
		y[m++] = c2[i] - '0';
	}
	for(int i = n2; i < n1; i++){
		y[i] = 0;
	}
	int res[1000];
	int h = 0;
	int nho = 0;
	for(int i = 0; i < n1; i++){
		int tmp = x[i] + y[i] + nho;
		nho = tmp/10;
		res[h++] = tmp%10;
	}
	if(nho!=0){
		res[h++] = nho;
		nho-=1;
	}
	
	for(int i = h - 1; i >= 0; i--){
		printf("%d", res[i]);
	}
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c1[1000];
		char c2[1000];
		gets(c1);
		gets(c2);
		if(strlen(c1) > strlen(c2))solve(c1,c2);
		else solve(c2,c1);
		printf("\n");
	}
	
}