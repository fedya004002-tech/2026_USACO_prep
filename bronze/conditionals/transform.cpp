#include <iostream>
using namespace std;

int n;
char original[11][11];
char transformed[11][11];
char last[11][11];
char curr[11][11];


void initial(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> original[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> transformed[i][j];
        }
    }
}

void f(){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            last[i][j]=original[i][j];
            curr[i][j]=original[i][j];
        } 
    }
}

void rotated90(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            curr[j][n-1-i] = last[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            last[i][j] = curr[i][j];
        }
    }
    
}

void reflection(){
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            curr[i][n-1-j]=last[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            last[i][j] = curr[i][j];
        }
    }
}

bool check(){
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            if(curr[i][j]!= transformed[i][j]){
                return false; 
            }
        }
    }
    return true;
}

int main(){
    cin>>n;
    initial();

    //rotate 90
    f();
    rotated90();
    if(check()){
        cout<<1;
        return 0;
    }

    //rotate 180
    f();
    rotated90();
    rotated90();
    if(check()){
        cout<<2;
        return 0;
    }

    //rotate 270
    f();
    rotated90();
    rotated90();
    rotated90();
    if (check()){
        cout<<3;
        return 0;
    }

    //reflect horizontally
    f();
    reflection();
    if (check()){
        cout<<4;
        return 0;
    }

    //reflect then rotate 90
    f();
    reflection();
    rotated90();
    if (check()){
        cout<<5;
        return 0;
    }

    //reflect then rotate 180
    f();
    reflection();
    rotated90();
    rotated90();
    if (check()){
        cout<<5;
        return 0;
    }

    //reflect then rotate 270
    f();
    reflection();
    rotated90();
    rotated90();
    rotated90();
    if (check()){
        cout<<5;
        return 0;
    }

    //same as original
    f();
    if(check()){
        cout<<6;
        return 0;
    }

    //not found
    cout<<7;
    return 0;

} 