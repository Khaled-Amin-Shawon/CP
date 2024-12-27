class DoublyLinkedList {
    // existing code

    void swap(int i, int j) {
        Node *temp1 = head, *temp2 = head;
        for (int k = 0; k < i-1; k++)
            temp1 = temp1->next;
        for (int k = 0; k < j-1; k++)
            temp2 = temp2->next;
        int t = temp1->data;
        temp1->data = temp2->data;
        temp2->data = t;
    }

    void deleteZero() {
        Node *a = head;
        while (a != NULL) {
            if (a->data == 0) {
                if (a == head) {
                    head = a->next;
                    a->next->prev = NULL;
                }
                else if (a == tail) {
                    tail = a->prev;
                    a->prev->next = NULL;
                }
                else {
                    a->prev->next = a->next;
                    a->next->prev = a->prev;
                }
                delete a;
            }
            a = a->next;
        }
    }
};