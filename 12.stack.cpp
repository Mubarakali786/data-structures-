#include <stdio.h>

 int stack[100],top,push,pop,exit,a,b,c,size,choice,i,num;

int main()
{
    void push(a,b,c);
    void pop(a,b);
    void traverse();

    top =0;

    printf("ENTER THE SIZE OF STACK:");
    scanf("%d",&size);

    i=0;

    while(choice != 4)
    {

        printf("n***MENU***\n");
        printf("1.PUSH:\n");
        printf("2.POP:\n");
        printf("3.DISPLAY:\n");
        printf("4.QUIT:\n");
        printf("ENTER YOUR CHOICE:");

        scanf("%d",&choice);
        i++ ;

    switch(choice)
    {

        case 1:

            push(stack,top,size);
            break;

        case 2:

            pop(stack,top);
            break;

        case 3:

            traverse();
            break;

        case 4:

            exit(0);

        default:

    for(i=0;i<35;i++)
    printf("_");printf("\n\\n");

    printf("WRONG CHOICE:\n");

    for(i=0;i<35;i++)
    printf("_");printf("\n\\n");

    }

    }
    getch();
    return 0;
}



void push()
{

    int i,num;
    printf("ENTER THE NUMBER TO PUSH:");
    scanf("%d",&num);

    if(top == size)
    {

        for(i=0;i<35;i++)
        printf("_");printf("\n\n");

        printf("STACK IS FULL!\n");

        for(i=0;i<35;i++)
        printf("_");printf("\n\n");
    }
    else
    {

        top++; stack[top] = num;

    }
}



void pop()
{

    int i,num;
    printf("ENTER THE NUMBER TO POP:");
    scanf("%d",&num);

    if(top == 0)
    {

        for(i=0;i<35;i++)
        printf("_");printf("\n\n");

        printf("STACK IS EMPTY:\n");

        for(i=0;i<35;i++)
        printf("_");printf("\n\n");

    }
    else
    {

        num= stack[top];
        top--;

    }
}


void traverse()
{

    int i;

    if (top==0)
    {

        for(i=0;i<35;i++)
        printf("_");printf("\n\n");

        printf("STACK IS EMPTY:\n");

        for(i=0;i<35;i++)
        printf("_");printf("\n\n");

    }
    else
    {

        for(i=0;i<35;i++)
        printf("_");printf("\n\n");

        printf("Stack Display\n");

        for(i=1;i<=top;i++) 

        if(i==top) 
        { 

            printf("%d at %d -> top\n",stack[i],i);

            for(i=0;i<35;i++)
            printf("_");printf("\n\n");
        }
        else
        {

            printf("%d at %d\n",stack[i],i);

            for(i=0;i<35;i++)
            printf("_");printf("\n\n");
        }
    }
    
}

