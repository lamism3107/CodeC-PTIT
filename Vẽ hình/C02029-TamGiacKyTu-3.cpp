#include <stdio.h> 
int main() { 	
	int n; 
	scanf("%d", &n); 
	for (int i = 0; i < n; ++i) { 
		int k = n - 1; 
		int h = i + 65 ; 
		for (int j = 0; j <= i; ++j) { 
			if (j > 0) { 
				printf("%c ",    h= h + k  ) ; 
				k--; 
			} 
			else if (j == 0) { 
				printf("%c ", i + 'A'); 
			} 
		} 
	printf("\n"); 
	}
}