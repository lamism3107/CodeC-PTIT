#include<stdio.h>
#include<math.h>
int prime[10001];
void sang(){
	for(int i = 0; i <= 10000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= sqrt(10000); i++){
		if(prime[i]){
			for(int j = i*i; j <= 10000; j+=i){
				prime[j] = 0;
			}
		}
	}
}
int main(){
	sang();
	int n;
	scanf("%d", &n);
	int a[n];
	int cnt = 0;
	for(int i = 0; i < n;i++){
		scanf("%d", &a[i]);
		if(prime[a[i]]) cnt++;
	}
	printf("%d ", cnt);
	for(int i = 0; i < n; i++){
		if(prime[a[i]]) printf("%d ", a[i]);
	}
}