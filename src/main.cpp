#include <iostream>

int addition(int a, int b);
int substraction(int a, int b);

int main(){
    int a = 10;
    int b = 5;
    std::cout<<"Result of addition of 2 numbers:"<<addition(a,b)<<std::endl;
    std::cout<<"Result of substraction of 2 numbers:"<<substraction(a,b)<<std::endl;
    return 0;
}