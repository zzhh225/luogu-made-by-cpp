#include <iostream>
using namespace std;
class MainClass{
public:
    MainClass(int a,int b);
    void ProductInt();

private:
    int people,number;
};

MainClass::MainClass(int a, int b) {
    people = a;
    number = b;
}

void MainClass::ProductInt() {
    cout<<people*number;
}
int main() {
    int input[2];
    cin>>input[0]>>input[1];
    MainClass mainClass(input[0],input[1]);
    mainClass.ProductInt();
    return 0;
}
