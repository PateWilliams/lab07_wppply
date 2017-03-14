#include <cassert>
#include "linkedList.h"
#include "linkedListFuncs.h"

int smallestValue(LinkedList *list);
int largestValue(LinkedList *list);
void deleteNodeRecursivelyhelper(Node* p);


Node * pointerToMax(LinkedList *list) {
  assert(list!=NULL);
  assert(list->head != NULL);
  Node *p=new Node;
  int maxNum = largestValue(list);
  for(p=list->head; p!=NULL;p=p->next){
        if(p->data == maxNum)//determine the location
            return p;
  }  

  }

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the smallest value.  
// You may assume list has at least one element
// If more than one element has smallest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head


Node * pointerToMin(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  int minNum = smallestValue(list);
  for(Node* p=list->head; p!=NULL;p=p->next){
        if(p->data == minNum)//determine the location
            return p;
  }  
}

int largestValue(LinkedList *list) {

  assert(list!=NULL);
  assert(list->head != NULL);
  int maxNum = list->head->data;
  for(Node* p=list->head; p!=NULL;p=p->next){
        if(p->data >maxNum)
            maxNum = p->data;//find the max
  }

  return maxNum; 
}

int smallestValue(LinkedList *list) {

  assert(list!=NULL);
  assert(list->head != NULL);
  int minNum = list->head->data;
  for(Node* p=list->head; p!=NULL;p=p->next){
        if(p->data < minNum)
            minNum = p->data;//find the max
  }
  return minNum; 
}

int sum(LinkedList * list) {

  assert(list!=NULL);
  int numSum = 0;
  for(Node* p=list->head; p!=NULL;p=p->next){
        numSum += p->data;     
  }


  return numSum;
  }

void deleteNodeInteratively(LinkedList * list){
    assert(list!=NULL);//check empty
    Node * p;   
    Node * q;
    p = list->head;
    
    while(p!=NULL){
        q = p;
        p = p->next;
        delete q;
    }
   
}

void deleteNodeRecursively(LinkedList* list){
    //delete p;//does not work when delete p directly
    Node *p = list->head;

    if (!p->next){
        delete p;
        return;
    }
    
    else{
        deleteNodeRecursivelyhelper(p->next);
        delete p;
    } 

}

void deleteNodeRecursivelyhelper(Node* p){


    if (!p->next){
        delete p;
        return;
    }
    
    else{
        deleteNodeRecursivelyhelper(p->next);
        delete p;
    } 
}
