#include <iostream>
using namespace std;
int main()
{
	int n=9;
	cout<<" n "<<n<<endl;
	cout<<" &n "<<&n<<endl;
	
	int m=9;
	cout<<" m "<<m<<endl;
	cout<<" &m "<<&m<<endl;
	
	int* apuntador;
	apuntador=&n;
	cout<<"apuntador: "<<apuntador<<endl;
	cout<<"&apuntador: "<<&apuntador<<endl;
	
	cout<<"contenido de n "<<*apuntador<<endl;
	
	
	*apuntador=*apuntador+10;
	cout<<"n= "<<*apuntador<<endl;
	
	int* apuntador2;
	apuntador2=&m;
	cout<<"apuntador 2: "<<apuntador2<<endl;
	cout<<"&apuntador: "<<&apuntador2<<endl;
	
	apuntador2=apuntador;
	cout<<"apuntador 2: "<<apuntador2<<endl;
	m=*apuntador2+(*apuntador);
	cout<<" m "<<m<<endl;
	
	int** apuntador3;
	apuntador3=&apuntador2;
	cout<<"apuntador 3: "<<apuntador3<<endl;
	cout<<"&apuntador 3: "<<&apuntador3<<endl;
	cout<<"*apuntador 3: "<<*apuntador3<<endl;
	cout<<"**apuntador 3: "<<**apuntador3<<endl;
}

