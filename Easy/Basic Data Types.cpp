#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int num = 3;
    long num1 = 12345678912345;
    char a = 'a';
    float num3 = 334.230;
    double num4 = 14049.30493;
    
    scanf("%d %ld %c %f %lf", &num, &num1, &a, &num3, &num4 );
    printf("%d\n", num);
    printf("%ld\n", num1);
    printf("%c\n", a);
    printf("%f\n", num3);
    printf("%lf\n", num4);
    return 0;
}