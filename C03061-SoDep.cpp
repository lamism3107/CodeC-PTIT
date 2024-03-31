#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[100];
		gets(c);
		int ok = 1;
		if(((c[0] - '0') == 2 * (c[strlen(c) - 1] - '0')) || ((c[0] - '0') * 2  == (c[strlen(c) - 1] - '0')))  {
			ok = 1;
		}
		else ok = 0;
		int l = 1, r = strlen(c) - 2;
		while(l <= r){
			if(c[l] != c[r]){
				ok = 0;
				break;
			}
			l++, r--;
		}
		if(ok) printf("YES");
		else printf("NO");
		printf("\n");
 	}
}