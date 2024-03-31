#include<stdio.h>
#include<math.h>


int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n, p;
		scanf("%lld %lld", &n , &p);
		//Cong thu legendre
		long long ans = 0;
		for(long long i = p; i <= n; i*=p){
			long long tmp = n;
			ans+= (tmp/i);
		}
		printf("%lld", ans);
		printf("\n");
	}
}