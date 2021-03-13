#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size, i = 0;
    std::cin >> size;
    int *num = new int[size];
    while(std::cin>>num[i++]);
    while(std::cout<<num[--size]<<' ' && size);
    return 0;
}