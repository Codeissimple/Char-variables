#include <iostream>
using namespace std;

int main() {
  char first, middle, last;

  first = 'A';
  middle = 'B';
  last = 'C';

  cout << first << '\n' << middle << '\n' << last << '\n';

  cout << "Enter 3 letters: ";
	cin >> first >> middle >> last;

  cout << first << '\n' << middle << '\n' << last << '\n';
  return 0;
}