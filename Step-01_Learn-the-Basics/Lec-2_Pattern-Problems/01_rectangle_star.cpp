#include <iostream>
using namespace std;
// void function to print the pattern
void printpattern1(int n){
    
    //outer loop for the number of lines
for (int i=0; i<n; i++) {
    // inner lines for the number of rows
    for (int j=0; j<n; j++){ 
        // what we have to print
        cout<<"*";
    }
    cout<<endl;
}
}
int main(){
    int n;
    cin>>n;
printpattern1(n);
}