#include<stdio.h>
#include<string.h>
struct matHang{
	int ma;
	char ten[100];
	char nhom[100];
	float giaMua, giaBan;
	float loiNhuan;
};
typedef struct matHang mh;
int main(){
	int n;
	scanf("%d", &n);
	mh a[n];
	for(int i = 0; i < n; i++){
		scanf("\n");
		a[i].ma = i+1;
		gets(a[i].ten);
		gets(a[i].nhom);
		scanf("%f%f", &a[i].giaMua, &a[i].giaBan);
		a[i].loiNhuan = a[i].giaBan - a[i].giaMua;
	}
	
	for(int i = 0; i <n - 1; i++){
		int max = i;
		for(int j = i+1 ; j < n; j++){
			if(a[j].loiNhuan > a[max].loiNhuan){
				max = j;
			}
		}
		mh tmp = a[i];
		a[i] = a[max];
		a[max] = tmp;
	}
	
	for(int i = 0; i < n ; i++){
		printf("%d %s %s %.2f\n", a[i].ma,a[i].ten, a[i].nhom, a[i].loiNhuan);
	}
}