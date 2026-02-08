#include <stdio.h>
#include <string.h>

#define MAX 80

int stack[MAX];
int top = -1;


void push(char ch) // push element into stack//
 {
    if (top < MAX - 1) {
        stack[++top] = ch;
    }
}


void pop()  //pop the element from stack//
 {
    if (top >= 0) {
        return stack[top--];
    }
    return '\0';
}

void checkmatching(char open, char close)//check matching pair//
 {
    if (open == '(' && close == ')')
        return 1;
    if (open == '{' && close == '}')
        return 1;
    if (open == '[' && close == ']')
        return 1;
    return 0;
}


void checkbalanced(char exp[]) //check balanced parenthesis
{
    char ch, popped;
    
    for (int i = 0; i < strlen(exp); i++) {
        ch = exp[i];

        if (ch == '(' || ch == '{' || ch == '[')  // If opening bracket, push to stack
		 {
            push(ch);
        }

        if (ch == ')' || ch == '}' || ch == ']')   // If closing bracket, pop and match
		{
            if (top == -1)
                return 0;

            popped = pop();
            if (!checkbalanced(popped, ch))
                return 0;
        }
    }

 
    if (top == -1)     // If closing bracket, pop and match
        return 1;
    else
        return 0;
}


int main() {
    char expression[MAX];

    printf("Enter an expression: ");
    gets(expression);

    if (checkbalanced(expression))
        printf("The expression has balanced parentheses.\n");
    else
        printf("The expression has not  balamced parentheses.\n");

    return 0;
}

