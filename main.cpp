#include <iostream>

void decimalToBinary(int n)
{
  int binaryNumberArray[32];

  int z = 0;

  while(n > 0) {

  binaryNumberArray[z] = n % 2;
  n = n / 2;
  z++;

  }

  for (int j = z - 1; j >= 0; j--)
    std::cout << binaryNumberArray[j];
}

int main()
{
  int n = 10;
  decimalToBinary(n);
  return 0;
}
