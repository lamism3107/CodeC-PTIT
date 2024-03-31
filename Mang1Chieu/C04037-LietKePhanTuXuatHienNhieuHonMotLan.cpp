#include<stdio.h>
#include<math.h>
int used[1000] = {0};
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int cnt[1000] =  {0};
	for(int i = 0; i < n;i++){
		scanf("%d", &a[i]);
		cnt[a[i]]++;
//		used[a[i]]++;;
	}
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(used[a[i]]>1) {
			used[a[i]] = 0;
			dem++;
		}
	}
	printf("%d\n", dem);

	for(int i = 0; i < n; i++){
		if(cnt[a[i]] > 1) {
			printf("%d ", a[i]);
			cnt[a[i]] = 0;
		}
	}
	
}