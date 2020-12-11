#include <cstdlib>
#include <iostream>

#include "csv.hpp"

using namespace std;

int main(int argc, char** argv) {
    csv* dataDengue = new csv("prototipoChikito.csv", true);
    
    return 0;
}

