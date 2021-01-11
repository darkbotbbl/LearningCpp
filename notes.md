## Comma Operator
the comma , can be used to allow the compiler to execute two expressions as one expression
example i++, --j will be executed by the compiler as one.
use of this in for loop:
for (int i = 0,j = 5; i <= 5; i++, --j) {
    cout << "i = " << i << " and j = " << j;
}
the first expression is executed before the second.
the value of a comma expression is the value of the second part of the expression.
so eg: i = 20, j = 2 * i will result in 40
the comma operator has the lowest precedence of any operator.