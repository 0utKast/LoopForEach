
#if 0
//VT 108 COD. 001

#include <iostream>
#include <iterator> // std::size

int main()
{
    constexpr int notas[]{ 84, 92, 76, 81, 56 };
    constexpr int numEstudiantes{ std::size(notas) };

    int notaMax{ 0 }; // almacenará la nota más alta
    for (int estudiante{ 0 }; estudiante< numEstudiantes; ++estudiante)
    {
        if (notas[estudiante] > notaMax)
        {
            notaMax = notas[estudiante];
        }
    }

    std::cout << "La mejor nota es: " << notaMax << '\n';

    return 0;
}



//VT 108 COD. 002
#include <iostream>

int main()
{
    constexpr int fibonacci[]{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
    for (int numero : fibonacci) // se itera sobre el array fibonacci
    {
        std::cout << numero << ' '; // accedemos a cada elemento del array con
                                    //esta iteraciónr a través de la variable numero
    }

    std::cout << '\n';

    return 0;
}




// VT 108 COD. 003

#include <iostream>

int main()
{
    constexpr int fibonacci[]{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
    for (auto numero : fibonacci) // tipo es auto, así que numero deducirá su tipo del array fibonacci
    {
        std::cout << numero << ' ';
    }

    std::cout << '\n';

    return 0;
}







// VT 108 COD. 004
#include <iostream>
#include <string>
int main()
{

    std::string array[]{ "juan", "tuvo", "la mejor", "nota" };
    for (auto elemento : array) // elemento será una copia del 
                               // elemento iterado en el array
    {
        std::cout << elemento << ' ';
    }

    std::string array[]{ "juan", "tuvo", "la mejor", "nota" };
    for (auto& elemento : array) //el ampersand convierte elemento 
                                 //en una referencia al elemento iterado 
                                 //evitando tener que hacer copias
    {
        std::cout << elemento << ' ';
    }

    std::string array[]{ "juan", "tuvo", "la mejor", "nota" };
    for (const auto& elemento : array) //elemento es una referencia const 
                                       //al elemento del array iterado
    {
        std::cout << elemento << ' ';
    }

}







// VT 108 COD. 005

#include <iostream>

int main()
{
    constexpr int notas[]{ 84, 92, 76, 81, 56 };
    int notaMax{ 0 }; // irá almacenando la nota más alta

    for (auto nota : notas) // se itera sobre las notas del array, asignando
                            //cada valor por turno a la variable nota
    {
        if (nota > notaMax)
        {
            notaMax = nota;
        }
    }

    std::cout << "La mejor nota es " << notaMax << '\n';

    return 0;
}






// VT 108 COD. 006
#include <iostream>
#include <vector>

int main()
{
    // desde C++17
    std::vector fibonacci{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 }; // observa el uso de std::vector 
                                                                      // en lugar de un array fijo
    // antes de C++17
    // std::vector<int> fibonacci{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

    for (auto number : fibonacci)
    {
        std::cout << number << ' ';
    }

    std::cout << '\n';

    return 0;
}




#include <iostream>

int sumArray (const int array[]) // array es un puntero
{
    int sum{ 0 };     
    
    for (auto numero : array) // error compilación, no conoce 
                              // tamaño del array
    {
        sum += numero;
    }

    return sum;
}

int main()
{
    constexpr int array[]{ 9, 7, 5, 3, 1 };

    std::cout << sumArray(array) << '\n'; // array decae a un puntero aquí

    return 0;
}





#include <iostream>
int main()
{
    //int* array{ new int[5]{ 9, 7, 5, 3, 1 } }; // inicializar un array dinámico desde C++11
    int array [5]{ 9, 7, 5, 3, 1 } ;

    for (auto numero : array)
    {
        std::cout << numero;
    }


}
#endif





#include <iostream>

int main()
{
    std::string nombres[]{ "Juan", "Beatriz", "Carla", "Blanca", "Emilio" }; // Nombres estudiantes
    constexpr int notas[]{ 84, 92, 76, 81, 56 };
    int notaMax{ 0 };

    for (int i{ 0 }; auto nota : notas) // i es el índice del elemento actual
    {
        if (nota > notaMax)
        {
            std::cout << nombres[i] << " supera la mejor nota previa de " << notaMax << " por " << (nota - notaMax) << " puntos\n";
            notaMax = nota;
        }

        ++i;
    }

    std::cout << "La mejor nota final es " << notaMax << '\n';

    return 0;
}

