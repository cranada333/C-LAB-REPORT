// celcius.cpp
#include <iostream>
void temp(int); //temp라는 함수를 만들어 화씨를 섭씨로 바꿀 수 있도록 함

int main() {
	using namespace std;
	cout << "Enter temperature in Fahrenheit: ";
	int count;
	cin >> count; //사용자가 숫자를 입력할 수 있도록 함
	temp(count); //temp 함수에 사용자가 입력한 숫자를 넣음
	return 0;
}

void temp(int n) //temp 함수를 정의
{
	using namespace std;
	cout << "Temperature in Celsius: " << (n-32.0)*5.0/9.0 << " degrees." << endl; //정수 뒤에 .0을 붙이면서 소수점까지 계산하도록 유도
}