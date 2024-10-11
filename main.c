#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

int main() {
    // создаем стек
    Stack stack;
    stack.head = NULL;

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    printf("%d\n", pop(&stack));
    printf("%d\n", pop(&stack));
    printf("%d\n", pop(&stack));

    pop(&stack);


    // печатаем максимальное значение
    printf("Max value is: %d\n", stack.max_data);

    return 0;
}