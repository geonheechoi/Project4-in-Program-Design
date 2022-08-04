#include <stdio.h> 
#include<stdlib.h>

int find_minimum(int *a, int n);
/*
Geonhee Choi project4: This program  describe how many number of parts,number of part types, and show how many compuuter can make  accoridng to the number of parts in storage, 
number of part types also program  figue it out wwhat is validate  number of  parts in storge,number of part type, part_list(code ci of the i-th part in storgae) if any of input 
values are inlvalid, the program prints message and exits. 
*/
 
int main() {
    int i;// makd i-th part variable
    int N; //number of parts in storage 
    printf("Enter number of parts (N): ");
    scanf("%d",&N); //scan N
    if(1>N||N>1000000){    //input validation
        
        printf("Invalid N,Must be in the range [1,1000000]");
        exit(EXIT_FAILURE);
        
    }
    
    int K; // number of part types
    printf("Enter number of part types (K): ");
    scanf("%d",&K);//scan K
    if(1>K||K>10000 ){  //input validation
        printf("Invalid K,Must be in the range [1,10000],");
        exit(EXIT_FAILURE);
    }
 
    
    int a[K]; //make array to store the number of part types  
    i=0; //i=0
    while(i<K){  //count the i-th part type
        a[i]=0;
        i++;
    }
     
    
    printf("Enter Part list:\n");
    for(i=0;i<N;i++){
        int part_list;
        scanf("%d",&part_list);   // scan the part
        if(1>part_list||part_list>1000){ //input validation
            
            printf("Invalid partlist,Part codes must be in the range [1,2]");
            exit(EXIT_FAILURE);
        
        }
       
        a[part_list-1]+=1;  //match the part list and part type 
    }
    
    
    printf("The factory can build %d computer(s)",find_minimum(a,K));//call the find_minimum function
    
    return 0;
}
int find_minimum(int *a, int n) {
    int *p; //make pointer to store the value of minimum
    int min;//make min variable
    min=*a;
    for(p=a+1;p<a+n;p++){   //pointer arithmetic
        if(*p<min) //if minimum find
            min=*p; //store value in pointer
        
    }    
    
   return min;  //return to min 
    
}
