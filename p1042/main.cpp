#include <bits/stdc++.h>
using namespace std;

int main(){
    char data;
    int win11 = 0,lose11 = 0,win21 = 0,lose21 = 0;
    string result11,result21;
    bool flag = true;
    while(flag){
        cin.get(data);
        switch (data) {
            case 'W':
                win11++;
                win21++;
                break;
            case 'L':
                lose11++;
                lose21++;
                break;
            case 'E':
                flag = false;
                break;
            default:
                break;
        }
        if((win11>=11&&win11 - lose11 >=2)||(lose11>=11&&lose11 - win11 >=2)){
            result11= result11+to_string(win11)+':'+ to_string(lose11)+'\n';
            win11=0;
            lose11=0;
        }
        if((win21>=21&&win21 - lose21 >=2)||(lose21>=21&&lose21 - win21 >=2)){
            result21= result21+to_string(win21)+':'+ to_string(lose21)+'\n';
            win21=0;
            lose21=0;
        }
    }
    result11= result11+to_string(win11)+':'+ to_string(lose11)+'\n';
    result21= result21+to_string(win21)+':'+ to_string(lose21)+'\n';
    cout<<result11<<endl<<result21;
    return 0;
}
