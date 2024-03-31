#include<stdio.h>
#include<math.h>
int snt(int n){
	for(int i = 2; i <= sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n > 1;
}
int check(int n){
	while(n){
		int r = n%10;
		if(r != 2 && r!=3 && r!= 5 && r!=7) return 0;
		n/=10;
	}
	return 1;	
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m;
		scanf("%d %d", &n, &m);
		int cnt = 0;	
		for(int i = n; i <= m; i++){
			if(snt(i) && check(i)) cnt++;
		}
		printf("%d\n", cnt);
	}
}