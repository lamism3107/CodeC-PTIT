#include<stdio.h>
#include<math.h>

int check(int n){
	int tmp = n;
	int sodao = 0;
	int sum = 0;
	while(n != 0){
		int r = n%10;
		sodao = sodao * 10 + r;
		sum += r;
		n/=10;
	}
	if(sodao != tmp) return 0;
	if(sum % 10 != 0) return 0;
	return 1;
}


int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	  	int n;
	    scanf("%d", &n);
	    int dem = 0;
	    int l = pow(10, n - 1);
	    int r = pow(10, n) - 1;
	    for (long long i = l; i <= r; i++)
	        if (check(i))
	            dem++;
	    printf("%d\n", dem);
	}
}