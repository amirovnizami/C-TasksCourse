#include<iostream>
using namespace std;

class Node {
public:
	string data;
	Node* next;

	Node() :data(), next() {};
	Node(string data) :data(data), next() {};
};

class SingleLinkedList {
	Node* head;
public:

	SingleLinkedList() :head() {};

	//FUNCTIONS
	void AddEnd(const string& data) {

		Node* newNode = new Node(data);
		if (head == nullptr) {
			head = newNode;
			return;
		}
		auto temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
	}

	void AddEnd(const Node& data) {
		Node* newNode = new Node(data.data);
		auto temp = head;
		if (head == nullptr) {
			head = newNode;
			return;
		}
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
	}

	void AddBegin(const string& data) {
		Node* newNode = new Node(data);
		if (head == nullptr) {
			head = newNode;
			return;
		}
		newNode->next = head;
		head = newNode;
	}
	void AddBegin(const Node& data) {
		Node* newNode = new Node(data.data);
		if (head == nullptr) {
			head = newNode;
			return;
		}
		newNode->next = head;
		head = newNode;
	}

	void AddBefore(const string& x, const string& data) {
		Node* newNode = new Node(data);
		if (head == nullptr || head->data ==x) {
			newNode->next = head;
			head = newNode;
			return;
		}
		Node* temp = head;
		while (temp->next != NULL && temp->next->data != x) {
			temp = temp->next;
		}
		if (temp->next == nullptr) {
			cout << "Couldn't find that name!" << endl;
			return;
		}
		newNode->next = temp->next;
		temp->next = newNode;
		
	}
	void AddAfter(const string& x, const string& data) {
		Node* newNode = new Node(data);
		if (head->data == x || head == nullptr) {
			newNode->next = head;
			head = newNode;
			return;
		}
		Node* temp = head;
		while (temp->next != NULL && temp->data != x) {
			temp = temp->next;
		}
		if (temp->next == nullptr) {
			cout << "Couldn't find that name!";
			return ;
		}
		newNode->next = temp->next;
		temp->next = newNode;
		
	}
	void DeleteBegin() {
		
		if (head == nullptr) {
			cout << "Linked list is empty!"<<endl;
			return;
		}
		Node* temp = head->next;
		delete head;
		head = nullptr;
		head = temp;
	}
	void DeleteEnd() {
		if (head == nullptr) {
			cout << "Linked list is empty!" << endl;
			return;
		}
		if (head->next == nullptr) {
			delete head;
			head = nullptr;
			return;
		}
		Node* temp = head;
		while (temp->next->next != NULL) {
			temp = temp->next;
		}
		temp->next = NULL;
	}
	void DeleteByValue(const string& data) {
		Node* temp = head;
		if (head == nullptr && head->data == data) {
			head = head->next;
			delete head;
			return;
		}
		while (temp->next != NULL && temp->next->data != data) {
			temp = temp->next;
		}
		Node* deletedNode = temp->next;
		temp->next = deletedNode->next;
		delete deletedNode;
	}
	void print() {
		auto temp = head;
		while (temp != NULL) {
			cout << temp->data << endl;
			temp = temp->next;
		}
	}
};

void main() {

	Node n1("Fazil");

	SingleLinkedList list;
	list.AddEnd("Nizami");
	list.AddEnd("Revan");
	list.AddEnd("Addil");
	list.AddEnd("Aqil");
	list.AddEnd("Tahir");
	/*list.AddBegin("Mahir");
	list.AddBegin(n1)*/;
	//list.AddBefore("Revan", "Cayil");
	/*list.DeleteEnd();*/
	list.DeleteByValue("Addil");
	list.print();


}	