#include "linkedListFuncs.h"
#include "moreLinkedListFuncs.h"
#include "tddFuncs.h"
#include <iostream>
using namespace std;

int main() {

  Node *p;
  int threeNums[3]={42,57,61};
  LinkedList *list = arrayToLinkedList(threeNums,3);
  ASSERT_EQUALS( "[42]->[57]->[61]->null", linkedListToString(list));


  cout << "Testing deleteNodeInteratively" << endl;
  ASSERT_TRUE(p==NULL);
  deleteNodeInteratively(list);
  ASSERT_TRUE(list->head->data==NULL);
 //Recursively
    
  LinkedList *list2 = arrayToLinkedList(threeNums,3);

  cout << "Testing deleteNodeRecursively" << endl;
  deleteNodeRecursively(list2);

  cout << list2->head->data<< endl;
  ASSERT_TRUE(list2->head->data==NULL);//couldnot understand whynotpass
  int  x = list2->head->data;
  ASSERT_TRUE(x==NULL);//couldnot understand whynotpass
  return 0;
}

