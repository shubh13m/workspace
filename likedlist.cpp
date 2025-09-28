#include<iostream>
using namespace std;

class Node{
    public:
        int value;
        Node* next;
        
        Node(int x){
            value = x;
            next = NULL;
        }
};

class LinkedList{
    public:
        Node* head = NULL;
        
        void addSorted(int k){
            Node* n = new Node(k);
            Node* pos = head;
            Node* current = head;
            if(head==NULL){
                head = n;
                n->next = NULL;
                return;
            }
            if(k<head->value){
                n->next = head;
                head = n;
                return;
            }
            else{
                while(current!=NULL && current->value < n->value){
                    pos = current;
                    current = current->next;
                }
                if(current==NULL){
                    pos->next = n;
                    n->next = NULL;
                }
                else{
                    n->next = pos->next;
                    pos->next = n;
                }
            }
        }
        
        void show(){
            Node* current = head;
            while(current!=NULL){
                cout << current->value << " ";
                current = current->next;
            }
            cout << endl;
        }
        
        int getMiddle(){
            Node* slow = head;
            Node* fast = head;
            
            while(fast!=NULL && fast->next!=NULL){
                slow = slow->next;
                fast = fast->next->next;
            }
            return slow->value;
        }
        
        int getKfromEnd(int k){
            Node* first = head;
            Node* second = head;
            
            for(int i=1;i<k;i++){
                first = first->next;
            }
            
            while(first->next!=NULL){
                first = first->next;
                second = second->next;
            }
            
            return second->value;
            
        }
        
        void reverseList(){
            Node* current  = head;
            Node* prev = head;
            
            if(prev==head){
                head = current->next;
                current = current->next;
                prev->next = NULL;
            }
            
            while(current != NULL){
                current = current->next;
                head->next = prev;
                prev = head;
                head = current;
            }
            head = prev;
        }
        
        void removeDuplicate(){
            Node* current = head->next;
            Node* prev = head;
            Node* duplicate = NULL;
            while(current!=NULL){
                if(current->value == prev->value){
                    duplicate = current;
                    current = current->next;
                    delete duplicate; 
                }
                else{
                    prev->next = current;
                    prev = current;
                    current = current->next;
                }
            }
            prev->next = NULL;
            
        }
        
        void pairSwap(){
            if(head!=NULL || head->next != NULL){
                Node* first = head;
                Node* second = head->next;
                Node* prev = NULL;
                head = second;
                
                while(second!=NULL && second->next!=NULL){
                    first->next = second->next;
                    second->next = first;
                    if(prev!=NULL){
                        prev->next = second;
                    }
                    prev = first;
                    if(first->next!=NULL && first->next->next!=NULL){
                        first = first->next;
                        second = first->next;
                    }
                    else{
                        break;
                    }
                }
                    second->next = first;
                    first->next = NULL;  
                    prev->next = second;
                
            }
        }
        
};

int main(){
    LinkedList* list = new LinkedList();
    //list->addSorted(4);
    list->addSorted(2);
    list->addSorted(3);
    list->addSorted(0);
    list->addSorted(6);
    list->addSorted(1);
    list->addSorted(7);
    list->addSorted(5);
    list->addSorted(8);
    list->addSorted(-1);
    list->show();
    cout << "Middle: " << list->getMiddle() << endl;
    cout << "4th from end is: " << list->getKfromEnd(4) << endl;
    //list->reverseList();
    list->show();
    list->addSorted(2);
    list->addSorted(3);
    list->addSorted(0);
    list->addSorted(3);
    list->addSorted(0);
    list->addSorted(6);
    list->addSorted(1);
    list->show();
    list->removeDuplicate();
    list->show();
    list->pairSwap();
    list->show();
}



#include <iostream>
using namespace std;

// Node definition
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// Function to create a linked list with a loop
Node* createListWithLoop() {
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    // Linking nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Creating a loop: pointing the next of fifth to second
    third->next = third;  // Loop starts from node with value 2

    return head;
}

void detectLoop(Node* head){
    Node*  current = head;
    Node* temp = new Node(0);
    Node* prev = head;
    
    while(current!=NULL){
        if(current->next == temp){
            cout << "Loop detected" << endl;
            return;
        }
        else{
            current = current->next;
            prev->next = temp;
            prev = current;
        }
    }
    cout << "No Loop detected" << endl;
}

void detectCycle(Node* head){
    Node* fast = head;
    Node* slow = head;
    
    while( fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    
        if(fast==slow){
            cout << "Cycle detected" << endl;
            return;
        }
    }
    cout << "Cycle not detected" << endl;
}


int main() {
    Node* head = createListWithLoop();

    //detectLoop(head);
    
    detectCycle(head);

    return 0;
}