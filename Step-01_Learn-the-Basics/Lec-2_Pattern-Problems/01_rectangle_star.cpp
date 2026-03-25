// simple rule to print patterns

#include <iostream>
using namespace std;
// void function to print the pattern
void printpattern1(){
    
    //outer loop for the number of lines
for (int i=0; i<4; i++) {
    // inner lines for the number of rows
    for (int j=0; j<4; j++){ 
        // what we have to print
        cout<<"*";
    }
    cout<<endl;
}
}
int main(){
printpattern1();
}