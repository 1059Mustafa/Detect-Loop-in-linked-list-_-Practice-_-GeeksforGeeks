bool detectLoop(Node* head)
{
    struct Node *slow=head;
    struct Node *fast=head;
    while(slow&&fast&&fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return true;
        }
    }
    return false;
    
}

