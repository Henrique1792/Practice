#include "list.h"

NODE *createNode(){
    NODE *rt=(NODE *)malloc(sizeof(NODE));
    if(rt==NULL) return NULL;
    rt->nxt=NULL;
    return rt;
}

LIST *createList(){
    LIST *rt=(LIST *)malloc(sizeof(LIST));
    if(rt==NULL) return NULL;
    rt->head->value=HEADER;
    return rt;
}

int appendNode(LIST *tgt, NODE *appendValue){

}

void freeNode(NODE **tgt){
    if(tgt==NULL || *tgt==NULL) return;
    free(*tgt);
    free(tgt);
}
void freeList(LIST **tgt){
   if(tgt==NULL || *tgt==NULL) return;
   NODE *tmp=(*tgt)->head;  
   while(tmp!=NULL){
    
   }
}
