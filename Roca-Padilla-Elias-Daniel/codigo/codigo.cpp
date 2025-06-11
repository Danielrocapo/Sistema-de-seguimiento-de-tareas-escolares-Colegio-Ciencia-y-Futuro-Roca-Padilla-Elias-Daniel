#include <iostream>
using namespace std;

int main() {
    string tarea1, tarea2, tarea3;
    char res1, res2, res3;
    
    // Ingresar nombres de las tareas
    cout << "Profesor, ingrese 3 tareas:\n";
    cout << "Tarea 1: ";
    cin >> tarea1;
    cout << "Tarea 2: ";
    cin >> tarea2;
    cout << "Tarea 3: ";
    cin >> tarea3;
    
    // Alumno marca tareas completadas
    cout << "\nAlumno, marca con 's' las tareas completadas (cualquier otra tecla para pendiente):\n";
    cout << tarea1 << ": ";
    cin >> res1;
    cout << tarea2 << ": ";
    cin >> res2;
    cout << tarea3 << ": ";
    cin >> res3;
    
    // Mostrar reporte de tareas completadas
    cout << "\n=== REPORTE FINAL ===";
    cout << "\nTareas completadas:\n";
    if(res1 == 's') cout << "- " << tarea1 << endl;
    if(res2 == 's') cout << "- " << tarea2 << endl;
    if(res3 == 's') cout << "- " << tarea3 << endl;
    
    // Mostrar reporte de tareas pendientes
    cout << "\nTareas pendientes:\n";
    if(res1 != 's') cout << "- " << tarea1 << endl;
    if(res2 != 's') cout << "- " << tarea2 << endl;
    if(res3 != 's') cout << "- " << tarea3 << endl;

    return 0;
}