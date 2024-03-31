#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int cmp (const void *a, const void *b){
	int *x = (int*) a;
	int *y = (int*) b;
	return *x - *y;
}
int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int a[n], b[m];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < m; i++){
		scanf("%d", &b[i]);
	}
	int giao[1001] ={0};
	int x = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i] == b[j]) {
				giao[x++] = a[i];
			}
		}
	}
	int hieu1[1001] = {0};
	int y = 0;
	int hieu2[1001] = {0};
	int z = 0;
	if(x != 0){
		qsort(giao, x, sizeof(int), cmp);
		for(int i = 0; i < x; i++){
			printf("%d ", giao[i]);
		}
	}

	printf("\n");
	for(int i = 0; i < n; i++){
		int ok = 1;
		for(int j = 0; j < x; j++){
			if(a[i] == giao[j]) {
				ok = 0;
				break;
			}
		}
		if(ok) hieu1[y++] = a[i];
	}
	for(int i = 0; i < m; i++){
		int ok = 1;
		for(int j = 0; j < x; j++){
			if(b[i] == giao[j]) {
				ok = 0;
				break;
			}
		}
		if(ok) hieu2[z++] = b[i];
	}
	qsort(hieu1, y, sizeof(int), cmp);
	qsort(hieu2, z, sizeof(int), cmp);
	for(int i = 0; i < y; i++){
		printf("%d ", hieu1[i]);
	}
	printf("\n");
	for(int j = 0; j < z; j++){
		printf("%d ", hieu2[j]);
	}
}