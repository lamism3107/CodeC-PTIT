#include <stdio.h> 
int gcd(long long a,long long b){ 
	while(b != 0){
		long long r = a%b;
		a = b;
		b = r;
	} 
	return a;
} 
long long lcm(long long a, long long b){
	return a / gcd(a, b) * b;
}
int main(){ 
	int t;
	scanf("%d",&t); 
	while(t--){ 
	int n, m;
	scanf("%d%d", &n, &m); 
	long long res = 1; 
	for(long long i = n;i <= m;i++){ 
		res = lcm(res, i); 
	} 
	
	printf("%lld\n",res); 
	} 
}