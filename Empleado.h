#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED
typedef struct
{
    char id[50];
    char nombre[50];
    char horasTrabajadas[50];
    char sueldo[50];
}Empleado;

Empleado* Empleado_new();
void Empleado_delete();

int Empleado_setId(Empleado* this,char* id);
int Empleado_getId(Empleado* this,char* id);

int Empleado_setNombre(Empleado* this,char* nombre);
int Empleado_getNombre(Empleado* this,char* nombre);

int Empleado_setHorasTrabajadas(Empleado* this,char* horasTrabajadas);
int Empleado_getHorasTrabajadas(Empleado* this,char* horasTrabajadas);

int Empleado_setSueldo(Empleado* this,char* sueldo);
int Empleado_getSueldo(Empleado* this,char* sueldo);

#endif // EMPLEADO_H_INCLUDED
