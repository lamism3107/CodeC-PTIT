#include<stdio.h>
#include<math.h>

//int prime[10001];
//void sang(){
//	for(int i = 0; i <= 10000; i++){
//		prime[i] = i;
//	}
//	for(int i = 2; i <= sqrt(10000); i++){
//		if(prime[j])
//	}
//}
long long snt(long long n){
	long long res ;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			res = i;
			while(n % i == 0) n/=i;
		}
	}
	if(n != 1) res = n;
	return res;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		printf("%lld\n", snt(n));
	}
	
}