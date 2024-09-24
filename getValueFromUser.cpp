// #include <iostream>

// int getValueFromUser() // this function now returns an integer value
// {
//     std::cout << "Enter an integer: ";
//     int input{};
//     std::cin >> input;

//     return input; // return the value the user entered back to the caller
// }

// int main()
// {
//     int num{getValueFromUser()}; // initialize num with the return value of getValueFromUser()

//     std::cout << num << " doubled is: " << num * 2 << '\n';

//     return 0;
// }

// Non-DRY code:
// #include <iostream>

// int main()
// {
// 	int x{};
// 	std::cout << "Enter an integer: ";
// 	std::cin >> x;

// 	int y{};
// 	std::cout << "Enter an integer: ";
// 	std::cin >> y;

// 	std::cout << x << " + " << y << " = " << x + y << '\n';

// 	return 0;
// }

// DRY code:
#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    int x{getValueFromUser()}; // first call to getValueFromUser
    int y{getValueFromUser()}; // second call to getValueFromUser

    std::cout << x << " + " << y << " = " << x + y << '\n';

    return 0;
}
