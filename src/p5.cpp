#include <iostream>
#include <cmath>

using namespace std;

void hanoi(int n, char from, char aux, char to){
    if(n==1){
        cout<<"Move disk 1 from "<<from<<" to "<<aux<<"\n";
        return;
    }
    hanoi(n-1, from, to ,aux);
        cout<<"Move disk "<<n<<" from "<<to<<" to "<<aux<<"\n";
    hanoi(n-1, aux, from, to);
}


int main() {
    int n;
    cin>>n;
    hanoi(n,'1', '2', '3');
    return 0;
}