#include <iostream>
using namespace std;

// A function that tries to modify the value of 'num'
void modifyValue(int num) {
    // 'num' is a local copy; changing it won’t affect the original variable.
    num = 20;
    cout << "Inside modifyValue: num = " << num << endl;
}

int main() {
    int originalNum = 10;

    // Before function call
    cout << "Before calling modifyValue: originalNum = " << originalNum << endl;

    // Function call: A copy of 'originalNum' is passed
    modifyValue(originalNum);

    // After function call: Original value remains unchanged
    cout << "After calling modifyValue: originalNum = " << originalNum << endl;

    return 0;
}

/* 
📝 Explanation:
1️⃣ In 'modifyValue()', 'num' is a **copy** of 'originalNum'.
2️⃣ Any changes to 'num' inside the function won't affect 'originalNum'.
3️⃣ This is called **pass-by-value** because the original variable stays unchanged.
4️⃣ Memory for 'num' is allocated only during the function execution and released after.
*/
