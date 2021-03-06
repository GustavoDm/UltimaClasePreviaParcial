#include "Empleado.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void em_calcularSueldo(void *p)
{
    char horasTrabajadas[50];
    int aux;
    if(!Empleado_getHorasTrabajadas(p, horasTrabajadas))
    {
        aux = atoi(horasTrabajadas);

        if(aux<120)
        {
            aux=aux*180;
            horasTrabajadas
            Empleado_setSueldo(p, horasTrabajadas);
            return 0;
        }

        else if(aux>120 && aux< 160)
        {
        horasTrabajadas=((aux-120)*240)+(120*180);
        Empleado_setSueldo(p, horasTrabajadas);
        return 0;
        }

        else if(aux>160)
        {
        aux=((aux-160)*350+(40*240)+(120*180));

        }
    }


}

Empleado* Empleado_new()
{
    Empleado* this;
    this=malloc(sizeof(Empleado));
    return this;
}

void Empleado_delete(Empleado* this)
{
    free(this);
}

int Empleado_setId(Empleado* this,char* id)
{
    int retorno=-1;
    if(this!=NULL && id!=NULL)
    {
        strcpy(this->id,id);
        retorno=0;
    }
    return retorno;
}

int Empleado_getId(Empleado* this,char* id)
{
    int retorno=-1;
    if(this!=NULL && id!=NULL)
    {
        strcpy(id,this->id);
        retorno=0;
    }
    return retorno;
}

int Empleado_setNombre(Empleado* this,char* nombre)
{
    int retorno=-1;
    if(this!=NULL && nombre!=NULL)
    {
        strcpy(this->nombre,nombre);
        retorno=0;
    }
    return retorno;
}

int Empleado_getNombre(Empleado* this,char* nombre)
{
    int retorno=-1;
    if(this!=NULL && nombre!=NULL)
    {
        strcpy(nombre,this->nombre);
        retorno=0;
    }
    return retorno;
}

int Empleado_setHorasTrabajadas(Empleado* this,char* horasTrabajadas)
{
    int retorno=-1;
    if(this!=NULL && horasTrabajadas!=NULL)
    {
        strcpy(this->horasTrabajadas,horasTrabajadas);
        retorno=0;
    }
    return retorno;
}

int Empleado_getHorasTrabajadas(Empleado* this,char* horasTrabajadas)
{
    int retorno=-1;
    if(this!=NULL && horasTrabajadas!=NULL)
    {
        strcpy(horasTrabajadas,this->horasTrabajadas);
        retorno=0;
    }
    return retorno;
}

int Empleado_setSueldo(Empleado* this,char* sueldo)
{
    int retorno=-1;
    if(this!=NULL && sueldo!=NULL)
    {
        strcpy(this->sueldo,sueldo);
        retorno=0;
    }
    return retorno;
}

int Empleado_getSueldo(Empleado* this,char* sueldo)
{
    int retorno=-1;
    if(this!=NULL && sueldo!=NULL)
    {
        strcpy(sueldo,this->sueldo);
        retorno=0;
    }
    return retorno;
}

