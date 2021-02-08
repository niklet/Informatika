#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    int num,num1,a, b;
    cout << "Введите число =" ;
    cin >> num;
    num1=num ;
    a=0 ;
    while (num1>0) {
        a = a + 1;
        num1 = num1 / 10;
    }
    b=1;
    while(a>0){
        cout<<b <<" Разряд" <<" = "<< num%10<<endl ;
        a=a-1;
        b=b+1;
        num=num/10 ;
    }

    return 0 ;
}
