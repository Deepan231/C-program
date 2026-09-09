#include <stdio.h>

/* NANR */
void fun1()
{
    printf("NANR: No argument, No return value\n");
}

/* ANR */
void fun2(int a)
{
    printf("ANR: Square = %d\n", a * a);
}

/* NAWR */
int fun3()
{
    return 10 + 20;
}

/* AWR */
int fun4(int a, int b)
{
    return a + b;
}

int main()
{
    int result;

    fun1();

    fun2(5);

    result = fun3();
    printf("NAWR: Sum = %d\n", result);

    result = fun4(10, 20);
    printf("AWR: Sum = %d\n", result);

    return 0;
}
