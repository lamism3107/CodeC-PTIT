#include<stdio.h>
#include<math.h>

int prime[1000001];
void sang(){
	for(int i = 0; i<= 1000000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= 1000; i++){
		if(prime[i]){
			for(int j = i*i; j <= 1000000; j+=i){
				prime[j] = 0;
			}
		}
	}
}
int check(int n){
	int tmp = n;
	int sodao = 0;
	while(n!=0){
		int r= n%10;
		sodao = sodao *10 + r;
		n/=10;
	}
	return sodao == tmp;
}
int main(){
	sang();
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a ,&b);
		int cnt = 0;
		for(int i = a; i <= b; i++){
			if(prime[i] && check(i)) {
				cnt++;
				printf("%d ", i);
				if(cnt == 10){
					printf("\n");
					cnt = 0;
				}
			}
		
		}
		printf("\n");
	}
}