#include <iostream>
#include <string>
#include <vector>

struct Vertex {
	float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex) {
	stream << vertex.x << "," << vertex.y << "," << vertex.z;
	return stream;
}
int main() {

	std::cout << "My Vector example" << std::endl;

	std::vector<Vertex> vertices;
	std::vector<int> vectorTest;
	vertices.push_back({ 1,2,3 });
	vertices.push_back({ 4,5,6 });

	for (int i = 0; i < vertices.size(); ++i)
		std::cout << vertices[i] << std::endl;
	vertices.erase(vertices.begin() + 1);

	std::cout << "Erasing... " << std::endl;

	for (int i = 0; i < vertices.size(); ++i)
		std::cout << vertices[i] << std::endl;

	vectorTest.push_back(1);
	vectorTest.push_back(1);
	vectorTest.push_back(1);
	vectorTest.push_back(1);
	std::cout << "VectorTest size:" << vectorTest.size() << std::endl;
	for (int i: vectorTest) {
		std::cout << vectorTest[i] << std::endl;
	}
	std::cin.get();
	return 0;
}