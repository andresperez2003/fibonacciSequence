#include <iostream>
#include<vector>

using namespace std;

//Declaracion de 
int fibonnaci(int x);
void sequenceFibonnaci(int number);

int main()
{
	//Declaration of variable
   int userNumber;

   
   //Input to execute fibonacci method
   cout<<"Ingrese un numero"<<endl;
   cin>>userNumber;
   
   //Call the function
   sequenceFibonnaci(userNumber);
   
}

//Method fibonacci
int fibonnaci(int x){
    if(x==0){
        return 0;
    }
    if(x==1){
        return 1;
    }
    return fibonnaci(x-2)+ fibonnaci(x-1);
}

//Show the secuence from 0 to number of the input
void sequenceFibonnaci(int number){   
   for(int i=0; i<number; i++){
       cout<<fibonnaci(i)<<",";
   }
}






