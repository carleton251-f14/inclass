#include <stdio.h>

int x = 8;

void fun2();


void fun1() {
    int x = 6;
    fun2();
}

void fun2() {
    printf("%i\n",x);
}

int main() {
    fun2();
    fun1();
}
