#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string number;
    cin>>number;
    reverse(number.begin(),number.end());
    cout<<number;
    return 0;
}
