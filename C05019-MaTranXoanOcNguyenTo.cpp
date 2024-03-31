#include<stdio.h>
#include<math.h>
int prime[10001];
int snt[10001];
int k = 0;
void sang(){
	for(int i = 0; i <= 10000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2;i <= sqrt(10000); i++){
		if(prime[i]){
			for(int j = i*i; j <= 10000; j+=i){
				prime[j] = 0;
			}
		}
	}
	for(int i = 0; i <= 10000; i++){
		if(prime[i]) snt[k++] = i;
	}
}

int main(){
	sang();
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		int n;
		scanf("%d", &n);
		int cnt = 0;
		int a[100][100];
		int h1 = 0,h2 = n-1, c1 = 0, c2 = n-1;
		int h = 0;
		while(h1 <= h2 && c1 <= c2){
			for(int i = c1; i <= c2; i++){
				a[h1][i] = snt[cnt++];
			}
			h1++;
			for(int i = h1; i <= h2; i++){
				a[i][c2] = snt[cnt++];
			}
			c2--;
			if(c1 <= c2){
				for(int i = c2; i >= c1; i--){
					a[h2][i] = snt[cnt++];
				}
				--h2;
			}
			if(h1 <= h2){
				for(int i = h2; i >= h1; i--){
					a[i][c1] = snt[cnt++];
				}
				c1++;
			}
		}
		printf("Test %d: \n", i);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}