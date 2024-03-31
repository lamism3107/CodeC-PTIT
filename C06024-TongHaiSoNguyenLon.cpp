#include<stdio.h>
#include<string.h>

void reverse(int a[], int n){
	int l = 0, r = n- 1;
	while(l <= r){
		int tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		l++; r--;
	}
}

void solve(char c1[], char c2[]){
	
	int n1 = strlen(c1), n2 = strlen(c2);
	int a[n1], b[n1];
	int x = 0, y = 0;
	for(int i = 0; i < n1; i++){
		a[i] = c1[i] - '0';
	}
	for(int j = 0; j < n2; j++){
		b[j] = c2[j] - '0';
	}
	reverse(a, n1);
	reverse(b, n2);
	for(int i = n2; i < n1; i++){
		b[i] = 0;
	}
	int res[1001];
	int size = 0;
	int nho = 0;
	for(int i = 0; i < n1; i++){
		int tmp = a[i] + b[i] + nho;
		res[size++] = tmp%10;
		nho = tmp/10;
	}
	if(nho != 0){
		res[size++] = nho;
	}
	for(int i =size-1; i >= 0; i--){
		printf("%d", res[i]);
	}
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c1[1000], c2[1000];
		gets(c1);
		gets(c2);
		if(strlen(c1) > strlen(c2)){
			solve(c1, c2);
		}
		else {
			solve(c2, c1);
		}
		printf("\n");
		
	}
}