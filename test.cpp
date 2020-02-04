#include <iostream>

void display()
{
	std::cout<<"from display"<<std::endl;
}

void cleanup()
{
	std::cout<<"in cleanu"<<std::endl;
}

class testt
{
};

int main()
{
	std::cout<<"hello world"<<std::endl;
	display();
	//call cleanup
	cleanup();
	return 1;
}
