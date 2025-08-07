#include <iostream >
#include <vector >
 using namespace std ;
  int main (){
    
     int size;
     cout<<"enter size"<<endl;
     cin >> size;

     vector<int> arr;

     cout <<"enter elemnts "<<endl;
     for (int  i =0; i<size; i++){
        int value ; 
        cin>>value ;
        arr.push_back(value);
     }

for (int  i =0; i< arr.size(); i++){
       cout << arr[i]<<" ";
     }

     

  }