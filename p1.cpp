#include<iostream>
using namespace std;

class Complex{
    int real, img;
    public:
        void input(){
            cout<<"Enter real part: ";
            cin>>real;
            cout<<"Enter imaginary part: ";
            cin>>img;
        }

        Complex operator+(Complex& obj){
            Complex res;
            res.real = real + obj.real;
            res.img = img + obj.img;
            return res;
        }

        void display(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
};

int main(){
    Complex c1,c2,sum;
    c1.input();
    c2.input();
    sum = c1 + c2;
    sum.display();
    return 0;
}