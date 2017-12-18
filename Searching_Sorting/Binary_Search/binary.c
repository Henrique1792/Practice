#include "binary.h"
#define MIDDLE(x) x/2 
#define ERROR -1
#define SUCCESS 1 

int binSearch(int *vector, int start,int tgt, int size){
    if(size < 1) return ERROR;
    int aux=MIDDLE(size), res=0;
    if(vector[aux]==tgt) return SUCCESS;
    else{
        res=binSearch(vector, 0, tgt, MIDDLE(size));
        if(res) return SUCCESS;
        res=binSearch(vector, MIDDLE(size)+1,tgt,MIDDLE(size));
        if(res) return SUCCESS;
    }
    return ERROR;
}
