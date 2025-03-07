#include <iostream>
#include <string>

using namespace std;

int main() {
	char c;
	char input;
	jump:
    for(int i = 1; i <=5; i++)
{
	
	cout << "Enter char "<<i<<": ";
	cin>>c;
}

cout<<"Press n to exit: ";
	cin>>input;
while(input != 'n'||'N')
    return 0;
}

