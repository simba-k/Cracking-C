struct node {
	node *next;
	int val;
};

void removeDupVals(struct node *head, int val) {
	struct node *prev = NULL;
	struct node *curr = head;
	while(curr) {
		if(curr->val == val) {
			prev->next = curr->next;
			curr = curr->next;
		} else {
			prev = curr;
			curr = curr->next;
		}
	}
}

void removeDup(struct node *head) {
	struct node *curr = head;
	while(curr) {
		removeDupVals(head, curr->val);
		curr = curr->next;
	}
}

int main() {
	node *head;
}
