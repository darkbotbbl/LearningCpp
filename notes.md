## Comma Operator
the comma , can be used to allow the compiler to execute two expressions as one expression
example i++, --j will be executed by the compiler as one.
use of this in for loop:
for (int i = 0,j = 5; i <= 5; i++, --j) {
    cout << "i = " << i << " and j = " << j;
}
