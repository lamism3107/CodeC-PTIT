#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%d = ", n);
		 for(long long i = 2; i <= sqrt(n); i++){
	        if(n % i == 0){
	            long long cnt = 0;
	            while(n % i == 0){
	                cnt++;
	                n/=i;
	            }
	            printf("%lld^%lld",i, cnt);
	            if(n!=1) printf(" * ");
	        }
	    }
	    if(n!=1){
	        printf("%lld^1", n);
	    }
		printf("\n");
	}
}