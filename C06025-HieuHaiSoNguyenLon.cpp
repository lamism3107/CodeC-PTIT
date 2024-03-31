#include<math.h>
#include<string.h>
#include<stdio.h>
void reverse(int a[], int n){
	int l = 0, r = n-1;
	while(l <= r){
		int tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		l++; r--;
	}
}
void solve(char c1[], char c2[]){
	int n1 = strlen(c1), n2 = strlen(c2);
	int a[n1], b[n1], c[n1];
	int size = 0;
	for(int i = 0; i < n1; i++){
		a[i] = c1[i] - '0';
	}
	for(int i = 0; i < n2; i++){
		b[i] = c2[i] - '0';
	}
	reverse(a, n1);
	reverse(b, n2);
	for(int i = n2; i < n1; i++){
		b[i] = 0;
	}
//	for(int i = 0; i < n1; i++){
//		printf("%d", a[i]);
//	}
//	printf("\n");
//	for(int i = 0; i < n1; i++){
//		printf("%d", b[i]);
//	}
//	printf("\n");
	int nho = 0;
	for(int i = 0; i < n1; i++){
		int tmp = a[i] - b[i] - nho;
		if(tmp < 0 ){
			nho = 1;
			c[size++] = 10 + tmp;
		}
		else{
			c[size++] = tmp;
			nho = 0;
		}
	}
	int x = size-1;
	while(c[x] == 0){
		x--;
	}
	for(int i = x; i >= 0; i--){
		printf("%d", c[i]);
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
		if(strlen(c1) > strlen(c2) || (strlen(c1) == strlen(c2) && strcmp(c1, c2) > 0 )){
			solve(c1, c2);
		}
		else solve(c2, c1);
		printf("\n");
	}
}