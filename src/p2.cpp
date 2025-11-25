// 題目 2：完美鋪磚計畫 (The Perfect Tiling Project) - 20分

#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(a==b){
        return a;}
    if(a>b){
        return gcd(a-b, b);}
    return gcd(a, b-a);
}

int main(){
    int x, y;
    cin>>x>>y;
    cout<<gcd(x, y);
}

    

