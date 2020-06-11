#include <iostream>
#include <cassert>
#include <stdlib.h>
#include <time.h>

using namespace std; 

bool IsBisiesto(int Ano);

int main()
{
    int Ano;
    /* Se utilizo una instruccion random para que elija aleatoriamente los valores a comprobar en assert */

        srand(time(NULL));

    Ano=2020+rand () % (2025-2020);
   
    cout << Ano  << "\n";  
  /* El not ingresado en Assert va a volver un si en no y un no en si */      
assert( not IsBisiesto(Ano)) ;/* Van a dar error con Año 2020,2024. Al ingresar el not le estoy diciendo a la funcion booleana que aunque cumplan con las condiciones el año no va a ser valido */

assert(IsBisiesto(Ano)); /* Van a dar error con Año 2021,2022,2023 ya que no cumplen con las condiciones expuestas en la funcion */

 system("pause");
}
bool IsBisiesto(int Ano)
    {    
    return
    ((Ano%100 !=0) || (Ano%400 ==0)) && (Ano%4==0) && Ano > 1582 ;
/*
    (Año divido por 100 resto distinto de 0 ) O (Año dividido por 400 resto =0) y ( Año dividido por 4 resto =0 ) Y Año mayor a 1582  */ 
    }

