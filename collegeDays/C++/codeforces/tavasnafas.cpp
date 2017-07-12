#include <iostream>

using namespace std;

int main()
{
	int number;
	

        
	cin >> number;
	
        char dg1 = (number / 10) + '0';
	char dg2 = (number % 10) + '0';



	if (dg1 == '0' && dg2 == '0'){
	       cout << "zero";
	}

	
	if (dg1 == '1')
	{
	switch (dg2)
	{
		case '0':
			cout << "ten";
			
			break;
		case '1':
			cout << "eleven";
			break;
		case '2':
			cout << "twelve";
			break;
		case '3':
			cout << "thirteen";
			break;
		case '4':
			cout << "fourteen";
			break;
		case '5':
			cout << "fifteen";
			break;
		case '6':
			cout << "sixteen";
			break;
		case '7':
			cout << "seventeen";
			break;
		case '8':
			cout << "eighteen";
			break;
		case '9':
			cout << "nineteen";
			break;
	}
	}
	else
	{
	switch (dg1)
	{
		case '2':
			cout << "twenty";
			break;
		case '3':
			cout << "thirty";
			break;
		case '4':
			cout << "forty";
			break;
		case '5':
			cout << "fifty";
			break;
		case '6':
			cout << "sixty";
			break;
		case '7':
			cout << "seventy";
			break;
		case '8':
			cout << "eighty";
			break;
		case '9':
			cout << "ninety";
			break;
	}
	switch (dg2)
	{
		case '1':
		        if(dg2 > '0' && dg1 != '0')
			    cout << "-";
			    
			cout << "one";
			break;
		case '2':
		          if(dg2 > '0' && dg1 != '0')
			    cout << "-";
			cout << "two";
			break;
		case '3':
		      if(dg2 > '0' && dg1 != '0')
			    cout << "-";
			cout << "three";
			break;
		case '4':  if(dg2 > '0' && dg1 != '0')
			    cout << "-";
			cout << "four";
			break;
		case '5':  if(dg2 > '0' && dg1 != '0')
			    cout << "-";
			cout << "five";
			break;
		case '6':
		      if(dg2 > '0' && dg1 != '0')
			    cout << "-";
			cout << "six";
			break;
		case '7':
		      if(dg2 > '0' && dg1 != '0')
			    cout << "-";
			cout << "seven";
			break;
		case '8':
		      if(dg2 > '0' && dg1 != '0')
			    cout << "-";
			cout << "eight";
			break;
		case '9':
		      if(dg2 > '0' && dg1 != '0')
			    cout << "-";
			cout << "nine";
			break;
		default:
			cout << "";
			break;
	}
	}
	
        cout << "\n";
	return 0;
	
}
