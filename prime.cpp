#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    int output;
    cout<<"Insert a number: \n";
    cin>>n;
    cout<<"Insert which prime you want(number): \n";
    cin>> output;
    int final = output - 1;
    vector<int>result;
    vector<int>primesCount;


    for(int i=2; i<n; i++){
        bool isPrime = true;
        for(int k=2; k<i; k++){
            if (i%k==0){
                isPrime = false;
            }
        }
    
        if (isPrime){
            result.push_back(i);
            primesCount.push_back(1);
        }

    }
    int size = primesCount.size();
    if(output>size){
        cout<<"There are not enough primes.";
    }
    else{
        cout<< result[final];
    }
    
return 0;
}
