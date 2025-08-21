#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    string str ;
    cin>> str;
    int num1, num2;
    char op;  
    stringstream ss(str);
    ss >> num1 >> op >> num2;
    cout <<num1<<"+"<<num2<<"="<< num1 + num2 << endl;
    return 0;
}

