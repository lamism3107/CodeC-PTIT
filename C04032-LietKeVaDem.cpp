#include<stdio.h>
#include<math.h>

struct SoKhongGiam{
	int so;
	int freq;
};
typedef struct SoKhongGiam soKhongGiam;
int check(int n){
	while(n>=10){
		int r=n%10;
		if(r<(n/10)%10)
			return 0;
		n/=10;
	}
	return 1;
}
		
int main(){	
	soKhongGiam a[10001];
	int n;
	int k = 0;
	while(scanf("%d", &n) != -1){
		//kiem tra neu no la so khong giam thi xem xet cho vao mang
		if(check(n)){
			int ok = 0;
			//kiem tra xem da co trong mang chua, neu co thi tang freq va danh dau la co trong mang
			for(int i = 0; i < k; i++){
				if(a[i].so == n){
					a[i].freq++;
					ok = 1;
				}
			}
			//neu khong co trong mang thi cho so do vao mang, gan freq = 1
			if(ok == 0){
				a[k].so = n;
				a[k].freq = 1;
				k++;
			}
		}
	}
	for(int i = 0; i < k - 1; i++){
		int max = i;
		for(int j = i+1 ; j < k; j++){
			if(a[j].freq > a[max].freq){
				max = j;
			}
		}
		soKhongGiam tmp = a[i];
		a[i] = a[max];
		a[max] = tmp;
	}
	for(int i = 0; i < k; i++){
		printf("%d %d\n", a[i].so, a[i].freq);
	}
}