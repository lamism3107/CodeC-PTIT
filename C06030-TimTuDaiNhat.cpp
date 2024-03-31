#include<stdio.h>
#include<string.h>
struct Word{
	char tu[1000];
	int fre;
};
typedef Word word;

int main(){
	word a[1001];
	int n = 0;
	char s[1001];
	while(scanf("%s", s) != -1){
		int ok = 0;
		for(int i = 0; i < n; i++){
			if(strcmp(s, a[i].tu) == 0){
				a[i].fre++;
				ok = 1;
			}
		}
		if(!ok){
			strcpy(a[n].tu, s);
			a[n].fre = 1;
			n++;
		} 
	}
//	qsort(a, n, sizeof(word), cmp);
	int max = 0;
	for(int i = 0; i < n; i++){
		if(strlen(a[i].tu) >= max){
			max = strlen(a[i].tu);
		}
	}
	for(int i = 0; i < n; i++){
		if(strlen(a[i].tu) == max){
			printf("%s %d %d\n", a[i].tu, strlen(a[i].tu), a[i].fre);
		}
	}
}