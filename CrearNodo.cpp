#include <iostream>
#include <cstdlib>
#include<stdio.h>
using namespace std;

struct nodo{
     char nro;
     struct nodo *izq, *der;
};

typedef struct nodo *ABoBi;

ABoBi crearNodo(char x)
{
     ABoBi nuevoNodo = new(struct nodo);
     nuevoNodo->nro = x;
     nuevoNodo->izq = NULL;
     nuevoNodo->der = NULL;

     return nuevoNodo;
}

void verArbol(ABoBi arbol, int n)
{
     if(arbol==NULL)
          return;
     verArbol(arbol->der, n+1);

     for(int i=0; i<n; i++)
         cout<<"   ";

     cout<< arbol->nro <<endl;

     verArbol(arbol->izq, n+1);
}

int main()
{
    ABoBi arbol = NULL;   // ARBOL CREADO

   int n;  // EL NUMERO DE NODOS QUE DESEA AGREGAR AL ARBOL
    //t x; // ELEMENTO A INSERTAR EN CADA NODO

    cout << "\n\t\t  ..[ ARBOL BINARIO DE BUSQUEDA ]..  \n\n";

    cout << " INGRESE EL NUMERO DE NODOS A INGRESAR EN EL ARBOL:  ";
    cin >> n;
    cout << endl;
 
 	arbol = crearNodo('+');
 	arbol->izq=crearNodo('B');
 	arbol->der=crearNodo('*');
 	arbol->der->izq=crearNodo('B');
 	arbol->der->der=crearNodo('-');
 	arbol->der->der->der=crearNodo('+');
 	arbol->der->der->der->izq=crearNodo('C');
 	arbol->der->der->der->der=crearNodo('D');
 	

    cout << "\n Mostrando ABB \n\n";
    verArbol( arbol, 0);

    system("pause");
    return 0;
}
