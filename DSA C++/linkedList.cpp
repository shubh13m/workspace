#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node * next;

    Node(int val){
        value = val;
        next = nullptr;
    }
};

class LinkedList{
    public:
    Node* head;

    void insertAtFront(int value){
        Node* newNode = new Node(value);
        newNode -> next = head;
        head = newNode;
    }

    int displayHead(){
        if(head==NULL){
            return -1;
        }
        else{
            return head -> value;
        }
    }

    int displayEnd(){
        Node * t = head;
        while(t->next != NULL){
            t = t->next;
        }
        return t->value;
    }
    
    void displayList(){
        cout << "Displaying List : ";
        Node *t = head;
        while(t->next != NULL){
            cout << t->value << " ";
            t = t->next;
        }
        cout << t->value << endl;
    }
};

int main(void){
    LinkedList * list = new LinkedList();
    list -> insertAtFront(3);
    cout << "Head: " << list->displayHead() << endl;
    list -> insertAtFront(2);
    cout << "Head: " << list->displayHead() << endl;
    list -> insertAtFront(1);
    list->displayList();
    cout << "End: " << list->displayEnd() << endl;
    return 0;
}