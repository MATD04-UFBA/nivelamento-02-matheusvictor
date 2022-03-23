#include <iostream>
#include <cstdlib>      
#include <ctime>       

#define MAX 20

// ***********************************************
// ***********************************************

int main(int argc, char** argv) {

int V[MAX],
    numElem=MAX;

    if (argc > 1) 
        numElem = atoi(argv[1]);

    srand ( time(NULL) );

    std::cout << "Gerando " << numElem << " valores aleatorios..." << std::endl;

    for (int i = 0; i < numElem; i++) 
        V[i] = rand() % 100;
               
    std::cout << "Valores gerados!" << std::endl;

    for (int i = 0; i < numElem; i++) {
        std::cout << "V[ " << i << " ] = " << V[i] << std::endl;
        }
    
    return 0;
}
