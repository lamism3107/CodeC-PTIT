#include<stdio.h>
#include<math.h>
int snt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return n > 1;	
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n;i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			if(snt(a[i])) printf("%d ", a[i]);
		}
		printf("\n");
	}
	
}