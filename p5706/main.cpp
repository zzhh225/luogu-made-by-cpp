#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double a;
    int b;
    cin>>a>>b;
    cout<<setiosflags(ios::fixed)<<setprecision(3);
    cout<<a/b<<endl<<b*2;
    return 0;
}
