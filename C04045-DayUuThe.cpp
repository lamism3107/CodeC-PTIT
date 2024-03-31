#include <stdio.h>
#include <string.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d\n", &t);
    while (t--){
        char s[1000];
	    gets(s);
	    int num = 0, count = 0, even = 0, odd = 0;
	    for (int i = 0; i < strlen(s); i++){
	        if (isdigit(s[i]))
	            num = num * 10 + (s[i] - '0');
	        else{
	            count++;
	            if (num % 2 == 0)
	                even++;
	            else
	                odd++;
	            num = 0;
	        }
	    }
	    count++;
	    if (num % 2 == 0)
	        even++;
	    else
	        odd++;
	    if ((count % 2 == 0 && even > odd) || (count % 2 == 1 && odd > even))
	        printf("YES\n");
	    else
	        printf("NO\n");
		}
    return 0;
}