#include<stdio.h>
#include<math.h>


int check(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n/=10;
	}
	return sum % 10 == 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}

}