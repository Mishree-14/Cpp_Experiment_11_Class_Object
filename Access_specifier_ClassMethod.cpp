//Mishree Kalaria
//24070123052
//Batch: A2

#include <iostream>
using namespace std;
class cuboid {
    private:
    int height = 3;
    int width = 2;
    int length = 4;

    public :
    int volume(){
        int v; 
        v = height*width*length;
        return v
};

int main() {
    cuboid c1;
    int volume = c1.volume();
    cout<<"Volume of the cuboid:"<<volume;
    
    return 0;
}

# OUTPUT: 

Volume of the cuboid: 24


# OUTPUT:

Volume of the cuboid:24
