#include <iostream>
#include <vector>
using namespace std;
int main(){
    int cantAlumnos = 0;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantAlumnos;
    vector<string> apellidos;
    vector<float> notas;
    int totalAprobados = 0;

    for (int i = 0; i < cantAlumnos; i++){
        cout << endl;
        string apellido;
        cout << "Ingrese el apellido del alumno nro " << i + 1 << ": ";
        cin >> apellido;
        apellidos.push_back(apellido);
        float notaAlumno = 0;

        for (int j = 1; j <= 4; j++){
            float notaEjercicio = 0;
            cout << "Ingrese la nota del ejercicio " << j << " del alumno " << i + 1 << ": ";
            cin >> notaEjercicio;
            notaAlumno += notaEjercicio;
        }
        notas.push_back(notaAlumno);

    }

    cout << endl << "Alumnos aprobados:" << endl;
    for (int i = 0; i < cantAlumnos; i++){
        if (notas[i] >= 3){
            cout << apellidos[i] << ": " << notas[i] << endl;
            totalAprobados++;
        }

    }

    cout << "Total de alumnos aprobados: " << totalAprobados << endl;
    cout << endl << "Nota de todos los alumnos:" << endl;
    for (int i = 0; i < cantAlumnos; i++){
        cout << apellidos[i] << ": " << notas[i] << endl;
    }
}
