#include<iostream>

using namespace std;

class Vectorstl
{

public:
    int x;
    int y;

    Vectorstl(int xValues , int yValues )
    {
        x= xValues;
        y=yValues;

    }

     void myMethod()
    {
        int c;

        c=x*y;
        cout<<"print it Out: "<<c;
    }
};


int main()
{

    Vectorstl obj(3,2);
    obj.myMethod();

    return 0;
}
/*
#include<iostream>

using namespace std;

class MyClass
{
public:
    int x;
    int y;

    MyClass(int x_val, int y_val)
    {
        x = x_val;
        y = y_val;
    }

    void myMethod()
    {
        int c = x * y;
        cout << "print it Out: " << c << endl;
    }
};

int main()
{
    MyClass obj(3, 2);
    obj.myMethod();
    return 0;
}
*/
