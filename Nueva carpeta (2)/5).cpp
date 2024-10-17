#include<iostream>
#include<string>
using namespace std;
int main(){
	//char cadena;
	string cadena;
	int resultado;
//	string cadena[100] = "hola";
	cout<<"ingrese una cadena de caracteres: "<<endl;
	cin>>cadena; 
	resultado = cadena.size();
	cout<<"La cantidad de caracteres que hay son: "<<resultado<<endl;
}
