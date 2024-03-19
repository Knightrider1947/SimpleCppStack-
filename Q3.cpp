#include <iostream>
#include<string>
using namespace std;


class  Stack
{
private:
	string* stackarr;
	int size;
	int top;
public:
	Stack(int);
	void push(string);
	string pop();
	bool isFull() const;
	bool isEmpty() const;
	void display() const;
	Stack();
	~Stack();
};

Stack::Stack(int x)
{
	size = x;
	stackarr = new string[size];
	top = -1;
}

Stack::Stack()
{
	size = 10;
	stackarr = new string[size];
	top = -1;
}

Stack::~Stack()
{
	delete[] stackarr;
}

void Stack::push(string x)
{
	if (!isFull())
	{
		top++;
		stackarr[top] = x;

	}
}

string Stack::pop()
{
	string last;
	last = stackarr[top];
	top--;
	return last;
}

bool Stack::isEmpty() const
{
	if (top == -1)
	{
		return true;
	}
	else
		return false;

}

bool Stack::isFull() const
{
	if (top == size - 1)
	{
		return true;
	}
	else
		return false;
}

void Stack::display() const
{
	for (int i = 0; i <= top; i++)
	{
		cout << stackarr[i] << " " ;
	}
	cout << endl;
}
int main()
{

	
	Stack a(10);
	a.push("Amandeep");
	a.display();
	a.push("Satinder Kaur");
	a.display();
	a.push("CSCI 1020");
	a.display();
	a.push("Komaldeep");
	a.display();
	a.push("Rupinder");
	a.display();
	a.push("Mohammed");
	a.display();

	if (!a.isEmpty())
	{
		string temp;
		temp = a.pop();
		cout << temp << endl;
	}
	a.display();
	a.push("Navdeep");
	a.display();
	if (!a.isEmpty())
	{
		string temp;
		temp = a.pop();
		cout << temp << endl;
	}
	a.display();
	a.push("Robin");
	a.display();
	if (!a.isEmpty())
	{
		string temp;
		temp = a.pop();
		cout << temp << endl;
	}
	a.push("Manjinder singh");
	a.display();
	if (!a.isEmpty())
	{
		string temp;
		temp = a.pop();
		cout << temp << endl;
	}
	return 0;
}