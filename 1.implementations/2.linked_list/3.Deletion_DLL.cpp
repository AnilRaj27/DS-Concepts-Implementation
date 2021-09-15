void deleteNode(Node **head, int x)
{
    //Your code here
    if (x == 0)
        return;
    if (x == 1)
    {
        Node *del = *head;
        *head = (*head)->next;
        (*head)->prev = NULL;
        delete (del);
        return;
    }
    int count = 1;
    Node *temp = *head;
    while (count != x - 1 && temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    //If X > totalNode then simply return
    if (temp->next == NULL && count <= x)
        return;
    Node *del = temp->next;
    temp->next = temp->next->next;
    //below code check for the last node
    if (temp->next != NULL)
        temp->next->prev = temp;
    delete (del);
}
