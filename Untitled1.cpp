#include<stdio.h>
#include<math.h>

int gcd(int a, int b){
	while(b!= 0){
		int r = a %b;
		a = b;
		b = r;
	}
	
	return a;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int res = 1;
		for(int i = 1; i <= n; i++){
			int uoc = gcd(res, i);
			res = res * i/ uoc;
			
		}
		printf("%d\n", res);
	}
}