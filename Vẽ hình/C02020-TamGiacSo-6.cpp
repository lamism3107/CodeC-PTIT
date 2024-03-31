#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int cnt = 1;
	int chan[10001];
	int size = 0;
	for(int i = 2; i < 1001; i+=2){
		chan[size++] = i;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 0;  j < n- i; j++){
			printf("~");
		}
		int dem = 0;
		for(int j = 0; j < i; j++){
			printf("%d", chan[j]);
			dem++;
		}
		dem--;
		while(dem != 0){
			printf("%d", chan[dem- 1]);
			dem--;
		}
		printf("\n");
	}
}