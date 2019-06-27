#include <iostream>

class Fib 
{
  private: 
    unsigned int count;
  
  public:
    void  series(unsigned long max);
};

class Fibo: public Fib
{
    public:
    void  series(unsigned long max);
};

void Fib::series(unsigned long num)
{
  static unsigned long a = 0;
  static unsigned long b = 1;
  static unsigned long c = 0;


  if (num == 0)
  {
    return;
  }

  std::cout << " " << a << "\n";

  c = a + b;
  a = b;
  b = c;

  Fib:series(num -1);
}


void Fibo::series(unsigned long num)
{
  unsigned long i = 0;
  static unsigned long a = 0;
  static unsigned long b = 1;
  static unsigned long c = 0;

  std::cout << " Using Loop " << "\n";

  for(i = 1; i <= num; ++i)
  {
      std::cout << " " << a << "\n";
    
      c = a + b;
      a = b;
      b = c;
  }
  
}

int main() {

  unsigned long max;
  Fib fib;
  Fibo nacci;

  std::cout << "Fibonacci series !\n";

  //std::cout << "Enter total count !\n";
  //std::cin >> max;

  max = 50;
  std::cout << "A. Generating Fibonacci series for first " << max << " Counts \n";
  fib.series(max);
  std::cout << "\nA. Completed \n";

  max = 100;
  std::cout << "B. Generating Fibonacci series for first " << max << " Counts \n";
  nacci.series(max);
  std::cout << "\nB. Completed \n";

  return 0;
}
