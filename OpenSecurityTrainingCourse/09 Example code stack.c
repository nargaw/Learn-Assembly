#include <stdio.h>

int bar(int y)
{
    int a = 3 * y;
    printf("bar returned %d", a);
    return a;
}

int foo(int x)
{
    int b = 5 * x;
    printf("foo passed %d", b);
    return bar(b);
}

int main()
{
    int c = foo(7);
    printf("main passed %d", c);
    return 0;
}

//as the stack grows bottom to top
/**
 * top of stack
 * Main() frame
 * foo() frame
 * bar() frame
 * bottom of stack
 */