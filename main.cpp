#include <iostream>
#include "LinkedList.h"

using namespace std;


class LinkedList{
public:
    Node* head;
};

LinkedList* insert(LinkedList* list, int data){
        Node* temp = new Node(data);
        if(list->head==nullptr){
            list->head = temp;
        }else{
            Node* last = list->head;
            while(last->next!=nullptr){
                last = last->next;
            }
            last->next = temp;
        }
        return list;
    }

LinkedList* push_first(LinkedList* list, int data){
    Node* newNode = new Node(data);
    newNode->next = list->head;
    list->head = newNode;
    return list;
}

bool isEmpty(LinkedList* list){
    if(list->head==NULL)
        return true;
    return false;
}

bool search(LinkedList* list, int data){
    Node* temp = list->head;
    while(temp!=nullptr){
        if(data==temp->data){
            return true;
        }
        temp = temp->next;
    }
    return false;
}


 void showLinkedList(LinkedList* list){
        Node* temp = list->head;
        while(temp!=nullptr){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }

int main(){
    LinkedList* list = new LinkedList();
    list = insert(list,3);
    list = insert(list,1);
    list = insert(list,5);
    list = insert(list,7);
    list = push_first(list, 0);
    list = push_first(list, 0);
    return 0;
}
