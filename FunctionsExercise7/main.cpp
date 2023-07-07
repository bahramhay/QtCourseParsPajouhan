#include <iostream>
#include <string>
#include <vector>

using namespace std;

int fibonacci(int number){
    int calculate;
    if(number==1){
        calculate=1;
    }
    else if(number==2){
        calculate=2;
    }
    else{
        calculate = fibonacci(number-1)+fibonacci(number-2);
    }

    return (calculate);
}

int main()
{
    vector<int> v;
    vector<string> ch;
    int iNumber;
    cout<<"Enter the i number: "<<endl;
    cin>>iNumber;
    for (int i=1;i<=iNumber;i++) {
        v.push_back(fibonacci(i));
    }

    cout<<"vector content is: "<<endl;
    for (auto i:v) {
        cout<<i<<" ";
    }
    cout<<endl;

    int vectorSize=int(v.size());
    cout<<"vectorSize: "<<vectorSize<<endl;

    for (int i=1;i<=iNumber;i++) {
        bool flag=false;
        for (int j=0;j<int(v.size());j++) {
            if(i==v[j]){
//                cout<<i<<" ";
                ch.push_back("+");
                flag=true;
            }

        }
        if(flag==false)
            ch.push_back("-");
    }
//    cout<<endl;

    cout<<"result content is: "<<endl;
    for (auto i:ch) {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}
