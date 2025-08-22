//Mishree Kalaria
//24070123052
//Batch: A2

#include <iostream>
using namespace std;

class cuboid {
    public:
    int height;
    int width;
    int length;

    int volume() {
    int v;
    v = height * width * length;
    
    return v;
    }
    
    void input(){
        cout<<"Enter Height: ";
        cin>>height;
        cout<<"Enter width: ";
        cin>>width;
        cout<<"Enter Length: ";
        cin>>length;
    }
    
    void display(){
        cout<<"\n"<<"Volume of the cuboid: "<<volume();
    }
};

int main(){
    cuboid cuboid1;

    cuboid1.input();
    
    cuboid1.display();
}

# Output:

Enter Height: 3
Enter width: 2
Enter Length: 1

Volume of the cuboid: 6

