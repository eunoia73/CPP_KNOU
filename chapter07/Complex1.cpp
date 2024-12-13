#include <iostream>
#include "Complex1.h"
using namespace std;
// 곱하기
Complex1 Complex1::mul(const Complex1& c) const{
    double r = rPart * c.rPart - iPart * c.iPart;
    double i = rPart * c.iPart + iPart * c.rPart;
    return Complex1(r, i);
}
// 나누기
Complex1 Complex1::div(const Complex1& c) const{
    //분모값
    double d = c.rPart * c.rPart + c.iPart * c.iPart;
    Complex1 c1 = mul(c.conj());
    return Complex1(c1.rPart/d, c1.iPart/d); 
}

// 출력
void Complex1::display() const {
    cout << "(" << rPart;
    if(iPart > 0)
        cout << "+j" << iPart;
    else if(iPart < 0)
        cout << "-j" << -iPart;
    cout << ")";
}