#include <iostream>
#include <cstdlib>      
#include <ctime>       

#define MAX 20

// ***********************************************
// ***********************************************

int main(int argc, char** argv) {

int V[MAX];
float k;

    std::cout << "Endereco onde V esta alocado = " << V << std::endl;
    std::cout << "Tamanho do int = " << sizeof(int) << std::endl;

    std::cout << "Endereco onde k esta alocado = " << &k << std::endl;
    std::cout << "Tamanho do float = " << sizeof(float) << std::endl;

    for (int i = 0; i < MAX; i++) 
        V[i] = i;
               
    std::cout << "Valores gerados!" << std::endl;

    for (int i = 0; i < MAX; i++) {
        std::cout << "V[ " << i << " ] = " << V[i];
        std::cout << " ( " << &V[i] << " )" << std::endl; // endereço de memória onde o V[i] está armazenado
    }

    int *a = V; // *a é uma variável do tipo ponteiro cujo valor armazenado é o endereço de um inteiro                

    std::cout << "Conteudo de a = " << a << std::endl; // a irá guardar como conteúdo o endereço onde V está
    std::cout << "Conteudo apontado por a = " << *a << std::endl; // imprime conteúdo do endereço que está armazenado em a
    std::cout << "Endereco de a = " << &a << std::endl; // imprime endereço alocado para a

    for (int i = 0; i < MAX; i++, a++) {
        std::cout << "V[ " << i << " ] = " << *a;
        std::cout << " ( " << a << " )"; // endereço de memória onde o V[i] está armazenado
        std::cout << " { " << &a << " }" << std::endl; // endereço de a
    }

    return 0;
}
