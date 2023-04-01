#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
        int i, K;
        int size = 0, result = 0;
        scanf("%d", &K);

        int *stack = (int *) malloc(K * sizeof(int));

        for (i = 0; i < K; i++) {
                int tmp;
                scanf("%d", &tmp);
                if (tmp == 0) {
                        stack[size--] = 0;
                } else {
                        stack[size++] = tmp;
                }
        }

        for (i = 0 ; i < size; i++) result += stack[i];

        printf("%d\n", result);

        free(stack);
}
