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
	cout << "1���� �� ���� ���� �Է��ϼ��� : ";
	cin >> ch;

	int end_num = ch;
	
	string str = ch;
	
	if ( isdigit(str[ch]) == 0 ){
		cout << "���ڸ� �Է��ϼ���!" << endl;
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

	cout << "1���� " << end_num << "���� ���� ���� " << sum << "�Դϴ�." << endl;

	
	continue;
	
	}


 	return 0;
}


