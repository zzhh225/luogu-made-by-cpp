#include <iostream>
using namespace std;

class typeChange{
public:
    typeChange();
    typeChange(char inputChar);
    void changeing();

private:
    char c;
};

typeChange::typeChange(char inputChar) {
    c = inputChar;
}

void typeChange::changeing() {
    c = c - 32;
    cout<<c;
}
int main() {
    char inputA;
    cin>>inputA;
    typeChange typeChange(inputA);
    typeChange.changeing();
    return 0;
}
