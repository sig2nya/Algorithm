#include<stdio.h>
#include<string.h>

#define STACK_SIZE 10000

int current_size = 0;
int stack[STACK_SIZE];

void push();
int pop();
int empty();
int top();

int main()
{
        int N, i, data;
        char command[6];

        scanf("%d", &N);

        for (i = 0; i < N; i++) {
                scanf("%s", command);
                if (!strcmp(command, "push")) {
                        scanf("%d", &data);
                        push(data);
                }

                if (!strcmp(command, "pop")) {
                        printf("%d\n", pop());
                }

                if (!strcmp(command, "size")) {
                        printf("%d\n", current_size);
                }

                if (!strcmp(command, "empty")) {
                        printf("%d\n", empty());
                }

                if (!strcmp(command, "top")) {
                        printf("%d\n", top());
                }
        }
}

void push(int data)
{
        stack[current_size++] = data;
}

int pop()
{
        if (empty()) return -1;

        current_size--;
        return stack[current_size];
}

int empty()
{
        if (current_size == 0) return 1;

        return 0;
}

int top()
{
        if (empty()) return -1;

        return stack[current_size - 1];
}
