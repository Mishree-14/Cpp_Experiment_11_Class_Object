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


    int volume() {
    int v;
    v = height * width * length;
    
    return v;
    }
};

int main(){
    cuboid cuboid1;
    int vol = cuboid1.volume();
    cout<<"Volume: "<<vol<<endl;
}

# OUTPUT:

Volume: 24
