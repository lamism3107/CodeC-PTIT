#include<stdio.h>
#include<math.h>
long long gcd(long long a, long long b){
	while(b!=0){
		long long r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long a, b, c, d;
		scanf("%lld%lld%lld%lld", &a, &b, &c,&d);
		if(gcd(a,b) == gcd(c,d)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}