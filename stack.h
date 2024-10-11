// структура элемента стека
typedef struct stack_item {
    // данные
    int data;
    // указатель на следующий элемент стека
    struct stack_item *next;
} Stack_item;

typedef struct stack {
    int max_data;
    Stack_item *head;
} Stack;

// функция добавления элемента в стек
void push(Stack *head, int data);

// функция удаления элемента из стека
int pop(Stack *head);
