#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n;i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n-1; i++){
		int minPos = i;
		for(int j = i+1; j < n; j++){
			if(a[j] < a[minPos]){
				minPos = j;
			}
		}
		int tmp = a[i];
		a[i] = a[minPos];
		a[minPos] = tmp;
		printf("Buoc %d: ", i+1);
		for(int i = 0; i < n; i ++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
}