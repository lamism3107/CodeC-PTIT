#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int cnt[n];
	for(int i = 0; i < n;i++){
		scanf("%d", &a[i]);
		cnt[a[i]]++;
	}
	int dem = 0;
	for(int i = 0; i < n;i++){
		if(cnt[a[i]] == 1) dem++;
	}
	printf("%d\n", dem);
	for(int i = 0; i < n;i ++){
		if(cnt[a[i]] == 1) printf("%d ", a[i] );
	}
	
}