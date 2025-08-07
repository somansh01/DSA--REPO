#include <iostream>
 using namespace std ;
 int main (){
    
    int arr1[5]={1,2,3,4,5};   // int arr
    
    char arr2[3]={'a','b','c'};    // char arr
    
    const char* arr3[3] ={"apple","ball","cat"};   // string literal arr
    
    int arr[3][3]={{1,2,3},{2,3,4},{4,5,6}};          // matrix arr 
    
    
    cout<<"elements of arr1 are:"<<endl;     //arr1 
    for ( int i = 0 ; i<5 ; i++ ){
         cout<< arr1[i] <<endl;
    }
    
    
    cout <<"elements of arr2 are:"<<endl;     // arr 2
    for ( int i = 0 ; i<3 ; i++ ){
         cout<< arr2[i] <<endl;
    }
   
    cout <<"elements of arr3 are:"<<endl;     //arr3
    for ( int i = 0 ; i<3 ; i++ ){
          cout<< arr3[i] <<endl;
    }
      

     cout <<" matrix elements are :"<<endl;    //arr 
    for (int i=0; i<3;i++){
        for (int j=0; j<3;j++){
            cout<< arr[i][j]<<" ";

        }
        cout <<endl;
    }
     

    return 0;
 }