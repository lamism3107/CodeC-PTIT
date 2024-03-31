#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		long long sochan = 0;
		long long sole = 0;
		long long tmp = n;
		while(n){
			int r = n%10;
			if(r % 2 == 0) sochan++;
			else sole++;
			n/=10;
		}
		
		if(tmp % 2 == 1 && (sole > sochan)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}