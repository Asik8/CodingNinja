/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{
    Node * head = NULL;
    Node * tail = NULL;
    int s = 0;
public:
    Stack()
    {
    }

    int getSize()
    {
        return s;
    }

    bool isEmpty()
    {
        if(s > 0) return false;
        else return true;
    }

    void push(int data)
    {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        s++;
    }

    void pop()
    {
        if(head == NULL) return;
        Node *tmp = head;
        head = head->next;
        delete tmp;
        s--;
    }

    int getTop()
    {
        if(head == NULL) return -1;
        return head->data;
    }
};