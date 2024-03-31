#include<stdio.h>
#include<math.h>
int check(long long n){
	long long x = sqrt(n);
	if(x*x == n) return 1;
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
		printf("\n");
	}
}