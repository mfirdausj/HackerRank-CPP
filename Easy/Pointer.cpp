#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // Complete this function 
    int sum = *a;
    *a += *b;
    *b -= sum;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, abs(b));

    return 0;
}