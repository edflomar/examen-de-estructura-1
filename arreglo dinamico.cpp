#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void inNotas();
void outNotas();
int nCalif, *calificacion, *ptr;

int main()
{
	cout<<"Bienvenido...."<<endl;
	
	inNotas();
	outNotas();
	
	delete[] calificacion;
	
	getch();
	return 0;
}

void inNotas()
{
	cout<<"Digite el numero de calificaciones: "; cin>>nCalif;
	calificacion=new int[nCalif];
	
	for(int i=0; i<nCalif; i++){
		cout<<"Ingrese nota: "; cin>>calificacion[i];
	}
}
void outNotas()
{
	ptr=calificacion;
	cout<<"\nMostarndo notas al usuario."<<endl;
	for(int i=0 ; i<nCalif; i++)
	{
		cout<<*ptr++<<endl;
	}
}
