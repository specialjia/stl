#include <iostream>
#include <array>


int main()
{
	std::array<int, 5> myarray = { 2,16,77,34,50 };
	std::cout << "myarray contains:";
	for(auto it = myarray.rbegin(); it != myarray.rend(); ++it)
	{
		std::cout << ' ' << *it;
	}
	std::cout << '\n';
	for (int& x : myarray) std::cout << ' ' << x;
	std::cout << std::endl;
	myarray.fill(0);
	for (int& x : myarray) std::cout << ' ' << x;
	std::cout << std::endl;
	return 0;
}