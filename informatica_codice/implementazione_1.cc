#include "inputs.hh"
#include <iostream>
#include <vector>

struct BinarySearch {
      static int search(const std::vector<int>& input, const int target)
      {
         if (input.empty()) return -1;

         int low  = 0;
         int high = input.size();
         if (high - low <= 1) return input[0] == target ? 0 : -1;

         int mid = (high + low) / 2;

         for (;;) {
            if (input[mid] == target) return mid;
            if (input[mid] > target) high = mid;
            else low = mid;

            mid = (high + low) / 2;
            if (high - low <= 1) return input[low] == target ? low : -1;
         }
      }
};

struct LinearSearch {
      static int search(const std::vector<int>& input, const int target)
      {
         for (size_t i = 0; i < input.size(); i++) {
            if (input[i] == target) return i;
         }
         return -1;
      }
};

template <class Engine = BinarySearch>
int search(const std::vector<int>& input, const int target)
{
   return Engine::search(input, target);
}

int main()
{
   auto tests = TestCases::all_tests();
   int target = 2710;
   for (auto& test : tests) {
      int pos  = search<LinearSearch>(test, target);
      int pos2 = search<BinarySearch>(test, target);
      std::cout << pos << "  " << pos2 << std::endl;
   }
   return 0;
}
