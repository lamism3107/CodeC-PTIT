#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	long long n;
	scanf("%lld", &n);
	int cnt = 0;
	for(int i = 1; i <= sqrt(n); i++){
		if(n%i==0){
			if(i != n/i) cnt+= 2;
			else cnt++;
		}
	}
	printf("%d", cnt);
}