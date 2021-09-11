#include<stdio.h>
int top = -1, s[5];
void peep() {
    int i;
    printf("enter element");
    scanf("%d",&i);
    if(top + i - 1 < = 0)
    {
        printf("Stack Underflow");
    }
    else{
        printf("%d",s[top-i+1]);
    }
}
void pop() {
    if (top == -1)
    {
        printf("Stack is UNDERFLOW");
    }
    else{
        top--;
    }
}
void push() {
    if (top >= (5-1))
    {
        printf("Stack Overflow");
    }
    else{
        top++;
        int x;
        printf("enter a element");
        scanf("%d",&x);
        s[top] = x;
    }
}
void display() {
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d\n",s[i]);
    }
    printf("pop element is %d\n", s[top+1]);   
}
void main() {
    int ch;
    while (1)
    {
        printf("enter your choice 1. PUSH\n 2. DISPLAY\n 3. POP");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2: 
            display();
            break;
        case 3:
            pop();
            break;
        case 4: 
            peep();
            break;
        default:
            printf("error");
            break;
        }
    }
}