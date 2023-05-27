/*  Linked List 
1. The code you provided is a function called constructLL() that takes a vector of integers as input and returns a pointer to a linked list. The function works by first 
creating a new Node object and assigning it to the head pointer. The head pointer is used to keep track of the first node in the linked list. The function then creates 
a temporary Node object and assigns it to the temp pointer. The temp pointer is used to iterate through the linked list. The function then loops through the arr vector,
starting at index 1. For each iteration, the function creates a new Node object and assigns it to the temp->next pointer. The temp->next pointer is used to point to the
next node in the linked list. The function then updates the temp pointer to point to the newly created node.he linked list. The function then updates the temp pointer 
to point to the newly created node.*/
  
  Node* constructLL(vector<int>& arr) {
        // code here
        Node*head=new Node(arr[0]);
        Node *temp=head;
        for(int i=1;i<arr.size();i++)
        {
            temp->next=new Node(arr[i]);
            temp=temp->next;
        }return head;
    }
};

/*2. The function first creates a new Node object. The Node object is a struct that contains two fields: data and next. The data field stores the data of the node, 
and the next field stores the address of the next node in the linked list.The function then sets the data field of the new node to the value of the x argument.
The function then makes the next pointer of the new node point to the current head of the linked list. Finally, the function returns the new node.*/
  
      Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node*m =new Node(x);
       if(head==NULL){
           return m;
       }

// Make the next pointer of the new node point to the current head of the linked list.       

      m->next=head;
      return m;
    }

/* 3.Function to insert a node at the end of the linked list.

  In this code, a new node is created with the given value x. If the linked list is empty (head is NULL), the new node becomes the head. Otherwise, a traversal is
  performed until the last node is reached, and the new node is inserted at the end by updating the next pointer of the last node. Finally, the head of the modified
  linked list is returned.Remember to include the necessary header files and define other required functions or structures outside the insertAtEnd function for the
  code to work correctly.*/

Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node*n=new Node(x);
  
  if(head == NULL){
    return n;
  }

  Node*curr=head;
  while(curr->next!=NULL){
      curr=curr->next;
  }
  curr->next=n;
  return head;
    }
