#include <iostream >
#include <climits >
 using namespace std ;
 int main (){
    int arr []={1,3,5,6,-9,-2,9,8};
    int size =8;
    int smallest= INT_MAX;
    int largest = INT_MIN;


     cout << "smallest no in array is : " <<endl;        // smallest no . M1 
    for (int i=0;i<size;i++){
        if (arr[i]<smallest ){
            smallest= arr[i];
        }

    }  
    cout <<smallest<<endl;
    
    cout << "largest  no. in array is : " <<endl;        //largest no . M1
    for (int  i=0; i<size ;i++){
        if (arr[i]>largest ){
            largest =arr[i];
        }
    }
    cout << largest <<endl;

   cout << "smallest no in array is by M2 : " <<endl;     //smallest M2
    for (int i =0;  i <size ; i++){
       smallest = min(arr[i], smallest );
    }
    cout<<smallest<<endl;

    cout << "largest  no. in array is by M2 : " <<endl;    // largest M2
    for (int i =0;  i <size ; i++){
       largest  = max(arr[i], largest  );
    }
    cout << largest <<endl;
   
    cout << "Second largest  no. in array is  : " <<endl;   //secondlargest 
    int seclargest =INT_MIN;
    for (int i =0; i<size ;i++){
        if ( arr[i] >seclargest && arr[i]< largest ){
            seclargest =arr[i];
        }
    }
    cout <<seclargest <<endl;
     
    

    

 }