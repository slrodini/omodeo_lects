#include "inputs.hh"
#include <iostream>
#include <vector>

int search(const std::vector<int>& input, const int target, bool binary)
{
   if (input.empty()) return -1;

   if (!binary) {
      for (size_t i = 0; i < input.size(); i++) {
         if (input[i] == target) return i;
      }
      return -1;
   } else {

      int low  = 0;
      int high = input.size();
      if (high - low <= 1) return input[0] == target ? 0 : -1;

      int mid = (high + low) / 2;

      for (int i = 0; i < input.size(); i++) {
         if (input[mid] == target) return mid;
         if (input[mid] > target) high = mid;
         else low = mid;

         mid = (high + low) / 2;
         if (high - low <= 1) return input[low] == target ? low : -1;
      }
      return -1;
   }
}

int main()
{
   auto tests = TestCases::all_tests();
   int target = 2710;
   for (auto& test : tests) {
      int pos  = search(test, target, false);
      int pos2 = search(test, target, true);
      std::cout << pos << "  " << pos2 << std::endl;
      // if (pos2 != -1) std::cout << test[pos2] << std::endl;
   }
   return 0;
}
