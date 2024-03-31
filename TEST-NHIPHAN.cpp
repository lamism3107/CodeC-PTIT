#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[100];
	int k = 0;
	while(n != 0){
		a[k++] = n % 2;
		n/= 2;
	}
	for(int i = k-1; i >= 0; i--){
		printf("%d", a[i]);
	}
}