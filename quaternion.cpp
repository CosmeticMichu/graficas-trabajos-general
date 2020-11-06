// include any needed header
#include <iostream>

// declare here the Quaternion struct/class
struct Quaternion {
    double a {0};
    double b {0};
    double c {0};
    double d {0};

    void print(void);

    Quaternion operator+(const Quaternion & Q2);
    Quaternion operator-(const Quaternion & Q2);
    Quaternion operator*(const Quaternion & Q2);
};

int main(int argc, char **argv)
{
    Quaternion q1{1, 2, 3, 0}, q2{0, 2, -3.4, -1};

    Quaternion q3;
    q3 = q1 + q2;
    q3.print();
    q3 = q1 - q2;
    q3.print();
    q3 = q1 * q2;
    q3.print();

    return 0;
}

// implement here the Quaternion struct/class

Quaternion Quaternion::operator+(const Quaternion & Q2){
    Quaternion result;
    result.a = a + Q2.a;
    result.b = b + Q2.b;
    result.c = c + Q2.c;
    result.d = d + Q2.d;

    return result;
}

Quaternion Quaternion::operator-(const Quaternion & Q2){
    Quaternion result;

    result.a = a - Q2.a;
    result.b = b - Q2.b;
    result.c = c - Q2.c;
    result.d = d - Q2.d;

    return result;
}
Quaternion Quaternion::operator*(const Quaternion & Q2){
    Quaternion result;
    result.a = a*Q2.a - b*Q2.b - c*Q2.c - d*Q2.d;
    result.b = a*Q2.b + b*Q2.a + c*Q2.d - d*Q2.c;
    result.c = a*Q2.c - b*Q2.d + c*Q2.a + d*Q2.b;
    result.d = a*Q2.d + b*Q2.c - c*Q2.b + d*Q2.a;

    return result;
}

void Quaternion::print(void)
{
    std::cout << "(" << a << ", " << b << ", " << c << ", " << d << ")" << "\n";
}
