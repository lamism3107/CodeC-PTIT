#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int diem[100005] = {0};
    for (int i = 1; i < n; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        diem[a]++;
        diem[b]++;
    }
    for (int i = 1; i <= n; i++){
        if (diem[i] != 1 && diem[i] != n - 1){
            printf("No");
            return 0;
        }
    }
    printf("Yes");

}