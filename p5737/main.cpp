#include <iostream>
using namespace std;
int main() {
    int begin,end,count=0;
    cin>>begin>>end;
    for(int i = begin; i <= end; i++){
        if( i % 400 == 0 || (i % 4 == 0 && i % 100 != 0 ) ){
            count++;
        }
    };
    cout<<count<<endl;
    for(int i = begin; i <= end; i++){
        if( i % 400 == 0 || (i % 4 == 0 && i % 100 != 0 ) ){
            cout<<i<<" ";
        }
    }
    return 0;
}
