#include <iostream>
using namespace std;
int main ()
{
  string nama = "Patmayanti";
  char kelas = 'B';
  string *p1;
  char *p2;

  cout << " Nama : " << nama << "\n";
  cout << " Kelas : " << kelas << "\n";

  cout << " Operasi Poiter : " << "\n";

  p1 = &nama;
  p2 = &kelas;
  *p1 = "Kartini";
  *p2 = 'C';
  
  cout << " Nama : " << nama << "\n";
  cout << " Kelas : " << kelas << "\n";
  return 0;
}