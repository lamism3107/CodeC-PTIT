#include<stdio.h>
#include<string.h>
struct SinhVien{
	int msv;
	char ten[100];
	char ngaySinh[100];
	float diem1, diem2, diem3;
	float tongDiem;
};
typedef struct SinhVien sv;
int main(){
	int n;
	scanf("%d", &n);
//	getchar();
	sv a[100];
	for(int i = 0; i < n; i++){
		getchar();
		a[i].msv = i+1;
		gets(a[i].ten);
		scanf("%s", &a[i].ngaySinh);
		scanf("%f%f%f", &a[i].diem1, &a[i].diem2, &a[i].diem3);
		a[i].tongDiem = a[i].diem1 + a[i].diem2 + a[i].diem3;
	}
	float res = 0;
	for(int i = 0; i < n; i++){
		if(a[i].tongDiem >= res){
			res = a[i].tongDiem;
		}
	}
	for(int i = 0; i < n; i++){
		if(a[i].tongDiem == res){
			printf("%d %s %s %.1f\n", a[i].msv, a[i].ten, a[i].ngaySinh, a[i].tongDiem);
		}
	}
}