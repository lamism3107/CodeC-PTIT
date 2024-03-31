#include<stdio.h>
#include<string.h>
struct SinhVien{
	int msv;
	char ten[100];
	float diem1, diem2, diem3;
	float tongDiem;
};
typedef struct SinhVien sv;
int main(){
	sv a[100];
	int k = 0;
	while(true){
		int n;
		scanf("%d", &n);
		if(n == 1){
			int x;
			scanf("%d", &x);
			getchar();
			for(int i = 0; i < x; i++){
				
				a[k].msv= k+ 1;
				gets(a[k].ten);
				scanf("%f%f%f", a[k].diem1, a[k].diem2, a[k].diem3);
				k++;
			}
			printf("%d\n", x);
		}
		else if(n == 2){
			int newMSV;
			scanf("%d",&newMSV );
			getchar();
			char s[1000];
			gets(s);
			float nd1, nd2, nd3;
			scanf("%f%f%f", &nd1, &nd2, &nd3);
			for(int i = 0; i < k; i++){
				if(a[i].msv == newMSV){
					strcpy(a[i].ten, s);
					a[i].diem1 = nd1;
					a[i].diem2 = nd2;
					a[i].diem3 = nd3;
				}
			}
			printf("%d\n", newMSV);
		}
		else{
			for(int i =0; i < k; i++){
				printf("%d %s %.1f %.1f %.1f", a[i].msv, a[i].ten, a[i].diem1, a[i].diem2, a[i].diem3);
			}
			return 0;
		}
	}

}