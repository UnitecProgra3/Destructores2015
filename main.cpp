#include <iostream>

using namespace std;

class B
{
public:
    B()
    {
        cout<<"Creando B"<<endl;
    }
    ~B()
    {
        cout<<"Destruyendo B"<<endl;
    }
};

class A
{
public:
    B *b;
    int c;
    A()
    {
        cout<<"Creando A"<<endl;
        b = new B();
    }
    ~A()
    {
        cout<<"Destruyendo A"<<endl;
        delete b;
    }
};

int main()
{
    //Ejemplo stack
    if(true)
    {
        A a;
    }
    //Ejemplo heap
    A* a = new A();
    delete a;
    return 0;
}
