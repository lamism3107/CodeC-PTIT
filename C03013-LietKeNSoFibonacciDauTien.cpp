#include<stdio.h>
long long f[100];
void init(){
	f[1] = 1;
	f[2] = 1;
	for(int i = 3; i <= 92; i++){
		f[i] = f[i-1] + f[i - 2];
	}
}
int main(){
	init();
	long long n;
//	for(int i = 0;i < 92; i++){
//		printf("%lld ", f[i]);
//	}
	scanf("%lld", &n);
	for(int i = 0; i < 92; i++){
		if(n != 0){
			printf("%lld ", f[i]);
			n--;
		}
		else{
			break;
		}
	}
}