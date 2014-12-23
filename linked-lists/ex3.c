void deleteNode(node *delete) {
	node *curr = delete;
	node *prev = NULL;
	if(curr) {
		prev = curr;
		curr = curr->next;
	}
	while(curr) {
		prev->val = curr->val;
		curr = curr->next;
		prev = prev->next;
	}
}
