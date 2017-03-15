#include "linkedListFuncs.h"
#include "moreLinkedListFuncs.h"
#include "tddFuncs.h"
#include <iostream>
using namespace std;

int main() {

  Node *p;
  int Nums[5]={42,57,10,11,61};
  LinkedList *list = arrayToLinkedList(Nums,5);
  ASSERT_EQUALS( "[42]->[57]->[10]->[11]->[61]->null", linkedListToString(list));


  cout << "Testing deleteNodeRecursively" << endl;
  ASSERT_TRUE(p==NULL);
  deleteNodeRecursively(list,42);
  ASSERT_EQUALS( "[57]->[10]->[11]->[61]->null", linkedListToString(list)); 


  // Iteratively
  int Nums1[5]={42,57,10,11,61};
  LinkedList *list2 = arrayToLinkedList(Nums1,5);
  ASSERT_EQUALS( "[42]->[57]->[10]->[11]->[61]->null", linkedListToString(list2));
  cout << "Testing deleteNodeIteratively" << endl;
  ASSERT_TRUE(p==NULL);
  deleteNodeIteratively(list2,42);
  ASSERT_EQUALS( "[57]->[10]->[11]->[61]->null", linkedListToString(list2)); 
  deleteNodeIteratively(list2,57);
  ASSERT_EQUALS( "[10]->[11]->[61]->null", linkedListToString(list2));  
  return 0;
}

