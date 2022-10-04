#include <stdio.h>
#include <conio.h>
int stack[5], top = -1;
void push();
void pop();
void display();

int main()
{
    int choice;
    printf("1. PUSH\n");
    printf("2. POP\n");
    printf("3. Display\n");
    printf("4. Exit\n");

    while (1)
    {
        printf("\nChoose the option you want to perform\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        default:
            "Invalid option\n";
            break;
        }
    }
    return 0;
}

void push()
{
    int item;
    if (top == 5 - 1)
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("Enter the element to be pushed\n");
        scanf("%d", &item);
        top = top + 1;
        stack[top] = item;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Popped %d", stack[top]);
        top = top - 1;
    }
}

void display()
{
    if (top >= 0)
    {
        printf("Stack elements are\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
    }
    else
    {
        printf("Stack is empty\n");
    }
}