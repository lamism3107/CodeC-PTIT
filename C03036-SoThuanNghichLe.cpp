#include<stdio.h>
#include<math.h>

int check(long long n){
	long long tmp = n;
	long long sodao = 0;
	int sum = 0;
	while(n){
		int r = n%10;
		sum += r;
		if(r % 2 == 0) return 0;
		sodao = sodao *10 + r;
		n/=10;
		
	}
	if(sodao == tmp && sum % 2 == 1) return 1;
	else return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(check(n)) printf("YES");
		else printf("NO");
	}
}