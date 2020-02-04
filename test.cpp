#include <iostream>

void display()
{
	std::cout<<"from display"<<std::endl;
}

void cleanup()
{
	std::cout<<"in cleanu"<<std::endl;
}

int main()
{
	std::cout<<"hello world"<<std::endl;
	display();
	return 1;
}
