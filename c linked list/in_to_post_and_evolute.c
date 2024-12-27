#include <stdio.h>
#include <ctype.h>

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x)
{
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    return 0;
}
void infixTopostfix(char *e, char *post)
{
    int i = 0;
    char x;
    while (*e != '\0')
    {
        if (isalnum(*e))
        {
            // printf("%c ",*e);
            post[i] = *e;
            i++;
        }
        else if (*e == ' ')
        {
            continue;
        }
        else if (*e == '(')
            push(*e);
        else if (*e == ')')
        {
            while ((x = pop()) != '(')
            {
                // printf("%c ", x);
                post[i] = x;
                i++;
            }
        }
        else
        {
            while (priority(stack[top]) >= priority(*e))
            {
                x = pop();
                // printf("%c ",x);
                post[i] = x;
                i++;
            }
            push(*e);
        }
        e++;
    }

    while (top != -1)
    {
        // printf("%c ",pop());
        post[i] = pop();
        i++;
    }
    post[i] = '\0';
    return;
}
void evlute(char * e){
    int n1,n2,n3,num;
    while(*e != '\0')
    {
        if(isdigit(*e))
        {
            num = *e - 48;
            push(num);
        }
        else
        {
            n1 = pop();
            n2 = pop();
            switch(*e)
            {
            case '+':
            {
                n3 = n1 + n2;
                break;
            }
            case '-':
            {
                n3 = n2 - n1;
                break;
            }
            case '*':
            {
                n3 = n1 * n2;
                break;
            }
            case '/':
            {
                n3 = n2 / n1;
                break;
            }
            }
            push(n3);
        }
        e++;
    }
    printf("\nThe result of expression =  %d\n\n",pop());
   
}
int main()
{
    char exp[100];
    char *e, x;
    printf("Enter the expression : ");
    gets(exp);
    printf("\n");
    char post[100];
    infixTopostfix(exp, post);
    puts(post);
    evlute(post);
    
}
