#include<iostream>
using namespace std;

class Weight{
    private:
        int kg;
    public:
        void input(){
            cout<<"Enter weight in kg: ";
            cin>>kg;
        }

        Weight operator++(){
            Weight temp;
            ++kg;
            temp.kg = kg;
            return temp;
        }

        Weight operator ++(int){
            Weight temp;
            temp.kg = kg;
            kg++;
            return temp;
        }

        void display(){
            cout<<"The weight is "<<kg<<endl;
        }
};

int main()
{
    Weight w1,w2;
    w1.input();
    w1.display();
    w2 = ++w1;
    w1.display();
    w2 = w1++;
    w2.display();
    return 0;
}
