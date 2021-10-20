#include <iostream>
#include <cctype>

using namespace std;

int main(void)
{

	int num1 = 6;
    int ch;
	int num = 1, sum = 0;
here:
	while( num < num1 ){
	cout << "1부터 다 더할 수를 입력하세요 : ";
	cin >> ch;

	int end_num = ch;
	
	string str = ch;
	
	if ( isdigit(str[ch]) == 0 ){
		cout << "숫자를 입력하세요!" << endl;
		goto here;
	}
	else {
		continue;
	}
	
	while (1)
	{
		sum += num;
		if (num == end_num)
		{
			break;
		}
		num++;
	}

	cout << "1부터 " << end_num << "까지 더한 값은 " << sum << "입니다." << endl;

	
	continue;
	
	}


 	return 0;
}


