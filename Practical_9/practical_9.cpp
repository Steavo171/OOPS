#include <iostream>

#include <exception>

using namespace std;

int main() {
   int n, d, result;

   cout << "Enter numerator: ";
   cin >> n;

   cout << "Enter denominator: ";
   cin >> d;

   try {
      if (d == 0) {
         throw runtime_error("Divide by zero exception");
      }

      result = n / d;
      cout << "Result: " << result << endl;
   }
   catch (const exception& e) {
      cout << e.what() << endl;
   }
    return 0;
}