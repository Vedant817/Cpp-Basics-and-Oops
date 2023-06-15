#include <iostream>
using namespace std;

int main()
{
	try {
		try {
			throw 20;
		}
		catch (int n) {
			cout << "Handle Partially ";
			throw; // Re-throwing an exception		If this is not present then outer catch will not work.
		}
	}
	catch (int n) {
		cout << "Handle remaining ";
	}
	return 0;
}

