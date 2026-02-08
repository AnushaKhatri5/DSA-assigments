#include <stdio.h>
#include <stdlib.h>

#define MAX 50

char stack[MAX];
int top = -1;

void push(char c)
 {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

char peek() {
    return stack[top];
}

int isEmpty() {
    return top == -1;
}

int precedence(char op) // Return precedence
 {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}


void infixToPostfix(char infix[], char postfix[]) // Converting infix to postfix
 {
    int k = 0;
    for (int i = 0; infix[i] != '\0'; i++) {
        char c = infix[i];
        if (isdigit(c)) {
            postfix[k++] = c; 
        } else if (c == '(') {
            push(c);
        } else if (c == ')') {
            while (!isEmpty() && peek() != '(')
                postfix[k++] = pop();
            pop(); 
        } else { 
            while (!isEmpty() && precedence(peek()) >= precedence(c))
                postfix[k++] = pop();
            push(c);
        }
    }
    while (!isEmpty())
        postfix[k++] = pop();
    postfix[k] = '\0';
}


int evaluatePostfix(char postfix[]) // Evaluating postfix//
 {
    int stackNum[MAX];
    int topNum = -1;
    for (int i = 0; postfix[i] != '\0'; i++) {
        char c = postfix[i];
        if (isdigit(c)) {
            stackNum[++topNum] = c - '0';
        } else {
            int b = stackNum[topNum--];
            int a = stackNum[topNum--];
            if (c == '+') stackNum[++topNum] = a + b;
            if (c == '-') stackNum[++topNum] = a - b;
            if (c == '*') stackNum[++topNum] = a * b;
            if (c == '/') stackNum[++topNum] = a / b;
        }
    }
    return stackNum[topNum];
}

int main()  //Main function
{
    char infix[MAX], postfix[MAX];
    printf("Enter infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);
    printf("Postfix Expression: %s\n", postfix);

    int result = evaluatePostfix(postfix);
    printf("Evaluation Result: %d\n", result);

    return 0;
}

