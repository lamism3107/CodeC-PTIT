#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int prime[10000001];

int check(int n){
    if(n<2) return 0;
    for(int i = 2; i<= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int check1(int n){
    int sum1 = 0;
    while(n>0){
        int r = n%10;
        if(r!= 3 && r!=5 && r!=7 && r!=2) return 0;
        sum1+=r;
        n/=10;
    }
    return check(sum1);
}
int main(){
  	int t;
  	scanf("%d", &t);
  	while(t--){
	  	int l, r;
	    scanf("%d %d", &l, &r);
	    int cnt = 0;
	    for(int i = l; i <= r; i++){
	        if( check1(i) && check(i)) cnt++;
	    }
	    printf("%d\n", cnt);	
	}
}