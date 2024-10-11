#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

// функция добавления элемента в стек
void push(Stack *stack, int data) {
    if (stack->head == NULL) {
        stack->max_data = data;
    } else {
        stack->max_data = (stack->max_data > data) ? stack->max_data : data;
    }
    // новый элемент стека
    Stack_item *item = malloc(sizeof(Stack_item));
    item->data = data;
    // указатель головы стека будет указывать на новый элемент
    item->next = stack->head;
    stack->head = item;
}

// функция удаления элемента из стека
int pop(Stack *stack) {

    // если стек пустой выводим сообщение
    if (stack->head == NULL) {
        printf("Stack is empty\n");
        return -1;
    }
    // получаем данные из первого элемента стека
    Stack_item * temp = stack->head;
    int data = temp->data;
    // указатель головы стека будет указывать на следующий элемент
    stack->head = temp->next;
    // освобождаем память
    free(temp);

    return data;
}