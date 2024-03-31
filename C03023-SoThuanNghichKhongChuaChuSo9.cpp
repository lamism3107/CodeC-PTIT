#include<stdio.h>
#include<math.h>
int check(int n){
	int sodao = 0 ;
	int tmp = n;
	while(n){
		int r = n%10;
		if(r == 9) return 0;
		sodao = sodao *10 + r;
		n/=10;
	}
	return sodao == tmp;
}
int main(){
	int n;
	scanf("%d", &n);
	int cnt = 0;
	for(int i = 2; i < n; i++){
		if(check(i)){
			printf("%d ", i);
			cnt++;
		}
	}
	printf("\n%d", cnt);
}