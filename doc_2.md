Documentation of question no 2

(A) Data Structures Defined
-stack = character array for storing operators during conversion.
-stackNum = integer array for storing numbers during evaluation.
-top / topNum = index of the top element in respective stacks.

(B) Functions Implemented

-push() / pop() / peek() / isEmpty() = manage stack operations for operators.
-precedence() = returns priority of + - * /.
-infixToPostfix() = converts infix expression to postfix using stack.
-evaluatePostfix() = calculates the result of a postfix expression using a number stack.

(C) main() Overview

Reads an infix expression from the user.
Converts it to postfix and prints it.
Evaluates the postfix expression and prints the result.

(D) Sample Output

Enter infix expression: 3+(2*4)
Postfix Expression: 324*+
Evaluation Result: 11


