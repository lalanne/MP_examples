
#include <iostream>

using namespace std;

#define MIN(a, b) ((a)>(b) ? (b):(a))

int main(int argc, const char *argv[]){
    const unsigned int x = 3;
    const unsigned int y = 5;

    cout<<MIN(5,3)<<endl;
    
    return 0;
}
