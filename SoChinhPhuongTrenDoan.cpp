#include<stdio.h>
#include<math.h>
int check(long long n){
	long long x = sqrt(n);
	if(x*x == n) return 1;
	else return 0;
}
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int sum = 0;
	for(int i = a; i <= b; i++){
		sum += i;
	}
	printf("%d", sum);
}