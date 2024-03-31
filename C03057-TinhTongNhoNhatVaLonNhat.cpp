#include<stdio.h>
#include<math.h>
#include<string.h>
long long mini(char c[], char c2[]){
	long long tong = 0;
	for(int i = 0; i < strlen(c); i++){
		if(c[i] == '6') c[i] = '5';
	}
	for(int i = 0; i < strlen(c); i++){
		tong = tong * 10 + c[i] - '0';
	}
	long long tong2 = 0;
	for(int i = 0; i < strlen(c2); i++){
		if(c2[i] == '6') c2[i] = '5';
	}
	for(int i = 0; i < strlen(c2); i++){
		tong2 = tong2 * 10 + c2[i] - '0';
	}
	return tong + tong2;
}
long long maxi(char c[], char c2[]){
	long long tong = 0;
	for(int i = 0; i < strlen(c); i++){
		if(c[i] == '5') c[i] = '6';
	}
	for(int i = 0; i < strlen(c); i++){
		tong = tong * 10 + c[i] - '0';
	}
	long long tong2 = 0;
	for(int i = 0; i < strlen(c2); i++){
		if(c2[i] == '5') c2[i] = '6';
	}
	for(int i = 0; i < strlen(c2); i++){
		tong2 = tong2 * 10 + c2[i] - '0';
	}
	return tong + tong2;
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c1[20], c2[20] ;
		scanf("%s",c1);
		scanf("%s",c2);
		printf("%lld %lld", mini(c1,c2), maxi(c1,c2));
		printf("\n");
		
	}
}