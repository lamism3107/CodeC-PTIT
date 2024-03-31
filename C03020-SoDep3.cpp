#include<stdio.h>
#include<string.h>
int check(long long n){
	long long sum = 0;
	long long sodao = 0;
	long long tmp = n;
	int ok = 0;
	while(n){
		int r = n%10;
		if(r == 6) ok = 1;
		sum+= r;
		sodao = sodao*10 + r;
		n/=10;
	}
	int x= sum%10;
	return (x == 8 && ok == 1 && sodao == tmp);
}
int main(){
	long long n, m;
	scanf("%lld%lld", &n, &m);
	if(n < m){
		for(long long i = n; i <= m; i++){
			if(check(i)) printf("%lld ", i);
		}
	}
	else{
		for(long long i = m; i <= n; i++){
			if(check(i)) printf("%lld ", i);
		}
	}
}