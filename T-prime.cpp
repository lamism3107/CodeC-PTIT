#include<stdio.h>
#include<math.h>

int snt(int n){
	for(int i = 2; i<= sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return n > 1;
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i <= sqrt(n); i++){
		if(snt(i)) printf("%lld ", (long long)i*i);
	}
}