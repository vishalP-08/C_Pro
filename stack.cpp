#include<iostream>
using namespace std;
        int stack[5];
        int size = 5 ;
        int  top = -1 ;
int push(int data){
        
        if(top>=size-1){
            cout<<"Stack is full Data can't be inserted"<<endl;
        }else {
                top++;
                stack[top]=data;
        }

         }

void  display(){
        if(top>0){
       for(int i = top; i>=0; i-- ){
        cout<<stack[i]<<" ";
       }
        }
}         

int main (){
        
        
        
        int var ;

         cout<<"Enter the elemets to add the data to the stack: "<<endl ;
         cin>>var;

         push(var);
         display();
 return 0;
}