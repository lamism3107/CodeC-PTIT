#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char s[10] = {'0', '1','2', '3','4','5','6','7','8','9'};
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
		scanf("%s", c);
		int ok = 1;
		int dem0 =0, dem1 = 0, dem2 = 0, dem3 = 0, dem4 = 0, dem5 = 0, dem6 = 0, dem7 = 0, dem8 = 0, dem9 = 0;
		for(int i = 0; i < strlen(c); i ++){
			if(c[i] == s[0]) dem0++;
			else if(c[i] == s[1]) dem1++;
			else if(c[i] == s[2]) dem2++;
			else if(c[i] == s[3]) dem3++;
			else if(c[i] == s[4]) dem4++;
			else if(c[i] == s[5]) dem5++;
			else if(c[i] == s[6]) dem6++;
			else if(c[i] == s[7]) dem7++;
			else if(c[i] == s[8]) dem8++;
			else if(c[i] == s[9]) dem9++;
			else{
				ok = 0;
				break;
			}
		}
		if(ok == 0 || c[0] == '0') printf("INVALID\n");
		else{
			if((dem1 == 0) || (dem2 == 0) || (dem3 == 0) || (dem4 == 0) || dem5 == 0 || dem6 == 0 || dem7 == 0 || dem8 == 0 || dem9 == 0){
				printf("NO\n");
			}
			else{
				printf("YES\n");
			}
		}
	}
}