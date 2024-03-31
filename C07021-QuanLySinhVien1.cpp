#include<stdio.h>
#include<string.h>
struct SinhVien{
	int msv;
	char ten[100];
	float diem1, diem2, diem3;
	float tongDiem;
};
typedef struct SinhVien sv;

void luaChon1(sv a[], int *k){
	int soluong;
	scanf("%d", &soluong);
	for(int i = 0; i < soluong; i++){
		getchar();
		a[*k].msv = *k + 1;
		gets(a[*k].ten);
		scanf("%f%f%f", &a[*k].diem1, &a[*k].diem2, &a[*k].diem3);
		a[*k].tongDiem = a[*k].diem1 + a[*k].diem2 + a[*k].diem3;
		*k++;
	}
	printf("%d\n", soluong);
}

void luaChon2(sv a[], int k){
	int MSV ;
	scanf("%d", &MSV);
	getchar();
	char newTen[100];
	gets(newTen);
	float ndiem1, ndiem2, ndiem3;
	scanf("%f%f%f", &ndiem1, &ndiem2, &ndiem3);
	for(int i = 0; i < k; i++){
		printf("%d %s %.1f %.1f %.1f\n", a[i].msv, a[i].ten, a[i].diem1, a[i].diem2, a[i].diem3);
		if(a[i].msv == MSV){
			strcpy(a[i].ten, newTen);
			a[i].diem1 = ndiem1;
			a[i].diem2 = ndiem2;
			a[i].diem3 = ndiem3;
			a[i].tongDiem = a[i].diem1 + a[i].diem2 + a[i].diem3;
		}
	}
	printf("%d\n", MSV);
}
void luaChon3(sv a[], int k){
	for(int i = 0; i < k - 1; i++){
		int min = i;
		for(int j = i + 1; j < k; j++){
			if(a[j].tongDiem < a[min].tongDiem) min = j;
		}
		sv tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
	}
	for(int i = 0; i < k; i++){
		printf("%d %s %.1f %.1f %.1f\n", a[i].msv, a[i].ten, a[i].diem1, a[i].diem2, a[i].diem3);
	}	
}
int main(){
	sv a[100];
	int k = 0;
	while(1){
		int n;
		scanf("%d", &n);
		getchar();
		if(n == 1){
			luaChon1(a, &k);
		}
		else if(n == 2){
			luaChon2(a, k);
		}
		else if(n == 3){
			luaChon3(a, k);
			break;
		}
	}
	printf("%d", k);

}