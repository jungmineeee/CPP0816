
/*
#include <iostream>
#include <string.h>

using namespace std;

char* MakeStr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);
	//c++������ malloc�� ����� �� �� ������, �ٸ� ??�� �����.
	//* �پ������ϱ�, ��·�� meme�� �Ҵ簪�� �����ִ� ������ ������?
	return str;
}


int main(void)
{
	char* mystr = MakeStr(20);
	// 20ĭ�� ���ڿ��� ������ �ִ� ���� �Ҵ�

	strcpy_s(mystr, 20, "I am so happy.");  // strcpy�� �������� ���� �Լ��̹Ƿ� strcpy_s ���
	// _s �پ��ִ°� : vs ���ȹ��ڶ����� _s�� ���� �ֵ��� ����
	cout << mystr << endl;

	free(mystr);
	// �Ҵ���� �޸� ����

	system("pause");  // VC++ ������ �ʿ�

	return 0;
}
*/

#include <iostream>
#include <string.h>

using namespace std;

char* MakeStr(int len)
{
	char* str = new char[len];
	// ���� C ��Ÿ�� �ڵ�� �ٸ��� javaó�� ������ new�� �Ҵ��� �� ����.
	return str;
}


int main(void)
{
	char* mystr = MakeStr(20);

	strcpy_s(mystr, 20, "I am so happy.");
	cout << mystr << endl;

	delete[]mystr; // ������ų���� ������ delete�Ἥ 

	system("pause");  // VC++ ������ �ʿ�

	return 0;
}