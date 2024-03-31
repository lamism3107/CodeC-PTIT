
#include<stdio.h>
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++){
		if(n <= m){
			int cnt = m + 'a'-1 ;
			for(int j = 0; j < i;j++){
				printf("%c", cnt );
				cnt--;
			}
			int x = m - 1;
			for(int j = i	; j < m; j++){
					printf("%c", cnt  );	
			}
			x--;
			printf("\n");
		}
		else{
			int cnt = n + 'a'-1 ;
			for(int j = 0; j < i;j++){
				if(j == m) break;
				printf("%c", cnt );
				cnt--;
			} 
			int x = n - 1;
			for(int j = i; j < m; j++){	
				printf("%c", cnt  );	
			}
			x--;
			printf("\n");
		}
	}
}int min(int i, int j){
	if(i < j) return i;
	else return j;
}
#include<stdio.h>
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++){
		if(n <= m){
			int cnt = m + 'a'-1 ;
			for(int j = 0; j < i;j++){
				printf("%c", cnt );
				cnt--;
			}
			int x = m - 1;
			for(int j = i	; j < m; j++){
					printf("%c", cnt  );	
			}
			x--;
			printf("\n");
		}
		else{
			int cnt = n + 'a'-1 ;
			for(int j = 0; j < i;j++){
				if(j == m) break;
				printf("%c", cnt );
				cnt--;
			} 
			int x = n - 1;
			for(int j = i; j < m; j++){
//				if(j == m - 1 ) break;	
				printf("%c", cnt  );	
			}
			x--;
			printf("\n");
		}
	}
}