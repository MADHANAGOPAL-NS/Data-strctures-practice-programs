#include<iostream>
#include<string>
using namespace std;
class node
{
    public:
  string data;
    int data1;
    node* next;
};
void create_node(node*& head)
{
    int id;
    string name;
    cout<<"Enter name of the student:";
    cin>>name;
    cout<<"Enter the id of the student:";
    cin>>id;
    if(head==NULL)
    {
        head=new node();
        head->data=name;
        head->data1=id;
        head->next=NULL;
    }
    else
    {
        node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new node();
        temp->next->data=name;
        temp->next->data1=id;
        temp->next->next=NULL;
    }
}
void display(node* head)
{
    node* var=head;
    while(var!=NULL)
    {
    cout<<"Name is:"<<var->data<<" "<<endl<<"ID is:"<<var->data1<<endl;
        var=var->next;
    }
}
int main()
{
    node* head=NULL;
    int nodes;
    cout<<"Enter number of members:";
    cin>>nodes;
    for(int i=1;i<=nodes;i++)
    {
        create_node(head);
    }
    display(head);
}
