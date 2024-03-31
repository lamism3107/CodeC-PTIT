#include<stdio.h>
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(j == 0) printf("%d", i+1);
			else{
				int cnt = i+1;
				if(cnt + j <= m){
					printf("%d", cnt+j);
				}
				else{
					int x = m - j;
					printf("%d", x);
				}
				
			}
		}
		printf("\n");
	}
}