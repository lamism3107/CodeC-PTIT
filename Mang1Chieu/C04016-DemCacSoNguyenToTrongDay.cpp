#include<stdio.h>
#include<math.h>
int prime[10001] ;
int cmp(const void *a, const void *b){
	int *x = (int*) a;
	int *y = (int*) b;
	return *x - *y;
}
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
	int t;
	scanf("%d", &t);
	int test = 1;
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		int cnt[10005] = {0};
		for(int i = 0; i < n;i++){
			scanf("%d", &a[i]);
			if(prime[a[i]]) cnt[a[i]]++;
		}
		
		printf("Test %d:\n", test);
		test++;
		qsort(a, n, sizeof(int), cmp);
		for(int i = 0; i < n; i++){
			if(cnt[a[i]]){
				printf("%d xuat hien %d lan\n", a[i], cnt[a[i]]);
				cnt[a[i]] = 0;
			}
		}
		printf("\n");
	}
}