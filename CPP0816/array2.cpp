#include <iostream>

using namespace std;

class CIntArray {
public:
	// �����ڵ� ������ �Լ��̹Ƿ� �����ε��� ����(��ü ���� �پ��ϰ�~)
	CIntArray(int nSize) { // ������ ���·� ����
		m_pnData = new int[nSize];
		memset(m_pnData, 0, sizeof(int) * nSize);

		// memset : �޸� ������ ���ϴ� ũ�� ��ŭ Ư�������� ������ �� ����.
	}
	~CIntArray() { // �Ҹ���, ��ȯ ������ �����ڰ� ������ �� ����
		delete m_pnData;// �޸� ���� ��û
	}

	// ����� ������ ����� �迭 ������
	int operator[] (int nIndex) const {
		cout << "operator[] const" << endl;
		return m_pnData[nIndex];
	}
	// �Ϲ����� �迭 ������, pointer ���·� ó���ҰŶ� &����.
	int& operator[] (int nIndex) {
		cout << "operator []" << endl;
		return m_pnData[nIndex];
	}

private:
	int* m_pnData; // �迭 �޸�
	int m_nSize; // �迭 ����� ����

};

void TestFunc(const CIntArray& arParam) { // Cintarray���� ���ǵ� ��ü���� ��������� �޾Ƶ��̰ڴ�.(const�ǹ�)
	cout << "TestFunc()" << endl;
	cout << arParam[3] << endl; // ����� �����̹Ƿ� 'operator[](int nIndex) const'�� ȣ����.
}

int main() {
	CIntArray arr(5);
	for (int i = 0; i < 5; ++i) {
		arr[i] = i * 10;
	}

	TestFunc(arr);

	return 0;
}
