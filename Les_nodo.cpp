#include <iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo* siguiente;
};

void crearLista(Nodo* &cabecera, int d){
	Nodo* nuevoNodo=new Nodo;
	nuevoNodo->dato=d;
	nuevoNodo->siguiente=NULL;
	cabecera=nuevoNodo;
	
}

void insertarInicio(Nodo*&cabecera, int d){
	Nodo* nuevoNodo= new Nodo;
	nuevoNodo->dato=d;
	nuevoNodo->siguiente=cabecera;
	cabecera=nuevoNodo;
}
void insertarFinal(Nodo* cabecera, int d){
	Nodo* nuevoNodo=new Nodo;
	nuevoNodo->dato=d;
	nuevoNodo->siguiente=NULL;
	Nodo* aux=cabecera;
	while(aux->siguiente!=NULL){
		aux=aux->siguiente;
	}
	aux->siguiente=nuevoNodo;
}
void imprimirNodos(Nodo* cabecera){
	Nodo* aux=cabecera;
	while(aux!=NULL){
		cout<<aux->dato<<endl;
		aux=aux->siguiente;
	}
}
void imprimirNodos2(Nodo* cabecera){
	Nodo* aux=cabecera;
	while(aux!=NULL){
		cout<<"----------------------"<<endl;
		cout<<"direccion del nodo: "<<aux<<endl;
		cout<<"dato nodo: "<<aux->dato<<endl;
		cout<<"enlace del nodo: "<<aux->siguiente<<endl;
		aux=aux->siguiente;
	}
}


int main(){
	
	int x;
	Nodo* cabecera=NULL;
	cout<<"ingrese el dato para crear la lista: "<<endl;
	cin>>x;
	crearLista(cabecera, x);
	
	for(int i=1;i<=3;i++);{
		cout<<"ingrese el dato para insertar al inicio de  la lista: "<<endl;
		cin>>x;
		insertarInicio(cabecera, x);
	}	
	cout<<"lista de datos: "<<endl;
	imprimirNodos2(cabecera);
	
	for(int j=1;j<=3;j++);{
		cout<<"ingrese el dato para insertar al final de  la lista: "<<endl;
		cin>>x;
		insertarFinal(cabecera, x);
	}
	cout<<"lista de datos: "<<endl;
	imprimirNodos2(cabecera);
	
	return 0;
}
