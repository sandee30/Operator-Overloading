#include<iostream>
using namespace std;

class Complex{
    private:  
        int real, img;
    public:
        void input(){
            cout<<"Enter real part: ";
            cin>>real;
            cout<<"Enter imaginary part: ";
            cin>>img;
        }

        Complex operator*(const Complex& c){
            Complex temp;
            temp.real = real*c.real - img*c.img;
            temp.img = img*c.real + real*c.img;
            return temp;
        }

        void display(){
            if(img>=0)
                cout<<"The product is "<<real<<" + "<<img<<"i"<<endl;
            else
                cout<<"The product is "<<real<<" - "<<-img<<"i"<<endl;
        }
};

int main(){
    Complex c1,c2,c3;
    c1.input();
    c2.input();
    c3 = c1 * c2;                // c3 = c1.operator*(c2);
    c3.display();
    return 0;
}