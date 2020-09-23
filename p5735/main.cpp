#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class perimeter {
public:
    perimeter();
    perimeter(double x[],double y[], int n);
    void calculateDistance();
    double add();

private:
    double *distance,*xRay,*yRay;
    int length;
};


perimeter::perimeter() {}

perimeter::perimeter(double x[], double y[],  int n) {
    xRay = new double [n];
    yRay = new double [n];
    distance = new double [n];
    length = n;
    for(int i = 0; i < n; i++){
        xRay[i] = x[i];
        yRay[i] = y[i];
    }
}

void perimeter::calculateDistance() {
    double power[2];
    int count = 0;
    for(int i = 0; i < length; i++){
        for(int j = i+1; j< length; j++){
            power[0] = pow((xRay[i] - xRay[j]), 2);
            power[1] = pow((yRay[i] - yRay[j]) , 2);
            distance[count++] = sqrt(power[0] + power[1]);
        }
    }
}

double perimeter::add() {
    double sum=0;
    for(int i = 0; i < length; i++){
        sum += distance[i];
    }
    return sum;
}

int main() {
    int n = 3;
    double x[n],y[n],result;
    for(int i = 0; i < n; i++){
        cin>>x[i]>>y[i];
    }
    perimeter perimeter(x,y,n);
    perimeter.calculateDistance();
    result = perimeter.add();
    cout<<fixed << showpoint << setprecision(2) <<result;
    return 0;
}
