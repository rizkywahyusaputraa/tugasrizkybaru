#include <iostream>

using namespace std;

int main() 
{
	cout<<"||----PROGRAM MENENTUKAN underweight, normal, atau overweight----||"<<endl;
    float bb;
    int tb;
     cout << "Silahkan masukkan tinggi badan(cm) : "; cin >>tb;
    cout << "Silahkan masukkan berat badan(kg) : " ;
    cin >> bb;
    if (bb<tb/2.5)
       cout << "  Anda Mengalami : Underweight(kekurangan berat badan)" << endl;
}
