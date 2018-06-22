#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Empleado.h"



int parser_parseEmpleados(char* fileName, ArrayList* listaEmpleados)
{

    int retorno =-1;

    if(listaEmpleados != NULL)
    {


        Empleado* aux;
        char id[50];
        char nombre[50];
        char horasTrabajadas[50];
        FILE* fp;
        fp = fopen("data.csv","r");
        fscanf(fp,"%[^,],%[^,],%[^\n]\n",id,nombre,horasTrabajadas);

        do{
            fscanf(fp,"%[^,],%[^,],%[^\n]\n",id,nombre,horasTrabajadas);
            aux = Empleado_new();
            al_add(listaEmpleados,aux);

        }while(!feof(fp));

        retorno=0;
    }

    return retorno; // OK
}

