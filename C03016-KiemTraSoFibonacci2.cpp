#include<stdio.h>
#include<math.h>
long long fibo[93];
void init(){
	fibo[0] = 0;
	fibo[1] = 1;
	fibo[2] = 1;
	for(int i = 3; i< 92; i++){
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
}
int main(){
	init();
//	for(int i = 0; i <= 92; i++){
//		printf("%lld ", fibo[i]);
//	}
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int ok = 0;
		for(int i = 0; i <= 92; i++){
			if(fibo[i] == n){
				printf("YES\n");
				ok = 1;
				break;
			}
		}
		if(ok == 0) printf("NO\n");
	}

}