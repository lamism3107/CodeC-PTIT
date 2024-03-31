#include<stdio.h>
#include<math.h>
int check(int n){
    int d = n % 10;
    n /= 10;
    while (n > 0){
        if (n % 10 <= d)
            return 0;
        d = n % 10;
        n /= 10;
    }
    return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m;
		scanf("%d%d", &n , &m);
		int cnt = 0;
		for(int i = n; i<= m; i++){
			if(check(i)){
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
}