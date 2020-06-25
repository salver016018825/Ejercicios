// Ejercicios.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
//Implemente el algoritmo de la burbuja de manera que los elementos ordenados queden de mayor a menor.

#include <iostream>

using namespace std;

int main()
{
    /*int numeros[10] = { 9,8,6,7,4,5,2,3,1,10 };

    int temp = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (numeros[j] < numeros[j + 1])
            {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << " " << numeros[i];
    }*/

    //areglo de 5 posiciones para las calificaciones 
    const int totalCalicaciones = 5;
    double calificaciones[totalCalicaciones] = { 0.0, 0.0, 0.0, 0.0, 0.0 };
    double hightNote = 0.0;
    double lowNote;

    //variables para sacar promedio gruipal

    int j = 0;
    //int temp = 0;
    double sumaCalificacionPromedioAlumno = 0.0;
    double promedioGrupo = 0.0;
    double listNotes[10] = { 0,0,0,0,0,0,0,0,0,0 };
    /*double listNotes[3] = { 0,0,0 };*/

    // datos para un solo alumno
    char name[10][20] = {};
    char lastname[10][30] = {};
    /*char name[3][20] = {};
    char lastname[3][30] = {};*/
    double promedioAlumno = 0.0;
    double sumaNotas = 0.0;

    //validacion
    char respuesta = 'n';

    /*enter name and lastname in variable type char */
    cout << "enter data student" << endl;

    for (int i = 0; i < 10; i++)
    {
        do
        {
            cout << "Student " << i + 1 << "\nenter name: ";
            cin >> name[i];
            cout << "enter lastname: ";
            cin >> lastname[i];

            //enter calification from student by input
            cout << "\tenter calification from student " << endl;
            for (int i = 0; i <= 4; i++)
            {
                cout << "\t\tEnter " << " : ";
                cin >> calificaciones[i];
                sumaNotas += calificaciones[i];
                promedioAlumno = sumaNotas / 5;
                //el ultimo posicion es para el promedio del alumno
                if (i == 4)
                {
                    listNotes[j] = promedioAlumno;
                    /*sumaCalificacionPromedioAlumno += listNotes[j];
                    promedioGrupo = sumaCalificacionPromedioAlumno / 20;*/
                    promedioAlumno = 0.0;
                    sumaNotas = 0.0;
                    j++;

                }
            }
            //validar datos correctos
            cout << "Los datos son correctos? S/N: ";
            cin >> respuesta;
            if (respuesta == 'n')
            {
                j = j - 1;
                //double listNotes[20] = {};
                /*sumaCalificacionPromedioAlumno = 0.0;
                promedioGrupo = 0.0;*/

            }
        } while (respuesta != 'y' && respuesta != 'Y' && respuesta != 's' && respuesta != 'S');
    }

    //se ordena notas mayor a menor

    double temp = 0.0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (listNotes[j] < listNotes[j + 1])
            {
                temp = listNotes[j];
                listNotes[j] = listNotes[j + 1];
                listNotes[j + 1] = temp;
            }
        }
    }


    //tomar el promecdio de alumno guardarlo en la lista de promedio alumnos

    cout << "\nlist Students " << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << "\t" << name[i] << " " << lastname[i] << "\t" << listNotes[i] << endl;
        /*sumaCalificacionPromedioAlumno += listNotes[i];
        promedioGrupo = sumaCalificacionPromedioAlumno / 10;*/
    }

    return 0;
}


