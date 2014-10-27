// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
#include <list>          // std::list
using namespace std;


//devuelve true si todos los elementos de la cola son pares, de lo contrario devuelve false
bool sonPares(queue<int> mi_cola)
{
//Verifica cada item en la cola, cuando encuentra un impar para el ciclo y retorna falso
//Pues no toda la cola es par.
    int longit = mi_cola.size();
    for(int i = 0; i < longit;i++)
    {
        if(mi_cola.front()%2>0)
        {
            return false;

        }

        mi_cola.pop();
    }
    return true;
}

//devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false
bool sonPares(list<int> mi_lista)
{
//Verifica cada item en la lista, cuando encuentra un impar para el ciclo y retorna falso
//Pues no toda la lista es par.
    int longit = mi_lista.size();
    for(int i = 0; i < longit;i++)
    {
        if(mi_lista.front()%2>0)
        {
            return false;

        }

        mi_lista.pop_front();
    }
    return true;
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(queue<string> mi_cola, string str)
{
    //Verifica todos los Items de la Cola, Cuando encuentra el string, para la funcion retorna true sino falso.

    int longit = mi_cola.size();
    for(int i = 0; i < longit;i++)
    {
        if(mi_cola.front()==str)
           {
               return true;
           }
           mi_cola.pop();
    }
    return false;
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{
    //Verifica todos los Items de la Lista, cuando encuentra el String, Para la funcion y retorna true de lo contrario False.
    int longit = mi_lista.size();
    for(int i = 0; i < longit;i++)
    {
        if(mi_lista.front()==str)
           {
               return true;
           }
           mi_lista.pop_front();
    }


    return false;
}

//devuelve la suma de los elementos de la cola
int getSuma(queue<int> mi_cola)
{
    //Recprre toda la cola, acumula el valor que esta enfrente y al final lo muestra.
    int longit = mi_cola.size();
    int acum = 0;
    for(int i = 0; i < longit;i++)
    {
        acum=acum+mi_cola.front();
        mi_cola.pop();
    }
    return acum;
}

//devuelve la suma de los elementos de la lista
int getSuma(list<int> mi_lista)
{

   int longit = mi_lista.size();
    int acum = 0;
    for(int i = 0; i < longit;i++)
    {
        acum=acum+mi_lista.front();
        mi_lista.pop_front();
    }
    return acum;
}

//Devuelve true si los elementos de la lista son estan ordenados alfabeticamente, de lo contrario devuelve false
bool estaOrdenada(list<char>mi_lista)
{
    return false;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
