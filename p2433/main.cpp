#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int T;
    cin >> T;
    if (T == 1) {
        // 粘贴问题 1 的主函数代码，除了 return 0
        cout << "I love Luogu!";
    } else if (T == 2) {
        cout<<2 + 4<<" "<<10 - 2 - 4;
        // 粘贴问题 2 的主函数代码，除了 return 0
    } else if (T == 3) {
        int a=4,n=14;
        cout<<n/a<<endl;
        cout<<n/a*a<<endl;
        cout<<n-n/a*a<<endl;
        // 请自行完成问题 3 的代码
    } else if (T == 4) {
        cout<<setprecision(6);
        cout<<500.0/3.0;
        // 请自行完成问题 4 的代码
    } else if (T == 5) {
        cout<<(260+220)/(12+20);
        // 请自行完成问题 5 的代码
    } else if (T == 6) {
        cout<<pow(6*6+9*9,0.5);
        // 请自行完成问题 6 的代码
    } else if (T == 7) {
        cout<<100+10<<endl;
        cout<<110-20<<endl;
        cout<<0<<endl;
        // 请自行完成问题 7 的代码
    } else if (T == 8) {
        cout<<5*3.141593<<endl<<5*5*3.141593<<endl<<4.0/3.0*5*5*5*3.141593;
        // 请自行完成问题 8 的代码
    } else if (T == 9) {
        cout<<((((1+1)*2+1)*2+1)*2);
        // 请自行完成问题 9 的代码
    } else if (T == 10) {
        cout<<9;
        // 请自行完成问题 10 的代码
    } else if (T == 11) {
        cout<<100.0/3.0;
        // 请自行完成问题 11 的代码
    } else if (T == 12) {
        cout<<14<<endl<<"q";
        // 请自行完成问题 12 的代码
    } else if (T == 13) {
        int s1=static_cast<int>(4.0/3.0*4*4*4*3.141593),s2=static_cast<int>(1.3333*10*10*3.141593);
        cout<<s1<<endl<<s2;
        cout<<pow(s1+s2,1/3);
        // 请自行完成问题 13 的代码
    } else if (T == 14) {
        int money,people,perMoney;
        people = 10;
        perMoney = 110;
        money = people * perMoney;
        while(money!=3500){
            people++;
            perMoney++;
            money = people * perMoney;
        }
        cout<<perMoney;
        // 请自行完成问题 14 的代码
    }
    return 0;
}