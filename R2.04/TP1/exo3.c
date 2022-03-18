#include <stdio.h>

int main() {
    int i = 1;
    int a = 5;
    int pivot;
    printf("i=%d a=%d\n",i,a);
    pivot = i;
    i = a;
    a = pivot;
    printf("i=%d a=%d\n",i,a);
    return 0;
}