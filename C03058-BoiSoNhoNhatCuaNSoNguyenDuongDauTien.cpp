#include<stdio.h>
#include<math.h>

long long gcd(long long a, long long b){
	while(b != 0){
		long long r = a %b;
		a =b;
		b = r;
	}
	return a;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		long long res = 1;
		for(int i = 1; i <= n; i++){
			long long uoc = gcd(res, i);
			res = res * i / uoc;
		}
		printf("%lld\n", res);
	}
}