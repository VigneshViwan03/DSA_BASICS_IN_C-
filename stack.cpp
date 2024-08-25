/* stack operations 
1. push() 
2. pop() 
3. isEmpty() 
4. isfull() 
5. peek() 
6. count() 
7. change() 
8. display() 
*/
#include<iostream> 
#include<string> 

using namespace std; 

class Stack { 
private:
  int top;
  int arr[5];  
public:
  Stack()
  { 
    top = -1 ; 
    for (int i= 0; i<5; i++) 
    { 
      arr[i]=0; 
    }
  }

  bool isEmpty()
{
  if(top==-1)
    return true;
  else 
    return false;
}

bool isFull()
{
  if(top==4)
    return true;
  else 
    return false;
} 

//Pushing an element into an array
void push(int val) 
{ 
  if (isFull()) 
{ 
cout<<"stack overflow"<<end1; 
} 
else { 
top++; 
arr[top]=val; 
} 
} 

int pop() 
{ 
  if (isEmpty()) 
{ 
    cout<<"stack underflow"<<end1; 
    return 0; 
} 
  else 
{
    int popValue = arr[top]; 
    arr[top]=0; 
    top--; 
    return popValue ;
}




























  
