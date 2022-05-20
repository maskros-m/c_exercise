#include <iostream>
#include <string>
#include <vector>

using std::cout;

int main() {
	int a_number(3); // an integral value
	double value = 13.7404;
	char sep = '\t';
	std::string name("Alice"); // C++ string
	std::vector<double> numbers(3); // a managed array of doubles
	cout << a_number << sep << value << std::endl;
	cout << name << std::endl;
	for (auto& number : numbers) {
		cout << number << sep; // dereference the iterator
	}
	cout << std::endl;
	return 0;
}