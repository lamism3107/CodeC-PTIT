#include<stdio.h>
#include<math.h>

int check(long long n){
	while(n){
		int r = n%10;
		if(r % 2 != 0) return 0;
		n/=10;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(n%2 == 0 && check(n)) printf("YES");
		else printf("NO");
	}
}