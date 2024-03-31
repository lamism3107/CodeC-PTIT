#include<stdio.h>
#include<math.h>
int check(int n){
	int sum = 0;
	int sodao = 0;
	int tmp = n;
	while(n){
		int r = n%10;
		sum+=r;
		sodao = sodao * 10 + r;
		if(r == 4) return 0;
		n/= 10;
	}
	return (sodao == tmp) && (sum %10 == 0);
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int l = pow(10, n-1);
		int r = pow(10, n);
		for(int i = l; i <= r; i++){
			if(check(i)) printf("%d ", i);
		}
		printf("\n");
	}
}