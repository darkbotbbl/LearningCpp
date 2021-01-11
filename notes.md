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

## Comparing C-Style strings
strcmp() from the cstring header file can be used to compare two C-style strings.
strcmp("string1", "string2")
strcmp returns true if the two strings are different and retuns false if they are the same.

this is true if str1 and str2 are identical
strcmp(str1, str2) == 0;

these are true if str1 and str2 are not identical
strcmp(str1, str2) != 0;
strcmp(str1, str2);

this is true if str1 precedes str2
strcmp(str1, str2) < 0;

this is true if str1 follows str2
strcmp(str1, str2) > 0;



# While Loop
syntax
while (text-condition) {
    body
}
the while loop is like the for loop without the initialization and the update parts.

## for Versus while
### syntax

for loop
----------
for (init-expression; test-expression; update-expression) {
    code
}

while loop
-----------
init-expression
while (test-expression) {
    code 

    update-expression
}

also;

while (test-expression) {
    code 
}
can be written as
for ( ;test-expression; ) {
    code
}

To execute a forever loop in c++,
for ( ; ; ) {
    code
}

### When to use?
Well, the time to use a for loop or a while loop is a bit of thing to decide on given their near equalness
But, Programmers generally use for loops as counting loops since the for loop format enables you to place all the important information in one place.
Programmers most often use while loops when they don't know in advanced precisely how many times a loop will execute.