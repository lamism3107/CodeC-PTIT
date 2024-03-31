#include<stdio.h>
#include<math.h>

int tang(int n){
	while(n>=10){
		int r=n%10;
		if(r<(n/10)%10)
			return 0;
		n/=10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int l = pow(10, n - 1);
   		int r = pow(10, n) - 1;
		for (int i = l; i <= r; i++)
	        if (tang(i)) printf("%d ", i);
		printf("\n");
	}
}