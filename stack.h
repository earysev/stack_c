// структура элемента стека
typedef struct stack {
    // данные
    int data;
    // указатель на следующий элемент стека
    struct stack *next;
} Stack, *pStack, **ppStack;



// функция добавления элемента в стек
void push(ppStack stack, int data);

// функция удаления элемента из стека
int pop(ppStack stack);

// возвращает максимум из стека
int max_value(ppStack stack);

// освобождвем память стека
void free_stack(ppStack stack);
