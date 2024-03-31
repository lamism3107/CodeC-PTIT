#include<stdio.h>
#include<math.h>


int prime[10000001];
void sang(){
	for(int i = 1; i <= 10000000; i++){
		prime[i] = i;
	}
	for(int i = 2; i <= sqrt(10000000); i++){
		if(prime[i]){
			for(int j = i*i;j <= 10000000;j+=i){
				if(prime[j] == j){
					prime[j] = i;
				}
			}
		}
	}
}
long long ptich(int n){
	long long tong = 0;
	while(n!=1){
		int tmp = prime[n];
		while(n%tmp == 0){
			tong += tmp ;
			n/=tmp;
		}
		
	}
	return tong;
}
int main(){
	sang();
	int n;
	scanf("%d",&n);
	long long tong=0;
	int a;
	while(n--){
		scanf("%d",&a);
		tong+=ptich(a);
	}

	printf("%lld",tong);
}