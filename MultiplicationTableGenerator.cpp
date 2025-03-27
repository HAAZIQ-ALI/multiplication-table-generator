#include <iostream>
using namespace  std;
void Mul(int x ){
    int y =1;
    while(y<=10){
        cout<<x <<" X " <<y << "=" <<x*y;
        y++;
    }
}
int main (){
    int num ;
    cout<<"Enter the a Number:";
    cin>>num;
    Mul(num);
    return 0;
}