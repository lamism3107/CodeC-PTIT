#include <stdio.h> 
#include <string.h> 
void check(int n[], int t) { 
	int i, j, ok = 0; 
	for(i = 0; i < t; i++) { 
		for(j = i + 1; j < t; j++) { 
			if(n[j]==n[i]) { 
				printf("%d\n", n[i]); 
				ok = 1; 
				break; 
			} 
		} 
		if(ok==1) 
		break; 
	} 
	if(ok==0) 
		printf("NO\n"); 
} 
int main() { 
	int t, i; 
	scanf("%d", &t); 
	while(t--) { 
		int n; 
		scanf("%d", &n); 
		int b[n]; 
		for(i = 0; i < n; i++) scanf("%d", &b[i]); 
		check(b, n); 
	} 
}