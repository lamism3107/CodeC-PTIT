#include<stdio.h>
#include<math.h>

int main(){
	long long n;
	long long max = 0;
	long long min = 1e18;
	while(scanf("%lld", &n) != -1){
		if(n > max) max = n;
		if( n < min) min = n;
	}
	printf("%lld %lld", max, min);
}