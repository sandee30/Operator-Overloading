#include<iostream>
using namespace std;

class Complex{
    private:
        int real, img;
    public:
        void input();
        friend Complex operator*(const Complex&, const Complex&);
        void display();
};

void Complex::input(){
    cout<<"Enter real part: ";
    cin>>real;
    cout<<"Enter imaginary part: ";
    cin>>img;
}

Complex operator*(const Complex& t1, const Complex& t2){
    Complex temp;
    temp.real = t1.real*t2.real - t1.img*t2.img;
    temp.img = t1.real*t2.img + t1.img*t2.real;
    return temp;
}

void Complex::display(){
    if(img>=0)
        cout<<real<<" + "<<img<<"i"<<endl;
    else  
        cout<<real<<" - "<<-img<<"i"<<endl;
}

int main()
{
    Complex c1, c2, c3;
    c1.input();
    c2.input();
    c3 = c1*c2;
    c3.display();
    return 0;
}