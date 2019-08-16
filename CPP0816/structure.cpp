
/*
#include <iostream>

using namespace std;

#define ID_LEN      20
#define MAX_SPD     200
#define FUEL_STEP   2
#define ACC_STEP    10
#define BRK_STEP    10

struct Car
{
	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;

};
// 하나의 car라는 구조체, java의 class와 비슷

void ShowCarState(const Car& car)
{
	cout << "소유자 ID: " << car.gamerID << endl;
	// 구조체하나의 속성에 대응되는 gamerID를 출력한다.
	cout << "연료량: " << car.fuelGauge << "%" << endl;
	cout << "현재 속도: " << car.curSpeed << "km/h" << endl << endl;
}
// return type voide., 근데 인자는 하나의 구조체인 car인자가 들어올 것이다.

void Accel(Car& car) 
{
	if (car.fuelGauge <= 0)
		// car 구조체의 속성(member 변수)에 의해~~ 어떤 동작
		return;
	else
		car.fuelGauge -= FUEL_STEP;

	if (car.curSpeed + ACC_STEP >= MAX_SPD)
	{
		car.curSpeed = MAX_SPD;
		return;
	}
	car.curSpeed += ACC_STEP;
}

void Break(Car& car)
{
	if (car.curSpeed < BRK_STEP)
	{
		car.curSpeed = 0;
		return;
	}

	car.curSpeed -= BRK_STEP;
}

int main(void)
{
	Car run99 = { "run99", 100, 0 };
	// 구조체 변수 정의 & 인자값 3개
	Accel(run99); // aceel 함수(동작)
	Accel(run99);
	ShowCarState(run99);
	Break(run99);
	ShowCarState(run99);
	// 구조체로 3개의 data type과 변수를 하나로 묶어서~
	// java의 class 대체 수단이 C의 structure임.

	Car sped77 = { "sped77", 100, 0 };
	Accel(sped77);
	Break(sped77);
	ShowCarState(sped77);

	system("pause");  // VC++ 에서만 필요

	return 0;
}
*/

#include <iostream>

using namespace std;

struct Car
{
	enum
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};

	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;

	void ShowCarState()
	{
		cout << "소유자 ID: " << gamerID << endl;
		cout << "연료량: " << fuelGauge << "%" << endl;
		cout << "현재 속도: " << curSpeed << "km/h" << endl << endl;
	}

	void Accel()
	{
		if (fuelGauge <= 0)
			return;
		else
			fuelGauge -= FUEL_STEP;

		if (curSpeed + ACC_STEP >= MAX_SPD)
		{
			curSpeed = MAX_SPD;
			return;
		}
		curSpeed += ACC_STEP;
	}

	void Break()
	{
		if (curSpeed < BRK_STEP)
		{
			curSpeed = 0;
			return;
		}
		curSpeed -= BRK_STEP;
	}
};



int main(void)
{
	Car run99 = { "run99", 100, 0 };
	run99.Accel(); // run99의 맴버 함수
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77 = { "sped77", 100, 0 };
	sped77.Accel();  // sped77의 맴버 함수
	sped77.Break();
	sped77.ShowCarState();

	system("pause");  // VC++ 에서만 필요

	return 0;
}