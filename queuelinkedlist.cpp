
#include<iostream>
using namespace std;

class node
{
    public:
      int info;
      node*next;

      node(int data)
      {
        info=data;
        next=NULL;
      }
};
node *front, *rear;
bool isempty()
{
    return front=NULL;
}
void traverse()
{
    if (front==NULL)
    {
        cout<<"empty queue";
        return;
    }
    node*temp=front;
    while(temp!=NULL)
    {
        cout<<temp->info<<" "<<endl;
        temp=temp->next;

    }
    cout<<endl;
    cout<<"front= "<<front->info<<", rear = "<<rear->info<<endl;
}
void enqueue(int info)
{
    node*newnode= new node (info);
    if(front == NULL)
    {
        front =newnode;
        rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear = newnode;

    }
}
int dequeue()
{
        int info;
        if(front==NULL)
        {
            cout<<"queue is empty"<<endl;
            return -1;
        }
        info=front->info;
        node*temp=front;
        if(front==rear)
             front=rear=NULL;
        else
           front=front->next;
    delete temp;
    return info;


}
int main()
{
    front=rear=NULL;
    if(isempty())

    cout<<"queue is initially empty"<<endl;
    enqueue(5);
    enqueue(10);
    enqueue(15);
    cout<<"queue element: ";
    traverse();
    cout<<"dequeued: "<<dequeue()<<endl;
    cout<<"queue after dequeue: ";
    traverse();
    return 0;

}