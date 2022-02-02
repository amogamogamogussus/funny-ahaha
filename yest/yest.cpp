#include <iostream>

int main()
{
	std::string a1[4] = { "i said 1-3(restart program)", "you chose a!", "you chose b!", "you chose c!" };
	int ans;
	std::cout << "choose an number out of 1 to 3 \n";
	std::cin >> ans;
	if (ans > sizeof(a1)) {
		std::cout << "you chose a number higher than 3! you chose " << ans << " this does not exist on the array!";
	}
	else {
		std::cout << a1[ans] << "\n";
	}
	
}
