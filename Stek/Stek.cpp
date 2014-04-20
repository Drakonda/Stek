#include <iostream>
#include <windows.h>
using namespace std;
 
class Node
{
public:
    int number;
    Node* last;
};

void russia(const char*);
 
void main()
{
    Node* ptrLast = NULL;
    Node* top = NULL;
    short action = -1;
  setlocale(LC_ALL,"rus");
    while (1)
    {
        cout<<"1. ���������� � ����\n";
        cout<<"2. ���������� �� �����\n";
        cout<<"3. ������� �����\n";
        cout<<"4. ���������� �����\n";
        cout<<"0. �����\n\n";
        cout<<"��� �����: ";
        cin>>action;        
 
        if (action == 0)
        {
            system("CLS");
            break;
        }
 
        if (action == 1)
        {
            system("CLS");
            int numb = -1;          
            cout<<"������� �����: ";
            cin>>numb;
            Node* ptr = new Node;
            ptr->number = numb;         
            if (top == NULL)
            {
                ptr->last = NULL;
                top = ptr;
                ptrLast = ptr;
                system("CLS");
                continue;
            }
            top = ptr;
            ptr->last = ptrLast;
            ptrLast = ptr;
            system("CLS");
            continue;
        }
 
        if (action == 2)
        {
            system("CLS");
            Node* ptrDelete = NULL;
            if (top == NULL)
            {
                cout<<"\t!!! ���� ���� !!!\n\n";
                system("PAUSE");
                system("CLS");
                continue;
            }           
            ptrDelete = top;
            if (ptrDelete->last == NULL)
            {
                top = NULL;
                delete ptrDelete;
                system("CLS");
                continue;
            }
            top = ptrDelete->last;
            ptrLast = top;
            delete ptrDelete;
            continue;
        }
 
        if (action == 3)
        {
            system("CLS");
            if (top == NULL)
            {
                cout<<"\t!!! ���� ���� !!!\n\n";
                system("PAUSE");
                system("CLS");
                continue;
            }
            cout<<"������� �����: ";
            cout<<top->number<<"\n\n";
            system("PAUSE");
            system("CLS");
            continue;
        }
 
        if (action == 4)
        {
            system("CLS");
            Node* ptr = NULL;
            if (top == NULL)
            {
                cout<<"\t!!! ���� ���� !!!\n\n";
                system("PAUSE");
                system("CLS");
                continue;
            }
            cout<<"* * * * * ���������� ����� * * * * *\n\n";
            ptr = top;
            while (1)
            {
                cout<<ptr->number<<endl;
                if (ptr->last == NULL)
                {
                    system("PAUSE");
                    system("CLS");
                    break;
                }
                ptr = ptr->last;
            }
        }
 
        if (action > 4)
        {
            system("CLS");
            cout<<"\t!!! �������� �����. ��������� ���� !!!\n\n";
            system("PAUSE");
            system("CLS");
            continue;
        }
 
    }
}
 
