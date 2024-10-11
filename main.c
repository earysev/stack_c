#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

int main() {
    // создаем стек
    pStack stack = NULL;


    push(&stack, 4);
    push(&stack, 1);
    push(&stack, 8);
    push(&stack, 3);

    printf("%d\n", max_value(&stack));

    pop(&stack);
    printf("%d\n", max_value(&stack));

    pop(&stack);
    printf("%d\n", max_value(&stack));

    free_stack(&stack);

    return 0;
}