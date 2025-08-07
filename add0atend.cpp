#include <iostream>
#include <vector>
using namespace std ;
 int main (){
    int size ;
    cout <<"size"<<endl;
    cin>>size ;

    vector<int > arr;
    
    cout <<"enter elemnt "<<endl;
 for (int i=0;i<size ;i++){
    int value ;
    cin>>value ;
    arr.push_back(value ); 
 }
   
    vector <int> temp ;
    for(int i =0;i<size;i++ ){
        if (arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    int n = temp.size();
    for (int i =0; i<n ;i++){
        arr[i]=temp[i];
    }
    
    for (int i=n;i<size ;i++){
        arr[i]=0;

    }
    for (int i=0; i<size ; i++){
        cout<<arr[i]<<" ";
    }




    }
 