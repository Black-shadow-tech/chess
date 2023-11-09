#include<iostream>
#include<conio.h>

using namespace std;

char tablero[8][8]; //queria declararle mi amor pero a ella le gustaban los string y solo me se la de char :(

void InicializarTablero() {
    for (int fila = 0; fila < 8; fila++) {
        for (int columna = 0; columna < 8; columna++) {
            tablero[fila][columna] = ' ';
        }
    }

    // Configura las piezas en su posición inicial
    char piezas[] = {'t', 'c', 'a', 'r', 'q', 'a', 'c', 't'}; 
    
    for (int columna = 0; columna < 8; columna++){ // recorre la columnas desde 0 a 7
        tablero[0][columna] = piezas[columna]; //colocando las piezas en la parte posterior del tablero
        tablero[1][columna] = 'p'; //coloca las piezas en la segunta linea

        tablero[7][columna] = toupper(piezas[columna]);//colocando las piezas en la parte inferior del tablero, Las letras en el arreglo piezas se convierten a mayúsculas utilizando la función toupper.
        tablero[6][columna] = 'P'; //esto pone los peones blancos en la sexta linea
    }
}

void MostrarTablero(){
	cout << "    [a][b][c][d][e][f][g][h]" << endl;
    cout << "    ------------------------" << endl;
    for (int fila = 0; fila < 8; fila++) {
        cout<< "{"<< 8 - fila << "} ";
        for (int columna = 0; columna < 8; columna++) {
            cout<<"[" << tablero[fila][columna] << "]";
        }
        cout << " {" << 8 - fila<<"}"<<endl;
    }
    cout << "     -----------------------" << endl;
    cout << "    [a][b][c][d][e][f][g][h]" << endl;
}


int main() {
    InicializarTablero();
    MostrarTablero();
	
	getch(); 
    return 0;
}
