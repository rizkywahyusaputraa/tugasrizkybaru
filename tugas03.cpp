#include <iostream>
using namespace std;

int main(){
float jk, le, gtot, gp, gb,ul, jam,pa;
	cout<<"   PROGRAM GAJI BBERSIH KARYAWAN"<<endl;
	cout<<""<<endl;
	cout<<"Lama Kerja Karyawan    : "; cin>> jk;
	cout<<"Gaji Perjam Karyawan   : "; cin>>gp;	
	
	if (jk>40){
	system("cls");
	cout<<"   PROGRAM GAJI BBERSIH KARYAWAN"<<endl;
	cout<<"     KARYAWAN MENDAPAT LEMBUR"<<endl;
	cout<<""<<endl;
	le=jk-40;
	jam=le*1.5;
	ul=gp*jam;
	pa=ul*0.15;
}
