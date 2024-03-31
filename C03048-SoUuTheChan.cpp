#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int sochan = 0;
		int sole = 0;
		int tmp = n;
		while(n){
			int r = n%10;
			if(r % 2 == 0) sochan++;
			else sole++;
			n/=10;
		}
		if(tmp % 2 == 0 && (sochan > sole)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}