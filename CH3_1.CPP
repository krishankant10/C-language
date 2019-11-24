1. Solution : The program causes an unexpected result.

The range of int data type is from -32768 to 32767.
Because, the '*' operator gains the precedence over the '/' operator, the value, 160000 (400 * 400) is obtained initially. This value exceeds the specified range of an int value. Hence the unexpected result.