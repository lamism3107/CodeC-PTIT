#include<stdio.h>


int main(){

	int n;
	scanf("%d", &n);
	int a[n];
	int cnt[100005] ;
	for(int i = 0; i < n;i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n;i++){
			cnt[a[i]]++;
	}
	for(int i = 0; i < n;i++){
		if(cnt[a[i]]){
			printf("%d %d\n", a[i], cnt[a[i]]);
			cnt[a[i]] = 0;
		}
	}
}