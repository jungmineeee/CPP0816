
/*
#include <iostream>
#include <string.h>

using namespace std;

char* MakeStr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);
	//c++에서도 malloc을 사용할 수 는 있으나, 다른 ??가 권장됨.
	//* 붙어있으니까, 어쨌든 meme에 할당값이 갖고있는 내용을 가진다?
	return str;
}


int main(void)
{
	char* mystr = MakeStr(20);
	// 20칸의 문자열을 담을수 있는 공간 할당

	strcpy_s(mystr, 20, "I am so happy.");  // strcpy는 안전하지 않은 함수이므로 strcpy_s 사용
	// _s 붙어있는거 : vs 보안문자때문에 _s가 붙은 애들이 있음
	cout << mystr << endl;

	free(mystr);
	// 할당밭은 메모리 해제

	system("pause");  // VC++ 에서만 필요

	return 0;
}
*/

#include <iostream>
#include <string.h>

using namespace std;

char* MakeStr(int len)
{
	char* str = new char[len];
	// 위의 C 스타일 코드와 다르게 java처럼 간단히 new로 할당할 수 있음.
	return str;
}


int main(void)
{
	char* mystr = MakeStr(20);

	strcpy_s(mystr, 20, "I am so happy.");
	cout << mystr << endl;

	delete[]mystr; // 해제시킬때도 간단히 delete써서 

	system("pause");  // VC++ 에서만 필요

	return 0;
}