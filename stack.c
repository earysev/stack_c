#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

// функция добавления элемента в стек
void push(ppStack stack, int data) {

    // новый элемент стека
    pStack item = malloc(sizeof(Stack));
    item->data = data;
    // указатель головы стека будет указывать на новый элемент
    item->next = *stack;
    *stack = item;
}

// функция удаления элемента из стека
int pop(ppStack stack) {

    // если стек пустой выводим сообщение
    if (*stack == NULL) {
        printf("Stack is empty\n");
        return -1;
    }
    // получаем данные из первого элемента стека
    pStack temp = *stack;
    int data = temp->data;
    // указатель головы стека будет указывать на следующий элемент
    *stack = temp->next;
    // освобождаем память
    free(temp);

    return data;
}


// возвращает максимум из стека
int max_value(ppStack stack){
    // проверим что стек не пустой
    if (*stack == NULL) {
        printf("Stack is empty\n");
        return -1;
    }

    // второй стек в который будем перекидывать данные при поиске максимума
    pStack temp = NULL;
    // флаг для установки первого значения стека в максимум
    char first_item = 1;
    // здесь храним максимум
    int max_val;
    
    // бежим по стеку выкидывая элементы
    while (*stack != NULL){
        int val = pop(stack);

        // если это первый, то просто запишем максимум и сбросим флаг
        // иначе изменим максимум если очередной элемент больше
        if (first_item){
            max_val = val;
            first_item = 0;
        } else {
            max_val = max_val > val ? max_val : val;
        }

        // сохраним значение во втором стеке
        push(&temp, val);
    }

    // копируем данные из второго стека в первый
    while (temp != NULL) {
        push(stack, pop(&temp));
    }

    return max_val;
}

// освобождвем память стека
void free_stack(ppStack stack) {
    while (*stack != NULL)
    {
        pop(stack);
    }
    
}