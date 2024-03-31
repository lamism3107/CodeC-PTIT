#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

const int mod = 1e9 + 7;
int main(){
	long long n;
	scanf("%lld", &n );
	//Cong thu legendre
	long long ans = 0;
	for(long long i = 5; i <= n; i*=5){
		long long tmp = n;
		ans += tmp/i;
		ans %= mod;
	}
	printf("%lld", ans);
	
}