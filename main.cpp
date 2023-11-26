// incluyendo librerias
#include <iostream> // input y output
#include <string> // trabajar con strings
#include <vector>

// usando funciones  (de las librerias)
using std::cout; 
using std::cin;
using std::endl;
using std::string;
using std::vector;

// una nueva funcion (hay que llamarla en main para que se ejecute el codigo)
void nuevaFuncion()
{
    cout << "Este texto viene desde otra funcion" << endl;
}

//Funcion main
int main()
{
    // tipos de datos
    char letra = 'a'; // character
    string frase = "Hola mundo"; // texto
    int edad; // enteros
    double gpa = 2.3; // numeros decimales
    bool isMale = true; // true or false
    string div = "---------------------------";

    cout << frase << endl;
    cout << "Introduzca su edad: ";
    cin >> edad;
    cout << "El usuario tiene " << edad << " anos." << endl;

    cout << div << endl;

    // trabajando con strings
    string texto = "hola me llamo Isaac y tengo 19 anios";
    int longitud = texto.length(); // longitud del string (empezando por cero)
    int nombre = texto.find("Isaac", 0); // buscando "Isaac" desde posicion 0
    cout << texto << endl;
    cout << "La longitud del texto anterior es de: " << longitud << endl;
    cout << "El nombre 'Isaac' empieza en la posicion: " << nombre << endl;

    cout << div << endl;

    // trabajando con arreglos y vectores

    // arreglo tamanio fijo, no puedes editarlo al correr el programa (solo acceder a sus elementos)
    int arreglo[] = {2, 4, 6, 8}; // declarando un arrego
    int posDos = arreglo[2]; // posiciones de arreglos
    cout << "Arreglo: ";
    for (int i = 0; i < sizeof(arreglo) / sizeof(arreglo[0]); ++i) // imprimiendo cada elemento con un ciclo
    {
        cout << arreglo[i] << " ";
    }
    cout << "\nLa segunda posicion del arreglo contiene: " << posDos << endl;

    cout << div << endl;

    // vectores, incluyen muchas funciones para editarlos, necesitan libreria <vector>
    vector<int> miVector; // declarando vector vacio
    int nuevoNum;
    miVector.push_back(2);
    miVector.push_back(4); // agregando numeros al final del vector
    miVector.push_back(6);
    cout << "Vector: ";
    for (int i = 0; i < miVector.size(); ++i) // imprimiendo vector
    {
        std::cout << miVector[i] << " ";
    }
    cout << "\nintroduzca un valor que desee agregar al vector: ";
    cin >> nuevoNum;
    cout << "Vector con el nuevo numero: ";
    miVector.push_back(nuevoNum); // agregando un numero que el usuario desee
    for (int i = 0; i < miVector.size(); ++i) // imprimiendo vector modificado
    {
        std::cout << miVector[i] << " ";
    }

    cout << "\n" << div << endl;

    // trabajando con otras funciones
    nuevaFuncion(); // llamando otra funcion
}
