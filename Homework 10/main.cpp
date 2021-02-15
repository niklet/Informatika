
// Допишите программу, которая печатает абсолютное значение числа, введённого 
// с клавиатуры пользователем.

#include <iostream>

int main() {
    int x,y ;
    std::cout <<"X= ";
    std::cin >> x ;
    std::cout <<"|X|="<< abs(x) << std::endl;
    std::cout <<"Y= ";
    std::cin >>y;
    if (y>=0) {
        y = y;
    }
    else {
        y=-1*y;
    }
    std::cout<<"|y|= " << y << std::endl;

}