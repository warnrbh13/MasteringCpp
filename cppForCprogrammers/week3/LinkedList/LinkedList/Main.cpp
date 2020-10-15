#include "LinkedList.h"

int main() {
	LinkedList L1;
	L1.prepend(90);
	L1.prepend(10);
	L1.prepend(40);
	L1.append(22);
	L1.printLinkedList();
	return 0;
}