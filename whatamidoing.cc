#include <iostream>

int main(int argc, char** argv)
{
  if (argc != 2) //Gib an argc 2 Argumente
    {
      std::cerr << "Usage: " << argv[0] << " <number>" << std::endl;
      return 1;
    } //Hat das Programm eine Zahl mitgegeben oder nicht, sonst raus
  char* check = nullptr; //Pointer zeigt auf nichts - Standard
  double v = strtof(argv[1],&check); //strof nimmt text mit und gibt Zahl aus
  if (check == argv[1]) //Abgleich ob Text oder Zahleingabe
    {
      std::cerr << "Not a valid number: " << argv[1] << std::endl;
      return 2;
    }
  std::cout << v * v << std::endl;
  return 0;
}
