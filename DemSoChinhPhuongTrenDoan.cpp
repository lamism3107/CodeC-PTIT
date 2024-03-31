#include<stdio.h>
#include<math.h>

int main(){
	long long a, b;
	scanf("%lld %lld", &a, &b);
	int cnt = 0;
	long long x1 = sqrt(a);
	long long x2 = sqrt(b);
	if(x1*x1 != a) x1++;
	for(int i = x1; i <= x2; i++){
		cnt++;
	}
	printf("%d", cnt);
}