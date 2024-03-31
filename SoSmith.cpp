#include<stdio.h>
#include<math.h>

int tachSo(long long n){
	long long sum = 0;
	while(n>0){
		sum += n%10;
		n/=10;
	}
	return sum;
}
long long thuaso(long long n){
	int ans  = 0;
	for(int i = 2; i <= sqrt(n); i++){
		while(n%i == 0){
			ans+=tachSo(i);
			n/=i;
		}
	}
	if(n!=1) ans+=tachSo(n);
	return ans;
}

int main(){
	long long n;
	scanf("%lld", &n);
	if((thuaso(n) == tachSo(n))) printf("YES");
	else printf("NO");
}