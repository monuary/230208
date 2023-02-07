#include<iostream>
using namespace std;

class SimpleClass
{
	int num1;
	int num2;
public:
	SimpleClass()	//생성자 constructor로 객체의 생성과 초기화를 할 수 있다.
	{
		num1 = 0;
		num2 = 0;
	}
	SimpleClass(int n)
	{
		num1 = n;
		num2 = 0;
	}
	SimpleClass(int n1, int n2)
	{
		num1 = n1;
		num2 = n2;
	}
	void ShowData() const
	{
		cout << num1 << " " << num2 << endl;
	}
};
int main()
{
	SimpleClass sc1;	//이렇게 처음 클래스를 정의할 때 constructor를 호출한다.
	sc1.ShowData();
	SimpleClass sc2(100);
	sc2.ShowData();
	SimpleClass sc3(100, 200);
	sc3.ShowData();
	return 0;
}