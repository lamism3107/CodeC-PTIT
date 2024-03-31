#include<stdio.h>
#include<math.h>

long long solve(long long n){
    long long ans;
    for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){
            n/=i;
        }
        ans=i;
    }
    if(n!=1) ans=n;
    return ans;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		printf("%lld\n", solve(n));
		
	}
}