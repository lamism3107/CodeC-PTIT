#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int cnt[105] = {0};
	for(int i  = 0; i < n;i++){
		scanf("%d", &a[i]);
		cnt[a[i]]++;
	}
	int ok = 0;
	for(int i = 0; i < n;i++){
		if(cnt[a[i]]>1) {
			printf("%d ", a[i]);
			ok = 1;
			cnt[a[i]] = 0;
		}
	}
	if(ok == 0) printf("0");
}