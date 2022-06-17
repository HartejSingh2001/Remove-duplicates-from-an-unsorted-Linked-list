 Node * removeDuplicates( Node *head) 
    {
     unordered_map<int,int>mp;
     Node*ptr=head;
     Node*ptr1=head->next;
     int flag=0;
     while(ptr1!=NULL)
     {
         mp[ptr1->data]++;
         mp[ptr->data]++;
         if(mp[ptr1->data]>1)
         {
             ptr->next=ptr1->next;
             ptr1=ptr1->next;
             flag=1;
         }
         if(flag!=1)
         {
         ptr1=ptr1->next;
         ptr=ptr->next;
         }
         flag=0;
     }
     return head;
    }
