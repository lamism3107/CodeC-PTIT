#include<stdio.h>
#include<math.h>

int cnt[100001];
int a[100001];
int n = 0;
int check(int n){
	while(n > 0){
		int socuoi = n%10;
		n/=10;
		int sogancuoi = n%10;
		n/=10;
		if(socuoi < sogancuoi) return 0;
	}
	return 1;
}
int main(){
	int n;
	while(scanf("%d", &n) != -1){
		a[n++] = n;
		cnt[n]++;
	}
	for(int i = 0; i < n; i++){
		if(check(n)) {
			printf("%d %d\n", a[i], cnt[a[i]]);
		}
	}
}