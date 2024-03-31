#include<stdio.h>
#include<string.h>
struct SinhVien{
	int msv;
	char ten[100];
	float diem1, diem2, diem3;
};
typedef struct SinhVien sv;
int check(sv a){
	int ok = 1;
	if(a.diem1 >= a.diem2) ok = 0;
	if(a.diem2 >= a.diem3) ok = 0;
	if(a.diem1 >= a.diem3) ok = 0;
	return ok;
}
int main(){
	sv a[100];
	int k = 0;
	while(1){
		int n;
		scanf("%d", &n);
		getchar();
		if(n == 1){
			int soluong;
			scanf("%d", &soluong);
			for(int i = 0; i < soluong; i++){
				getchar();
				a[k].msv = k + 1;
				gets(a[k].ten);
				scanf("%f%f%f", &a[k].diem1, &a[k].diem2, &a[k].diem3);
//				a[k].tongDiem = a[k].diem1 + a[k].diem2 + a[k].diem3;
				k++;
			}
			printf("%d\n", soluong);
		}
		else if(n == 2){
			int MSV ;
			scanf("%d", &MSV);
			getchar();
			char newTen[100];
			gets(newTen);
			float ndiem1, ndiem2, ndiem3;
			scanf("%f%f%f", &ndiem1, &ndiem2, &ndiem3);
			for(int i = 0; i < k; i++){
				if(a[i].msv == MSV){
					strcpy(a[i].ten, newTen);
					a[i].diem1 = ndiem1;
					a[i].diem2 = ndiem2;
					a[i].diem3 = ndiem3;
				}
			}
			printf("%d\n", MSV);
		}
		else if(n == 3){
			for(int i = 0; i < k; i++){
				if(check(a[i]))
				printf("%d %s %.1f %.1f %.1f\n", a[i].msv, a[i].ten, a[i].diem1, a[i].diem2, a[i].diem3);
			}	
			return 0;
		}
	}


}