#include<bits/stdc++.h>
using namespace std;

class node {
public:
int data;
node* next;
node (int val) {
    data = val;
    next = NULL;
}
};

void insertatTail(node* &head, int val) {
    node* n = new node(val);
    if (head == NULL) {
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}


void display(node* head) {
    node* temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertatHead(node* &head, int val) {
    node* n = new node(val);
    n->next = head;
    head = n;
}

bool search(node* head, int key) {
    node* temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteatHead(node* head) {
    node* todelete = head;
    head = head->next;
    delete todelete;
}

void deletion(node* head, int val) {
    if (head == NULL) {
        return;
    }
    if (head->next == NULL) {
        deleteatHead(head);
        return;
    }
    node* temp = head;
    while (temp->next->data != val) {
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

node* reverse(node* &head) {
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    while (currptr != NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

node* reversek(node* &head, int k) {
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    int count = 0;
    while (currptr != NULL && count < k){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }

    if (nextptr != NULL) {
        head->next = reversek(nextptr,k);
    }
    return prevptr;
}

int main() {
    node* head = NULL;
    insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);
    insertatHead(head,5);
    deletion(head,3);
    display(head);
    node* newhead = reverse(head);
    display(newhead);
    int k = 2;
    node* newhead1 = reversek(head,k);
    display(head);
    cout<<search(head,6)<<endl;
}