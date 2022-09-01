// OOPs - Classes and objects

// c++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions
#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;
    void chek(void);

public:
    void read(void);
    void onececompli(void);
    void display(void);
};

void binary::read(void)
{
    cout << "enter the binary number" << endl;
    cin >> s;
}
void binary::chek(void)
{
    for (int i = 0; i < s.length(); i++)
    { // s.length means no. of characters in string
        if (s.at(i) != '0' && s.at(i) != '1')
        { // s.at(i/2) means the character at i/2
            cout << "invalid input";
            exit(0);
        }
    }
}
void binary::onececompli(void)
{
    chek(); // nesting

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1'; // always use single = inside
                           //  the bracket statement
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    cout << "displaying binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary ravi;
    ravi.read();
    ravi.display();
    ravi.onececompli();
    ravi.display();
    return 0;
}