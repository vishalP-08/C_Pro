#include<stdint.h>
void main(){
    int num1 , num2 , mult;
    // Taking the input 
    printf("Enter the two numbers to multiply: ");
    scanf("%d%d",&num1,&num2);

    //Storing the resut in mult:
     
     mult =  num1 * num2;
    
    // print the result: 

    printf("The Multiplication Of two numbers is : %d ", mult);

}