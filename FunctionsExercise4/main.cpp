#include <iostream>

using namespace std;

int ArraySum(int* pointerToArray){
    int sum=0;
    for (int i=0;i<10;i++) {
        sum += pointerToArray[i];
    }
    return  sum;
}

int main()
{
    int A[10];
    int i=0;
    while(i<10){
        cout<< "enter array element:"<< endl;
        cin>>A[i];
        ++i;
    }

    cout<< "array content is:"<< endl;
    for (i=0;i<10;i++) {
        cout<<A[i]<<" ";
    }
    cout<< endl;

    cout<<"Sum of array elements is: "<<ArraySum(A)<<endl;

    return 0;
}
