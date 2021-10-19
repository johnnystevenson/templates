#include <iostream>
#include "source/Module1.hpp"

using namespace std;

int main()
{
    Module1 mod1;
    string msg;
    mod1.getStr( msg );
    cout << msg << endl;
    return 0;
}
