#include <iostream>

using namespace std;

int main() {

	int array[5] = { 9 ,5 , 7, 3, 1 };

	cout << "The array has address: " << array << '\n'; // �������·� �ּ����
	cout << "Element 0 has address : " << &array[0] << '\n'; // �迭 0���� ���·� �ּ����
	cout << *array << endl; // will print 9
	// asterisc(*)�� �ٴ´ٴ� ���� �迭�� �����ּҿ� �����Ǵ� ���� ����Ѵ�.
	char name[] = "Jason"; // C style, �����Ҵ�.

	cout << *name << endl;


	//=========================================================
	cout << *array << endl; // print 9
	int* ptr = array;
	cout << *ptr << endl;  // print 9

	//=============================================================
	cout << sizeof(array) << '\n'; // array lenght
	cout << sizeof(ptr) << '\n'; // pointer ���� (ù��° ĭ�� ũ�⸸ ����ϰԵ�.)

	return 0;

}