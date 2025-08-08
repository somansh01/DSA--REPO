#include <iostream >
#include <vector>
using namespace std ;
  int main (){
    int size ;
     cout <<"size "<<endl;
     cin>>size ;
     vector <int> arr;
    cout << "enter the elements :"<<endl;
      for (int i=0;i<size ;i++){
        int value ;
        cin>> value ;
        arr.push_back(value );


      } 
      cout << "array is :"<<endl;
      for (int i=0 ; i<size ; i++){
        cout <<arr[i]<<" ";
      }  cout<< endl;
     int n;
     cout << "enter  the no: "<<endl;
     cin >>n;
       for (int i =0; i<size ;i++){
        if (arr[i]==n){
            cout <<"no is at index:"<<i;
            return 0;
        }
       
       }
       cout <<"not found "<<endl;


       
  }