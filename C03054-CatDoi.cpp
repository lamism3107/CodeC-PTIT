#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[20];
		gets(c);
		int ok = 1;
		for(int i= 0; i < strlen(c); i++){
			if(c[i] != '0' && c[i] != '8' && c[i] !='9' && c[i] != '1'){
				ok= 0;
				break;
			}
		}
		if(!ok) printf("INVALID\n");
		else{
			for(int i = 0; i < strlen(c); i++){
				if(c[i] == '1 ') c[i] = '1';
				if(c[i] == '0') c[i] ='0';
				if(c[i] == '8') c[i] = '0';
				if(c[i] == '9') c[i] = '0';
			}
			int id = 0;
				while(c[id] == '0'){
					id++;
				}
//				printf("%d\n", id);
				if(id == strlen(c) ){
					printf("INVALID\n");
				}
				else{
					for(int i = id; i < strlen(c); i++){
						printf("%c", c[i]);
					}
				}
		
			
		
		}
		printf("\n");
	}
}