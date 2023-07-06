#include <iostream>
#include <vector>
#include <string>
using namespace std;

void compare(int value,vector<int>* b,int sizeB){

    for(int i=0;i<sizeB;i++){
        if((*b)[i]==value){
            cout<<(*b)[i]<<" ";
        }
    }
}

int main()
{
    vector<int> A;
    vector<int> B;
    while(true){
        cout<< "enter first array elements (if first array ends, type end): "<< endl;
        int input;

        string inputEnd;
        cin>>input;
        if(cin.good()){

            A.push_back(input);
        }
        else if(cin.fail()){
            cin.clear();
            cin>>inputEnd;
            break;
            if(inputEnd=="end"){
                break;
            }
        }

    }
    cout<< "A : ";
    for (auto it = A.begin(); it != A.end(); it++)
            cout <<*it << " ";
    cout<<endl;

    while(true){
        cout<< "enter second array elements (if second array ends, type end): "<< endl;
        int input;

        string inputEnd;
        cin>>input;
        if(cin.good()){

            B.push_back(input);
        }
        else if(cin.fail()){
            cin.clear();
            cin>>inputEnd;
            break;
            if(inputEnd=="end"){
                break;
            }
        }

    }
    cout<< "B : ";
    for (auto it = B.begin(); it != B.end(); it++)
            cout <<*it << " ";
    cout<<endl;


    int sizeb=B.size();

    for(auto i:A){

        compare(i,&B,sizeb);
    }
    cout<<endl;
    return 0;
}
