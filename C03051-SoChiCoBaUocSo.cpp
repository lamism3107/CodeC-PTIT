#include<stdio.h>
#include<math.h>
int snt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return n > 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long l, r;
		scanf("%lld %lld",&l, &r);
		if(l == (long long)sqrt(l*l)) l++;
		int cnt = 0;
		for(int i = sqrt(l); i <= sqrt(r); i++){
			if(snt(i)) cnt++;
		}
		printf("%d\n",cnt);
	}
}