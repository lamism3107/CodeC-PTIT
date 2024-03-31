#include<stdio.h>
#include<math.h>

int main(){
	int n,m;
	scanf("%d%d", &n, &m);
	int a[n], b[m];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < m; i++){
		scanf("%d", &b[i]);
	}
	int c[n+m];
	int i  = 0, j = 0,k = 0;;
	while(i < n && j < m){
		if(a[i] == b[j]){
			c[k++] = a[i];
		}
		else if(a[i] < b[j]){
			i++;
		}
		else j++;
	}
	for(int i = 0; i < k; i++){
		printf("%d ", c[i]);
	}
	
}