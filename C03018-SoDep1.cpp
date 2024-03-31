#include<stdio.h>
#include<math.h>

int snt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return n >1;
}
long long fibo[40];
void init(){
	fibo[1] = 1;
	fibo[2] = 1;
	for(int i = 3; i < 41 ;i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
}
int tachSo(int n){
	init();
	long long tong = 0;
	while(n!=0){
		tong+= n%10;
		n/=10;
	}
	for(int i = 1; i < 40; i++){
		if(tong == fibo[i]) return 1;
	}
	return 0;
}
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a < b){
		for(int i = a; i <= b; i++){
			if(tachSo(i) && snt(i)) printf("%d ", i);
		}
	}
	else{
		for(int i = b; i <= a; i++){
			if(tachSo(i) && snt(i)) printf("%d ", i);
		}
	}
	
}