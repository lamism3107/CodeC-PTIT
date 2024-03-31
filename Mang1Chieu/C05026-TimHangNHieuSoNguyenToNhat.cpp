#include<stdio.h>
#include<math.h>
int snt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return n > 1;
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int max = 0;
	int h;
	for(int i = 0; i < n; i++){
		int cnt = 0;
		for(int j = 0; j < n; j++){
			if(snt(a[i][j])) {
				cnt++;
				if(cnt > max){
					max = cnt;
					h = i;
				}
			}
		}
	}
	for(int i = 0; i < n; i++){
		if(i == h){
			printf("%d\n",i +1);
			for(int j = 0; j < n; j++){
				if(snt(a[i][j])){
					printf("%d ", a[i][j]);
				}
			}
		}
	}
}