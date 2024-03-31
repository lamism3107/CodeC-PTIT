#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d", &n, &m);
	int x = m;
	for(int i = 0; i < n; i++){
		int x;
		int cnt = i + 1;
		if(n <= m){
			for(int j = 0; j < m - i; j++){
				printf("%d ", cnt+j);
			}
			
			for(int j = m - i; j < m; j++){
				printf("%d ", m );
			}
		}
		else{
			for(int j = 0; j < m - i; j++){
				printf("%d", cnt+j);	
			}
//			int x = m;
//			if(m == 0){
				for(int j = m - i; j < x; j++){
//					if(j == m) break;
					printf(" %d", m );
				}
//			}
//			else{
//				for(int j = 0; j < x; j++ ){
//					printf("%d", m);
//				}
//			}
		}
		printf("\n");
	}
}