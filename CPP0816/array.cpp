#include <iostream>

using namespace std;

int main() {

	int array[5] = { 9 ,5 , 7, 3, 1 };

	cout << "The array has address: " << array << '\n'; // 변수형태로 주소출력
	cout << "Element 0 has address : " << &array[0] << '\n'; // 배열 0번지 형태로 주소출력
	cout << *array << endl; // will print 9
	// asterisc(*)가 붙는다는 것은 배열에 시작주소에 대응되는 값을 출력한다.
	char name[] = "Jason"; // C style, 동적할당.

	cout << *name << endl;


	//=========================================================
	cout << *array << endl; // print 9
	int* ptr = array;
	cout << *ptr << endl;  // print 9

	//=============================================================
	cout << sizeof(array) << '\n'; // array lenght
	cout << sizeof(ptr) << '\n'; // pointer 길이 (첫번째 칸의 크기만 출력하게됨.)

	return 0;

}