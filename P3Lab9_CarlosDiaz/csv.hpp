#ifndef CSV_HPP
#define CSV_HPP

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;
using std::setfill;
using std::left;

#include <string>           //librería estándar de las cadenas
using std::string;
using std::to_string;

#include <vector>           //librería estándar de los vectores
using std::vector;

#include <fstream>
using std::ifstream;
using std::ofstream;

class csv {
public:
    csv(){                                                          //constructor vacío
//        this->file_name=NULL;
//        this->data=NULL;
//        this->headers=NULL;
    }
    
    csv(string file_name){
        this->file_name = file_name;
//        this->headers=NULL;
        
        load_file(false);
    }
    
    csv(string file_name, bool header){
        this->file_name = file_name;
        
        load_file(header);
    }
    
    virtual ~csv(){
        
    }
    
    void load_file(bool header){
        
    }
    
    vector< vector<string> > sort_data(int column, bool up){        //si up es true se hace ascendentemente, de lo contrario lo ordena de manera descendente
        vector< vector<string> > dataSorted;
        for(int i=0; i<data.size(); i++){
            
            
        }
        
        return dataSorted;
    }
    
    vector<string> getColumn(int columnIndex){
        vector<string> columnaRetornar;
        for(int i=0; i<data.size(); i++){
            columnaRetornar.push_back(data.at(i).at(columnIndex));
        }
        
        return columnaRetornar;
    }
    
    vector<string> getRow(int rowIndex){
        vector<string> filaRetornar;
        
//      filaRetornar = data.at(rowIndex);                           //iguala los vectores
        
        for(int i=0; i<data.at(rowIndex).size(); i++){
            filaRetornar.push_back(data.at(rowIndex).at(i));
        }
        return filaRetornar;
    }
    
    vector<string> getMax(int columnIndex){
        vector<string> rowMax;
        return rowMax;
    }
    
    vector<string> getMin(int columnIndex){
        vector<string> rowMin;
        return rowMin;
    }
    
    void printData(){
        int MAXWIDTH=0;
        
        if(headers.size()==0){
            MAXWIDTH = headers[0].length()+3;
            for(int i=0; i<headers.size(); i++){
                cout << left << setw(MAXWIDTH) << setfill(' ') << headers[i];
            }
            cout << " " << endl;                                    //salto de linea entre filas
        } else
            MAXWIDTH = (data.at(0).at(0)).length()+3;
        
        if(data.size()==0){
            for(int i=0; i<data.size(); i++){
                for(int j=0; j<data.size(); j++){
                    cout << left << setw(MAXWIDTH) << setfill(' ') << data.at(i).at(j);
                }
                cout << " " << endl;                                //salto de linea entre filas
            }
            cout << " " << endl;                                    //salto estético
        }
    }
    
    
    
    //GETS Y SETS
    string getFile_name(){
        return this->file_name;
    }
    
    void setFile_name(string nuevoNombre){
        this->file_name = nuevoNombre;
    }
    
    vector<string> getHeaders(){
        if(headers.size()==0){
            return this->headers;
        } else {
            cout << "No tiene headers" << endl;
        }
    }
    
    int getData_count(){
        return this->data_count;
    }
    
private:
    string file_name;
    vector<string> headers;
    vector< vector<string> > data;
    int data_count;
};

#endif /* CSV_HPP */

