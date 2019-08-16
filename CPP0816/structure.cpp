
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
// �ϳ��� car��� ����ü, java�� class�� ���

void ShowCarState(const Car& car)
{
	cout << "������ ID: " << car.gamerID << endl;
	// ����ü�ϳ��� �Ӽ��� �����Ǵ� gamerID�� ����Ѵ�.
	cout << "���ᷮ: " << car.fuelGauge << "%" << endl;
	cout << "���� �ӵ�: " << car.curSpeed << "km/h" << endl << endl;
}
// return type voide., �ٵ� ���ڴ� �ϳ��� ����ü�� car���ڰ� ���� ���̴�.

void Accel(Car& car) 
{
	if (car.fuelGauge <= 0)
		// car ����ü�� �Ӽ�(member ����)�� ����~~ � ����
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
	// ����ü ���� ���� & ���ڰ� 3��
	Accel(run99); // aceel �Լ�(����)
	Accel(run99);
	ShowCarState(run99);
	Break(run99);
	ShowCarState(run99);
	// ����ü�� 3���� data type�� ������ �ϳ��� ���~
	// java�� class ��ü ������ C�� structure��.

	Car sped77 = { "sped77", 100, 0 };
	Accel(sped77);
	Break(sped77);
	ShowCarState(sped77);

	system("pause");  // VC++ ������ �ʿ�

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
		cout << "������ ID: " << gamerID << endl;
		cout << "���ᷮ: " << fuelGauge << "%" << endl;
		cout << "���� �ӵ�: " << curSpeed << "km/h" << endl << endl;
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
	run99.Accel(); // run99�� �ɹ� �Լ�
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77 = { "sped77", 100, 0 };
	sped77.Accel();  // sped77�� �ɹ� �Լ�
	sped77.Break();
	sped77.ShowCarState();

	system("pause");  // VC++ ������ �ʿ�

	return 0;
}