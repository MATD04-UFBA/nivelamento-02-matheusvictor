#include <iostream>
#include <cstdlib>      
#include <ctime>       

#define MAX 20

// ***********************************************
// ***********************************************

int main(int argc, char** argv) {

int V[MAX];

    std::cout << "Endereco onde V esta alocado = " << V << std::endl;

    for (int i = 0; i < MAX; i++) 
        V[i] = i;
               
    std::cout << "Valores gerados!" << std::endl;

    for (int i = 0; i < MAX; i++) {
        std::cout << "V[ " << i << " ] = " << V[i];
        std::cout << " ( " << &V[i] << " )" << std::endl;
        }

    return 0;
}
