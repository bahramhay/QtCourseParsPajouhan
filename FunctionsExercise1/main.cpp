#include <iostream>

using namespace std;

void circle_calculator(float r,float &surface,float &area){
    surface=2*3.14*r;
    area=3.14*(r*r);
}

int main()
{
    float R;
    float Surface,Area;
    cout<<"enter r: ";
    cin>>R;
    circle_calculator(R,Surface,Area);
    cout<<"surface is : "<<Surface<<endl;
    cout<<"Area is : "<<Area<<endl;
    return 0;
}
