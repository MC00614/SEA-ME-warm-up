#include <iostream>

int* swap(int* x, int* y){
    std::cout<<x<<'\t'<<y<<'\n';
    int* t = x;
    x = y;
    y = t;
    std::cout<<x<<'\t'<<y<<'\n';
    return x, y;
}

int main(){
    int a = 1;
    int b = 2;
    std::cout<<&a<<'\t'<<&b<<'\n';
    &a, &b = swap(&a, &b);
    std::cout<<&a<<'\t'<<&b<<'\n';
    return 0;
}