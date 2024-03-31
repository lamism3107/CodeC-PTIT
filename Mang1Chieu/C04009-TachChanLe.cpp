#include<stdio.h>
#include<math.h>


int main(){
	int n;
	scanf("%d", &n);
	int a[n], chan[n], le[n];
	for(int i = 0; i < n;i++){
		scanf("%d", &a[i]);
	}
	int l = 0, k = 0;
	for(int i = 0; i < n;i ++){
		if(a[i] % 2 == 0){
			chan[l++] = a[i];
		}
		else{
			le[k++] = a[i];
		}
	}
	for(int i = 0;i  < l;i++){
		printf("%d ", chan[i] );
	}
	printf("\n");
	for(int i = 0; i < k; i++){
		printf("%d ", le[i]);
	}
	
}