
#include<stdio.h>
#include<math.h>

int snt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}

long long ans[10];
int size=0;
void init(){
	for(int i=1;i<=32;i++){
		if(snt(i)){
//			int n=0;
			int tmp=(int)pow(2,i)-1;
			if(snt(tmp)){
				ans[size++]=1ll*tmp*(int)pow(2,i-1);
			}
		}
	}
}

int main(){
	init();
	int n;
	scanf("%d", &n);
	for(int i=0;i<size;i++){
		if(ans[i] < n){
			printf("%lld ", ans[i]);
		}
	}
}