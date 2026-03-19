#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if (year % 400 == 0) {
        return true;
    } else if (year % 100 == 0) {
        return false;
    } else if (year % 4 == 0) {
        return true;
    } else {
        return false;
    }
}

int main(){
    int y, m;
    cin>>y>>m; 
    if (y<1583 || y > 2020 || m<1 || m>12) {
        cout<<0;
        return 0;
    }
    int d;
    if (m==1 || m == 3 || m==5|| m== 7||m==8|| m==10|| m==12){
      d =31;  
    }
    else if( m== 4|| m== 6||m==9||m==11){
      d=30;
    }
    else{
        if (isLeapYear(y)){
            d=29;
        }
        else{
            d=28;
        }
    }
    cout<<d;
    return 0;      
}