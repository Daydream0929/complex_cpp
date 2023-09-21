#include <iostream>
#include <cmath>

using namespace std;

class Complex
{
public:
    Complex() = default; // 无参构造函数，因为我定义了其他的构造函数，所以如果我不定义无参构造函数，那么编译器不会自动为该类生成默认构造函数
    Complex(float real, float imaginary): real(real), imaginary(imaginary) {};
    
    void display() 
    {   
        cout << "0" << endl;
        cout << this->real << " " << this->imaginary << endl;
    }

    float get_real(float real)
    {
        return this->real;
    }

    float get_imaginary(float imaginary)
    {
        return this->imaginary;
    }

    void set_real(float real)
    {
        this->real = real;
    }

    void set_imaginary(float imaginary)
    {
        this->imaginary = imaginary;
    }

    float cal_magnitude()
    {
        return sqrt( this->real * this->real + this->imaginary * this->imaginary );
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

    complex_test2.set_real(3);
    complex_test2.set_imaginary(3);
    complex_test2.display();

    cout << complex_test2.cal_magnitude() << endl;
    
    return 0;
}