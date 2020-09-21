#include <iostream>
#define LOG(x) std::cout << x << std::endl

static std::string str;
/*Code for static in scope/lifetime context*/

void increment() {
	static int i = 0;
	++i;
	LOG(i);
}


/*Code for static in classes context*/
typedef struct Entity {
	static int x, y;

	void Print(){
		std::cout << x <<", " <<y << std::endl;
	}

	static void PrintNoObj(std::string val) {
		std::cout << "ValueNoObj: " << val << std::endl;
	}

	static void PrintNoObj(int val) {
		std::cout << "ValueNoObj: " << val << std::endl;
	}

}Entity_t;

int Entity::x;
int Entity::y;

int main() {

	LOG(str);
	LOG("[CLASSES]");
	Entity_t e;
	Entity_t e1;

	e.x = 22;
	e.y = 33;

	e.Print();
	e1.Print();
	
	Entity_t::PrintNoObj(e.x);
	e.Entity_t::Print();


	LOG("[LIFETIME/SCOPE]");

	increment();
	increment();
	increment();
	increment();
	increment();

	std::cin.get();
}