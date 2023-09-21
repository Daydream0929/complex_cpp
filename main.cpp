#include <iostream>

using namespace std;

class Complex
{
public:
    Complex() = default; // 无参构造函数，因为我定义了其他的构造函数，所以如果我不定义无参构造函数，那么编译器不会自动为该类生成默认构造函数
    Complex(float real, float imaginary):
        real(real), imaginary(imaginary) {};
    
    void display() 
    {   
        cout << "0" << endl;
        cout << this->real << " " << this->imaginary << endl;
    }

private:
    float real;
    float imaginary;
};

int main()
{
    Complex complex_test1(2, 3);
    complex_test1.display();

    Complex complex_test2;
    complex_test2.display();
    

    return 0;
}