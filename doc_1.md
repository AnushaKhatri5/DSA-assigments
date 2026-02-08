

(a) Data Structures Defined

A "stack" data structure is used to check the balance of parentheses.

 1   A character array stack[MAX]` is used to store opening brackets. Here, top is an integer variable that keeps track of the top position of the stack. Then, stack follows LIFO (Last In First Out) principle. Only opening brackets** `(`, `{`, `[` are pushed into the stack.

(b) Description of Functions

1. push(char ch)

   -Pushes an opening bracket into the stack.
    -Increments the `top` pointer.

2. pop()

   -Removes and returns the top element from the stack.
   -Decrements the `top` pointer.

3. checkmatching(char open, char close)

   - Checks whether the opening and closing brackets are of the same type.
   -Returns `1` if matched, otherwise `0`.

4.  checkbalanced(char exp[])

  - First it Traverses the expression character by character.
  - Then Pushes opening brackets into the stack.
  - then Pops and matches when a closing bracket is found.
  - and at last returns `1` if parentheses are balanced, else `0`.

c) main function 

  - It takes the mathematical expression as input.
  - Calls the checkbalnced() function.
   - Displays whether the given expression has balanced parentheses or not.

(d) Sample Output

  Input 1: a + (b - c) * (d
  Output 1: The expression has NOT BALANCED parentheses.
  Input 2: a + (b - c)
  Output 2: The expression has BALANCED parentheses.




