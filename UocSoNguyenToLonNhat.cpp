#include<stdio.h>
#include<math.h>

int solve(int n){
    int ans;
    for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){
            n/=i;
        }
        ans=i;
    }
    if(n!=1) ans=n;
    return ans;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%d\n", solve(n));
		
	}
}