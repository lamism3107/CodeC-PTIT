#include<stdio.h>
#include<math.h>

void ThuaSNT(long long n){
    for(long long i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                printf("%dx", i);
                n/=i;
            }
//            printf("%lld^%lld",i, cnt);
        }
    }
    if(n!=1){
        printf("%lld", n);
    }
}
int main(){
    long long n;
    scanf("%lld", &n);
    ThuaSNT(n);
}