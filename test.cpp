#include <iostream>

void display()
{
	std::cout<<"from display"<<std::endl;
}

void cleanup()
{
	std::cout<<"in cleanu"<<std::endl;
}

class testClass
{
	int val;
	testClass()
	{
		val = 0;
	}
};

int main()
{
	std::cout<<"hello world"<<std::endl;
	//call display
	display();
	//call cleanup
	cleanup();
	return 1;
}
