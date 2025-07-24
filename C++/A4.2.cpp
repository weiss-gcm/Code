#include <iostream>
using namespace std;

int x, y, z;
int sum1, sum2, sum3;

cout << "Enter three integers: ";
cin >> x >> y >> z;
sum1 = x + y + z;
sum2 = x * y * z;
sum3 = (x + y) * z;
cout << "The sum of the integers is: " << sum1 << endl;
cout << "The product of the integers is: " << sum2 << endl;
cout << "The sum of the first two integers times the third integer is: " << sum3 << endl;
return 0;
}
