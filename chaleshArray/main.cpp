#include <iostream>
//#include <bits/stdc++.h>
using namespace std;
//#include <vector>

int main()
{

    int arr[4]={2,3,4,1};
    for(auto i:arr){
        cout<<i;
    }
    cout<<endl;
    int sizev=sizeof (arr)/sizeof (int);

    int pivot=-1;
    for(int i=sizev-1;i>0;i--){
//        cout<<arr[i]<<endl;
        if(arr[i]>arr[i-1]){
            pivot=i-1;
            break;
        }
    }
//    cout<<"Pivote is : "<<pivot<<endl;
    if(pivot>-1){
        int max_min=arr[sizev-1];
        int max_min_index=sizev-1;
        bool max_min_flag=false;
        for(int i=sizev-1;i>pivot;i--){


            if(arr[i]>arr[pivot] && (max_min>arr[i] || max_min_flag==false)){

                max_min=arr[i];
                max_min_index=i;
                max_min_flag=true;
            }

        }
//        cout<<"max_min is : "<<max_min<<endl;
//        cout<<"max_min_index is : "<<max_min_index<<endl;
        arr[max_min_index]=arr[pivot];
        arr[pivot]=max_min;
//        cout<<"Swapped array is: "<<endl;
//        for(auto i:arr){
//            cout<<i;
//        }
//        cout<<endl;

        for(int i=0;i<(((sizev-1)-pivot)/2);i++){

            int temp=arr[pivot+1+i];

            arr[pivot+1+i]=arr[(sizev-1)-i];
            arr[(sizev-1)-i]=temp;
        }

        cout<<"Final: "<<endl;
        for(auto i:arr){
            cout<<i;
        }
        cout<<endl;

    }
    else{
        for(int i=0;i<((sizev-1)/2);i++){

            int temp=arr[i];

            arr[i]=arr[sizev-1-i];
            arr[sizev-1-i]=temp;
        }

        cout<<"Final: "<<endl;
        for(auto i:arr){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}
