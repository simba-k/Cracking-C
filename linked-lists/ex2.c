struct node {
	node *next;
	int val;
};

struct node * nthToLast(struct node *head, int n) {
	struct node *curr = head;
	struct node *nPrev;

	for(int i = 0; curr && i < n; i++) {
		if(!curr) {
			exit(-1);
		}
		curr = curr->next;
	}
	nPrev = head;
	for(;;) {
		curr = curr->next;
		if(curr) {
			nPrev = nPrev->next;
		} else {
			break;
		}
	}
	return nPrev;
}
