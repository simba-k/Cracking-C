node *add(node *head1, node *head2) {
	static node *head;
	int lowest = 1;
	if(head1->next != NULL) {
		node *nxt1 = head1->next;
		lowest = 0;
	}
	if(head2->next != NULL) {
		node *nxt2 = head2->next;
		lowest = 0;
	}
	if(!lowest) {
		node *curr = add(nxt1, nxt2);
	}
	curr->next = newNode(head1->val + head2->val);
	curr = curr->next;
	return curr;
}

node *
