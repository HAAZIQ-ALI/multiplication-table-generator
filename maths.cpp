#include<iostream>
#include<cmath>

using namespace std;

int main (){
    double m1 ,m2 ,r;
    const double G= 6.67430e-11; //G Constant 

    cout<< "Enter the mass of the first object (in KG):";
    cin>> m1;
    cout<< "Enter the mass of the second object (in KG):";
    cin>> m2;
    cout<< "Enter the distance between the two objects (in metres):";
    cin>> r;

    double force = G*(m1 * m2) / (r* r);
    cout << "The gravitational force between the two objects is:"<<force <<"N\n";

    return 0;


}