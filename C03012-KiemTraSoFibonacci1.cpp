#include<stdio.h>
long long f[100];
void init(){
	f[1] = 1;
	f[2] = 2;
	for(int i = 3; i <= 92; i++){
		f[i] = f[i-1] + f[i - 2];
	}
}
int main(){
	init();
//	for(int i = 0; i < 93; i++){
//		printf("%lld", f[i]);
//	}
	long long n;
	scanf("%lld", &n);
	for(int i = 0; i < 93; i++){
		if(f[i] == n){
			printf("1");
			return 0;
		}
	}
	printf("0");
}