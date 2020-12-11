#include <cstdlib>
#include <iostream>

#include "csv.hpp"

using namespace std;

int main(int argc, char** argv) {
    csv* dataDengue = new csv("pruebita.txt", true);
    
    dataDengue->printData();
    
    cout << "ya" << endl;
    cout << "Registro mayor en columna 1: ";
    dataDengue->printVector( dataDengue->getMax(1) );
    cout << "Registro menor en columna 1: ";
    dataDengue->printVector( dataDengue->getMin(1) );
    
    cout << " " << endl;
    
    cout << "Retornar columna 0: ";
    dataDengue->printVector( dataDengue->getColumn(0) );
    cout << "Retornar fila 2: ";
    dataDengue->printVector( dataDengue->getRow(2) );
    
    cout << " " << endl;
    
    cout << "Eliminar fila" << endl;
    dataDengue->truncate_row(1);
    dataDengue->printData();
    
//    dataDengue->truncate_column(1);
//    dataDengue->printData();
    return 0;
}

