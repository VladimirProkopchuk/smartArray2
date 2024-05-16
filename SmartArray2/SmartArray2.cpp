#include "smartArray.h"

int main()
{
	smartArray arr(5);
	arr.addElement(1);
	arr.addElement(4);
	arr.addElement(155);

	smartArray new_array(2);
	new_array.addElement(44);
	new_array.addElement(34);

	//arr = new_array;
	arr.copyArray(new_array);
	std::cout << "new first element: " << arr.getElement(0) << " new second element: " << arr.getElement(1) << std::endl;
}
