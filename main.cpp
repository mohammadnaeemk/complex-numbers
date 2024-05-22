#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class ComplexNumber
{
private:
    float real , image;
public:
    ComplexNumber(float Real=0 , float Image=0)
    {
        real = Real;
        image = Image;
    }
    ComplexNumber complexNumberGenerator(string input)
    {
        string Real="",Image="";
        float Realnum=0 , Imagenum=0;
        for (int i = 0; i < input.length() ; ++i) {
            if (input[i] != '-' && input[i] != '+')
            {
                Real += input[i];
            }
            else
            {
                for (int j = i; j < input.length(); ++j) {
                    if (input[i]!='i')
                    {
                        Image += input[i];
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }

        Realnum=stof(Real);
        Imagenum=stof(Image);
        ComplexNumber temp(Realnum , Imagenum);
        return  temp;
    }

    ComplexNumber sum(ComplexNumber num1 ,ComplexNumber num2)
    {
        ComplexNumber temp;
        temp.real = num1.real + num2.real;
        temp.image = num1.image + num2.image;
        return temp;
    }
    ComplexNumber sub(ComplexNumber num1 ,ComplexNumber num2)
    {
        ComplexNumber temp;
        temp.real = num1.real - num2.real;
        temp.image = num1.image - num2.image;
        return temp;
    }
    ComplexNumber mul(ComplexNumber num1 ,ComplexNumber num2)
    {
        ComplexNumber temp;
        temp.real = (num1.real * num2.real) - (num1.image * num2.image);
        temp.image = (num1.real * num2.image) + (num2.real * num1.image);
        return temp;
    }
    ComplexNumber div(ComplexNumber num1 ,ComplexNumber num2)
    {
        ComplexNumber temp;
        temp.real = ((num1.real * num2.real)+(num1.image * num2.image)) / ((num2.real * num2.real)+(num2.image * num2.image));
        temp.image = ((num1.image * num2.real)-(num1.real * num2.image)) / ((num2.real * num2.real)+(num2.image * num2.image));
        return temp;
    }

    ComplexNumber operator+ (ComplexNumber number2){
      ComplexNumber temp;
        temp.real = real + number2.real;
        temp.image = image + number2.image;
        return  temp;
    }
    ComplexNumber operator- (ComplexNumber number2){
        ComplexNumber temp;
        temp.real = real - number2.real;
        temp.image = image - number2.image;
        return temp;
    }
    ComplexNumber operator* (ComplexNumber number2){
        ComplexNumber temp;
        temp.real = (real * number2.real) - (image * number2.image);
        temp.image = (real * number2.image) + (number2.real * image);
        return temp;
    }
    ComplexNumber operator/ (ComplexNumber number2){
        ComplexNumber temp;
        temp.real = ((real * number2.real)+(image * number2.image)) / ((number2.real * number2.real)+(number2.image * number2.image));
        temp.image = ((image * number2.real)-(real * number2.image)) / ((number2.real * number2.real)+(number2.image * number2.image));
        return temp;
    }


};

int main() {
    return 0;
}
