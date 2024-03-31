#include<stdio.h>
#include<math.h>

int solve(long long n){
	int res = 0;
	for(int i = 2; i <= sqrt(n); i++){
		int cnt = 0;
		while(n%i == 0){
			cnt++;
			if(cnt > 1) return 0;
			res+=cnt;
			n/=i;
		}
	}
	if(n!=1) res += 1;
	return res == 3;
}
int main(){
	long long n;
	scanf("%lld", &n);
	printf("%d", solve(n));
}