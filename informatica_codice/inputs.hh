#pragma once
#include <vector>
#include <algorithm>

#ifndef STANDALONE_RAN2_H
#define STANDALONE_RAN2_H

#include <cstdint>
#include <cmath>

class Ran2
{
   public:
      Ran2(std::int64_t seed = -2) noexcept : _idum(seed)
      {
         _rn_is_set = false;
         _init();
      }

      void seed(std::int64_t seed_v) noexcept
      {
         _idum      = seed_v;
         _rn_is_set = false;
         _init();
      }

      [[nodiscard]] double uniform() noexcept
      {
         std::int64_t iy = _step_iy();
         double temp     = AM * static_cast<double>(iy);
         return (temp > RNMX) ? RNMX : temp;
      }

      [[nodiscard]] int uniform_int(int n) noexcept
      {
         return static_cast<int>(std::max(0., std::floor(n * uniform())));
      }

   private:
      // from ran2 define macros
      static constexpr std::int64_t IM1  = 2147483563LL;
      static constexpr std::int64_t IM2  = 2147483399LL;
      static constexpr double AM         = (1.0 / (double)IM1);
      static constexpr std::int64_t IMM1 = (IM1 - 1);
      static constexpr std::int64_t IA1  = 40014LL;
      static constexpr std::int64_t IA2  = 40692LL;
      static constexpr std::int64_t IQ1  = 53668LL;
      static constexpr std::int64_t IQ2  = 52774LL;
      static constexpr std::int64_t IR1  = 12211LL;
      static constexpr std::int64_t IR2  = 3791LL;
      static constexpr int NTAB          = 32;
      static constexpr std::int64_t NDIV = (1 + IMM1 / NTAB);
      static constexpr double EPS        = 1.2e-7;
      static constexpr double RNMX       = (1.0 - EPS);

      // state
      std::int64_t _idum    = -2;
      std::int64_t _idum2   = 123456789LL;
      std::int64_t iy       = 0LL;
      std::int64_t iv[NTAB] = {};

      // For random normal
      bool _rn_is_set = false;
      double _rn_gset = 0.;

      // Methods
      void _init() noexcept
      {

         if (-(_idum) < 1) _idum = 1;
         else _idum = -(_idum);
         _idum2 = (_idum);
         for (int j = NTAB + 7; j >= 0; j--) {
            std::int64_t k = (_idum) / IQ1;
            _idum          = IA1 * (_idum - k * IQ1) - k * IR1;
            if (_idum < 0) _idum += IM1;
            if (j < NTAB) iv[j] = _idum;
         }
         iy = iv[0];
      }

      [[nodiscard]] std::int64_t _step_iy() noexcept
      {
         // _init();
         std::int64_t k = (_idum) / IQ1;
         _idum          = IA1 * (_idum - k * IQ1) - k * IR1;
         if (_idum < 0) _idum += IM1;
         k      = _idum2 / IQ2;
         _idum2 = IA2 * (_idum2 - k * IQ2) - k * IR2;
         if (_idum2 < 0) _idum2 += IM2;
         int j = iy / NDIV;
         iy    = iv[j] - _idum2;
         iv[j] = _idum;
         if (iy < 1) iy += IMM1;

         return iy;
      }
};

#endif // STANDALONE_RAN2_H

Ran2 rng{-2};

struct TestCases {
      static std::vector<int> test_1()
      {
         std::vector<int> result;
         for (size_t i = 0; i < 100; i++) result.push_back(rng.uniform_int(1e5));
         std::sort(result.begin(), result.end());
         return result;
      }

      static std::vector<int> test_2()
      {
         std::vector<int> result;
         for (size_t i = 0; i < 1000; i++) result.push_back(rng.uniform_int(1e5));
         result.push_back(2710);
         std::sort(result.begin(), result.end());
         return result;
      }
      static std::vector<int> test_3()
      {
         std::vector<int> result;
         for (size_t i = 0; i < 10000; i++) result.push_back(rng.uniform_int(1e5));
         result.push_back(2710);
         result.push_back(2710);
         std::sort(result.begin(), result.end());
         return result;
      }
      static std::vector<int> test_4()
      {
         std::vector<int> result;
         for (size_t i = 0; i < 100000; i++) result.push_back(rng.uniform_int(1e5));
         result.push_back(2710);
         result.push_back(2710);
         result.push_back(2710);
         std::sort(result.begin(), result.end());
         return result;
      }

      static std::vector<int> test_5() { return {}; }
      static std::vector<int> test_6() { return {2710}; }
      static std::vector<int> test_7()
      {
         std::vector<int> result;
         for (size_t i = 0; i < 30; i++) result.push_back(2710);
         return result;
      }

      static std::vector<int> test_8()
      {
         std::vector<int> result;
         for (size_t i = 0; i < 20; i++) result.push_back(i);
         result.push_back(2710);
         return result;
      }

      static std::vector<std::vector<int>> all_tests()
      {
         return {test_1(), test_2(), test_3(), test_4(), test_5(), test_6(), test_7(), test_8()};
      }
};
