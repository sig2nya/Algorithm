#include<stdio.h>

int main()
{
    int arr[9][9];
    int i, j;
    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int tmp = 0, a, b;
    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            if(tmp <= arr[i][j]) {
                tmp = arr[i][j];
                a = i; b = j;
            }
        }
    }

    printf("%d\n", tmp);
    printf("%d %d\n", a + 1, b + 1);

}
