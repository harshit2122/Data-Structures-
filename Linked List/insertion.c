#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    };
    struct node *head;
    
    void beginsert();
    void lastinsert();
    void randominsert();
    void disp();
    
    int main()
    { 
        int choice =0;
        while(choice!=5)
        {
             printf("\nChoose one option from the following list \n");
             printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Display\n5.Exit");
             printf("\nEnter Your Choice \n");
             scanf("\n%d", &choice);
             switch (choice)
             {
                case 1:  
                beginsert();      
                break;  
                case 2:  
                lastinsert();         
                break;  
                case 3:  
                randominsert();       
                break;
                case 4:
                disp();  
                break;
                case 5:
                exit(0);  
                break;
                default:  
                printf("\nPlease enter valid choice"); 
             }
        }
        return 0;
    }
    
    void beginsert()
    {
        struct node *ptr;
        int item;
        ptr=(struct node *)malloc(sizeof(struct node *));
        if(ptr==NULL)
        {
            printf("\nOVERFLOW");
        }
        else
        {
            printf("\nEnter Value \n");
            scanf("%d", &item);
            ptr->data=item;
            ptr->next=head;
            head=ptr;
            printf("\nData Inserted");
        }
    }
    
    void lastinsert()
    {
        struct node *ptr, *temp;
        int item;
        ptr=(struct node *)malloc(sizeof(struct node));
        if(ptr==NULL)
        {
            printf("\nOVERFLOW");
        }
        else
        {
            printf("\nEnter value\n");
            scanf("%d", &item);
            ptr->data=item;
            if(head==NULL)
            {
                ptr->next=NULL;
                head=ptr;
                printf("\nData Inserted");
            }
            else
            {
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=ptr;
                ptr->next=NULL;
                printf("\nData Inserted");
            }
        }
    }
    
    void randominsert()
    {
        struct node *ptr, *temp;
        int i, loc, item;
        ptr=(struct node *)malloc(sizeof(struct node));
        if(ptr==NULL)
        {
            printf("\nOVERFLOW");
        }
        else
        {
            printf("\nEnter value\n");
            scanf("%d", &item);
            printf("\nEnter the location after which you have to insert");
            scanf("%d", &loc);
            temp=head;
            for(i=0;i<loc;i++)
            {
                temp=temp->next;
                if(temp==NULL)
                {
                    printf("\nCan't Insert");
                    return ;
                }
            }
            ptr->next=temp->next;
            temp->next=ptr;
            printf("\nNode Inserted");
        }
    }
    
    void disp()  
    {  
        struct node *ptr;  
        ptr = head;   
        if(ptr == NULL)  
        {  
            printf("Nothing to print");  
        }  
        else  
        {  
            printf("\nprinting values . . . . .\n");   
            while (ptr!=NULL)  
            {  
                printf("\n%d",ptr->data);  
                ptr = ptr -> next;  
            }  
        } 
    }