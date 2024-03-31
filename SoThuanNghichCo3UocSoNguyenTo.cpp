#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int checkThuanNghich(int n){
	int tmp = n;
	int sodao = 0;
	while(n>0){
		sodao = sodao * 10 + (n%10);
		n/=10;
	}
	return sodao;
}

int checkUoc(int n){
	int cnt = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0){
			cnt++;
			while(n%i==0){
				n/=i;
			}
		}
	}
	if(n!=1) cnt++;
	return cnt>=3;
}
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int ok = 0;
	for(int i = a; i <= b; i++){
		if(checkThuanNghich(i) == i && checkUoc(i)) {
			printf("%d ", i);
			ok = 1;
		}
	}
	if(!ok) printf("-1");
}