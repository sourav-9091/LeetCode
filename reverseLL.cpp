#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

Node* reverse (Node* head){

    if (head == NULL) return head;
    if (head->next == NULL) return head;
    Node* prev = NULL;
    Node* current = head;
    Node* temp = head->next;

    while(temp != NULL){
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
        temp = temp->next;
    }

    current->next = prev;


    return current;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		Node *head2 = reverse(head);
		print(head2);
	}
	return 0;
}