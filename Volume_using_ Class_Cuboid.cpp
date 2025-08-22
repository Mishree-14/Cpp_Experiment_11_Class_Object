//Mishree Kalaria
//24070123052
//Batch: A2

#include <iostream>
using namespace std;
class cuboid {
    public:
    int height = 3;
    int width = 2;
    int length = 4;
};

int main() {
    cuboid c1;
    int volume = c1.height * c1.width * c1.length;
    cout<<"Volume of the cuboid:"<<volume;
    
    return 0;
}

# OUTPUT:

Volume of the cuboid:24
