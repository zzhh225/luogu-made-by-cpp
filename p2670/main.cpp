#include <iostream>
using namespace std;


int main() {
    int n,m,mineNumber=48;
    cin>>n>>m;
    char landmineMap[n][m];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>landmineMap[i][j];
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(landmineMap[i][j] == '?')
            {
                if(i == 0 && j == 0){
                    for(int Line = i;Line<=i+1;Line++){
                        for(int row = j; row<=j+1;row++){
                            if(landmineMap[Line][row] == '*'){
                                mineNumber++;
                            }
                        }
                    };
                }
                else if (i == 0 && j == m-1){
                    for(int Line = i;Line<=i+1;Line++){
                        for(int row = j-1; row<=j;row++){
                            if(landmineMap[Line][row] == '*'){
                                mineNumber++;
                            }
                        }
                    }
                }
                else if (i == n-1 && j == 0){
                    for(int Line = i-1;Line<=i;Line++){
                        for(int row = j; row<=j+1;row++){
                            if(landmineMap[Line][row] == '*'){
                                mineNumber++;
                            }
                        }
                    }
                }
                else if (i == n-1 && j == m-1){
                    for(int Line = i-1;Line<=i;Line++){
                        for(int row = j-1; row<=j;row++){
                            if(landmineMap[Line][row] == '*'){
                                mineNumber++;
                            }
                        }
                    }
                }
                else if (i == n-1){
                    for(int Line = i-1;Line<=i;Line++){
                        for(int row = j-1; row<=j+1;row++){
                            if(landmineMap[Line][row] == '*'){
                                mineNumber++;
                            }
                        }
                    }
                }
                else if (i == 0){
                    for(int Line = i;Line<=i+1;Line++){
                        for(int row = j-1; row<=j+1;row++){
                            if(landmineMap[Line][row] == '*'){
                                mineNumber++;
                            }
                        }
                    }
                }
                else if (j == m-1){
                    for(int Line = i-1;Line<=i+1;Line++){
                        for(int row = j-1; row<=j;row++){
                            if(landmineMap[Line][row] == '*'){
                                mineNumber++;
                            }
                        }
                    }
                }
                else if (j == 0){
                    for(int Line = i-1;Line<=i+1;Line++){
                        for(int row = j; row<=j+1;row++){
                            if(landmineMap[Line][row] == '*'){
                                mineNumber++;
                            }
                        }
                    }
                }
                else{
                    for(int Line = i-1;Line<=i+1;Line++){
                        for(int row = j-1; row<=j+1;row++){
                            if(landmineMap[Line][row] == '*'){
                                mineNumber++;
                            }
                        }
                    }
                }
                landmineMap[i][j] = mineNumber;
                mineNumber=48;
            }
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<landmineMap[i][j];
        }
        cout<<endl;
    }
}
