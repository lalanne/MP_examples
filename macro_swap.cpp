#include <iostream>

using namespace std;

#define SWAP(a, b, type) {type tmp_c ; tmp_c = b; b = a; a = tmp_c; }

int main(int argc, const char *argv[]){
    
    unsigned int x = 3;
    unsigned int y = 5;

    SWAP(x, y, unsigned int);

    cout<<"x: "<<x<<" y: "<<y<<endl;

    return 0;
}



