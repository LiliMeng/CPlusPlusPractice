#include<iostream>

using namespace std;

class Base
{
public:
    Base() {};
    virtual ~Base()
    {
        cout << " destruct of class Base!" << endl;
    };
    virtual void DoSomething()
    {
        cout << "Do something in class Base!" << endl;
    };
};

class Derived : public Base
{
public:
    Derived() {};
    ~Derived()
    {
        cout<<" destructor of class Derived!" <<endl;
    };
    void DoSomething()
    {
        cout<<"Do something in the derived class!"<<endl;
    };
};

int main()
{
    Derived *pTest1 = new Derived();

    cout<<"***************************"<<endl;
    pTest1->DoSomething();
    delete pTest1;

    cout<<"--------------------------"<<endl;

    Base *pTest2 = new Derived();
    pTest2->DoSomething();
    delete pTest2;

    return 0;

}

