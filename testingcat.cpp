#include<bits/stdc++.h>
using namespace std;

class Lsb_less {
   public:
   bool operator()(int x, int y) {
      return (x%10)<(y%10);
   }
};

set<int, Lsb_less> s = {21, 23, 26, 27}; 

set<int, Lsb_less>::iterator itr1, itr2;

itr1 = find(s.begin(), s.end(), 36);  // output = s.end() 

itr2 = s.find(36);  // output = 26

//http://jianboge.com/d309657