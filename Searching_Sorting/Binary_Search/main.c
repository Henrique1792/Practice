#include "binary.h"




int main(int argc, char *argv[]){
    int vector[]={10,17,4,33,1,5}, size=6;
    int target=33; 
    
    printf("Found %d: %d\n", target, binSearch(vector,0,33,size));


    
    return 0;
}
