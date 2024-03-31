#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	int test = 1;
	while(t--){
		
		int n;
		scanf("%d", &n);
		int a[n], cnt[100005];
		for(int i = 0; i < n; i ++){
			scanf("%d", & a[i]);
			cnt[a[i]]++;
		}
		printf("Test %d:\n", test);
		test++;
		for(int i = 0; i < n;i++){
			if(cnt[a[i]]){
				printf("%d xuat hien %d lan\n", a[i], cnt[a[i]]);
				cnt[a[i]] = 0;
			}
		}
		printf("\n");
	}
}