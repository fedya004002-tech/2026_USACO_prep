#include <iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int seq[11] = {};
    for(int i=m; i<=n; i++){
        int curr = i;
        while(curr>0){
            int lastdigit = curr%10;
            seq[lastdigit]++;
            curr/=10;
        }
    }
    for(int i=0; i<10; i++){
        cout<<seq[i]<<" ";
    }
    return 0;
}