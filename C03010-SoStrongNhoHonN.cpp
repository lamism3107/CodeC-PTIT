#include<stdio.h>
#include<math.h>

long long checkStrong(long long n){
	long long res = 1;
	for(int i = 1; i <= n; i++ ){
		res *= i;
	}
	return res;
}
int check(long long n){
	long long tong = 0;
	long long tmp = n;
	while(n!=0){
		long long r = n%10;
		tong += checkStrong(r);
		n/=10;
	}
	return tong == tmp;
}
int main(){
	long long a, b;
	scanf("%lld %lld",  &a, &b);
	if(a < b){
		for(long long i = a; i <= b; i++){
			if(check(i)) printf("%lld ", i);
		}
	}
	else{
		for(long long i = b; i <= a; i++){
			if(check(i)) printf("%lld ", i);
		}
	}
}