#include <iostream>
using namespace std;
class numberToPrime{
public:
    numberToPrime();
    void outputPrime();
private:
    int *num;
    int length;
};

numberToPrime::numberToPrime() {
    cin>>length;
    num = new int[length];
    for(int i = 0; i < length; i++){
        cin>>num[i];
    }
}



void   numberToPrime::outputPrime() {
    int flag;
    for(int i = 0; i < length; i++){
        flag = 0;
        for(int j = 2; j * j <= num[i]; j++){
            if(num[i] % j == 0){
                flag = 1;
            }
        }
        if(flag == 0 && num[i]!=1){
            cout<<num[i]<<" ";
        }
    }
}

int main() {
    numberToPrime numberToPrime;
    numberToPrime.outputPrime();
    return 0;
}
