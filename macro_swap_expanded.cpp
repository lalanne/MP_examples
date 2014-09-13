#include <iostream>

using namespace std;

#define SWAP(a, b, type) {type tmp_c ; tmp_c = b; b = a; a = tmp_c; } 

int main(int argc, const char *argv[]){
    
    unsigned int x = 3;
    unsigned int y = 5;

    {
        unsigned int tmp_c;
        tmp_c = y;
        y = x;
        a = tmp_c;
    }

    cout<<"x: "<<x<<" y: "<<y<<endl;

    return 0;
}



