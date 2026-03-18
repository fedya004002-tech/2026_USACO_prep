#include <iostream>
#include <vector>
using namespace std;
int n, output, order;

int main(){
//we use while loop so it keeps asking until it fulfills conditions
while(true){
    order = 0;
    cout<<"Insert a number: \n";
    cin>>n;
    cout<<"Insert which prime you want(number): \n";
    cin>> output;



    for(int i=2; i<n; i++){
        bool isPrime = true;
        for(int k=2; k*k<=i; k++){
            if (i%k==0){
                isPrime = false;
                break;
            }
        }
        if (isPrime && ++order==output){
            /*if ++order == output adds 1 to order and 
            then compares it to output*/
            
                cout<<i;
                //since we found the prime we wanted, we can end the program
                return 0;
        }

    
    }
    cout<< "Not enough primes, try again.\n";
/* no return 0 here as we want it to keep repeating until
we get to the cout<<i*/
}
}
