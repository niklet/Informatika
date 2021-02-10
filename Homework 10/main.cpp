
// Допишите программу, которая печатает абсолютное значение числа, введённого 
// с клавиатуры пользователем.

#include <iostream>

int main() {
    int x ;
    std::cout <<"X= ";
    std::cin >> x ;
    std::cout <<"|X|="<< abs(x) << std::endl;

}