#include <iostream>

using namespace std;

void compare(int value,int *b,int sizeB){
//    cout<<*b<<" ,"<<value<<endl;
    for(int i=0;i<sizeB;i++){
        if(*(b+i)==value){
            cout<<*(b+i)<<" ";
        }
    }
}

int main()
{
    int A[]={6,5,2,9,11,15,17};
    int B[]={20,3,7,13,2,8,10,9};
    int sizeb=sizeof (B)/sizeof (int);
    for(auto i:A){
        compare(i,B,sizeb);
    }
    cout<<endl;
    return 0;
}
