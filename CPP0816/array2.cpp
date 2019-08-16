#include <iostream>

using namespace std;

class CIntArray {
public:
	// 생성자도 일종의 함수이므로 오버로딩이 가능(객체 생성 다양하게~)
	CIntArray(int nSize) { // 생성자 형태로 선언
		m_pnData = new int[nSize];
		memset(m_pnData, 0, sizeof(int) * nSize);

		// memset : 메모리 내용을 원하는 크기 만큼 특정값으로 설정할 수 있음.
	}
	~CIntArray() { // 소멸자, 반환 형식은 개발자가 선언할 수 없음
		delete m_pnData;// 메모리 해제 요청
	}

	// 상수형 참조인 경우의 배열 연산자
	int operator[] (int nIndex) const {
		cout << "operator[] const" << endl;
		return m_pnData[nIndex];
	}
	// 일반적인 배열 연산자, pointer 형태로 처리할거라 &있음.
	int& operator[] (int nIndex) {
		cout << "operator []" << endl;
		return m_pnData[nIndex];
	}

private:
	int* m_pnData; // 배열 메모리
	int m_nSize; // 배열 요소의 개수

};

void TestFunc(const CIntArray& arParam) { // Cintarray에서 정의된 객체값을 상수값으로 받아들이겠다.(const의미)
	cout << "TestFunc()" << endl;
	cout << arParam[3] << endl; // 상수형 참조이므로 'operator[](int nIndex) const'를 호출함.
}

int main() {
	CIntArray arr(5);
	for (int i = 0; i < 5; ++i) {
		arr[i] = i * 10;
	}

	TestFunc(arr);

	return 0;
}
