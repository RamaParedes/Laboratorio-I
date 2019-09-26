#include <stdio.h>
#include <stdlib.h>
#include "Alumno.h"
#define A 5

int main()
{
    eAlumno listaAlumnos[A];
    int i;
    int opcion;
    int index;
    int retorno;

    if(inicializarAlumnos(listaAlumnos,A)==0)
    {
        do
        {
            printf("1.Cargar alumnos\n");
            printf("2.Mostrar alumnos\n");
            printf("3.Ordenar alumnos por nombre\n");
            printf("4.Buscar Alumno\n");
            printf("5.Eliminar Alumno\n");
            printf("Elija una opcion: ");
            scanf("%d", &opcion);
            switch(opcion)
            {
            case 1:

                /*if(cargarAlumnos(listaAlumnos,A)==1)
                {
                    printf("Alumno ingresado");
                }
                else
                {
                    printf("No hay espacio");
                }*/
                hardcoderAlumnos(listaAlumnos,A);

                break;
            case 2:
                mostrarListadoDeAlumnos(listaAlumnos,A);
                break;
            case 3:
                ordenarAlumnosPorNombre(listaAlumnos,A);
                break;
            case 4:

                index = buscarAlumnoPorLegajo(listaAlumnos,A,100);

                mostrarAlumno(listaAlumnos[index]);

                break;
            case 5:
                retorno = eliminarAlumno(listaAlumnos, A);
                switch(retorno)
                {
                case 0:
                    printf("Se elimino\n");
                    break;

                case 1:
                    printf("Accion cancelada por el usuario\n");
                    break;

                case -1:
                    printf("No se encontro el dato");
                    break;
                }
            }
            system("pause");
            system("cls");
        }
        while(opcion!=5);
    }
    else
    {
        printf("Hubo un error al crear la lista");
    }



    return 0;
}

