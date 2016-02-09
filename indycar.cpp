#include <iostream>
using namespace std;

int main() {
  int time, speed;
  cout << "How many seconds did the lap take?" ;
  cin >> time;
  speed = (2.5 / time * 3600);
  cout << "The average speed was " << speed << "mph" << endl;
  
return 0;
}