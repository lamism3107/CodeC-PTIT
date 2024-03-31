#include <stdio.h> 
int main() { 
	int n, k; 
	scanf("%d%d", &n, &k); 
	int degree = 0; 
	//Cong thuc Legendre
	for (int i = 2; i <= n; i *= 2) { 
		degree += n / i; 
	} 
	if (degree >= k) { 
		printf("Yes"); 
	} 
	else { 
		printf("No"); 
	} 
}