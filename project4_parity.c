#include <stdio.h>
/* Geonhee Choi: This program will find odd and even numbers in the array also 
will print out "good,all elements are even  or good,all elements are odd" 
but if the array does not have even or odd elements, which will print the "invalid reason" by flag1 and flag2.
 */ 
void find_parity(int *a,int n,int *all_even,int *all_odd); 
int main() {
    int len;//length of array
    int i;
    int flag1=0; // odd flag
    int flag2=0; // even flag
    
 printf("Enter the length of the array:\n");
    scanf("%d",&len);
    int a1[len]; // array length
    printf("Enter the elements of the array:\n");
    for(i=0;i<len;i++){
        scanf("%d",&a1[i]); //read the element of array
    
    }
    
     
    
      find_parity(a1,len,&flag2,&flag1);//function call
      
    if(flag2==1&&flag1==0){
        printf("Output:good,All elements are even"); // if flag2=1 as even and flag 1=0 as odd,print all even
    }
    else if(flag2==0&&flag1==1){
        printf("Output:good,All elements are odd"); // if flag2=0 as even and flag1 =1 as pdd,print all odd
    }
    else{
        printf("Output:invalid reason"); //otherwise cannot be reason
    }
    
    return 0;
}
void find_parity(int *a,int n,int *all_even,int *all_odd) {
  int ap;
 for(ap=0; ap<n;ap++){ //iterate until n which pass the len parameter
    
    
    if( *(a+ap)%2==0){ // if pointer %2 =0
        
       *all_even=1; // even flag is true
 
    }
    else if( *(a+ap)%2==1) //if pointer %2=1
    {
        
        *all_odd=1; // odd flag is true
        
    }
 
 }
    
}
