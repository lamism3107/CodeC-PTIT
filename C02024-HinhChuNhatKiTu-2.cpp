#include<stdio.h>
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++){
		if(n <= m){
			for(int j = 0; j < m; j++){
				if(j == 0) printf("%c", i+1 + '@');
				else{
					int cnt = i+1;
					if(cnt + j <= m){
						printf("%c", cnt+j + '@');
					}
					else{
						int x = m - j;
						printf("%c", x + '@');
					}
					
				}
			}
		}
		else{
			for(int j = 0; j < m; j++){
				int cnt = i+1;
				if(cnt + j <= m){
					printf("%c", cnt+j + '@');
				}
				else{
					int x = m - j;
					printf("%c", x + '@');
				}
			}	
		}
		printf("\n");
	}
}