#include <iostream>
#include <bits/stdc++.h>
#define MAXSTK 100
using namespace std;


int top = -1, stake[MAXSTK];

void push(int *item)
{
    if(top == MAXSTK - 1){
       cout<< "Over Flow"<<endl;
    }
    else{
        top++;
        stake[top] = *item;
    }
}

void pop()
{
    if(top == -1){
        cout<<"Under flow."<<endl;
    }
    else{
      cout<<"The pop item is. "<<stake[top]<<endl;
      top--;
    }
}

void display()
{
    if(top >= 0){
       cout<<"Stack Element is ";
         for(int i = top; i >= 0; i--)
          cout<<stake[i]<<" ";
       cout<<endl;
    }
    else{
       cout<< "Stack is Epmty"<<endl;
    }
}

int main()
{
    int item, n;
    cout<<"1. push. "<<endl;
    cout<<"2. pop. "<<endl;
    cout<<"3. display. "<<endl;
    cout<<"4. exit. "<<endl;

    do
    {
         cout<<"Enter your choice : ";
         cin>>n;
        switch(n)
        {
        case 1:
            cout<<"Enter the item you want to push :";
            cin>>item;
            push(&item);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            cout<<"Exit."<<endl;
            break;

        default:
            cout<<"Error!! try again."<<endl;
        }

    }while(n != 4);

    return 0;
}

