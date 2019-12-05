#include<iostream>

int main() {

  int v1,v2;
  std::cout << "please input two integers" << std::endl;
  std::cin >> v1 >> v2;
  while(v1 < v2 - 1) {
     v1++;
     std::cout << v1 << " ";
  }

  while(v1 - 1 > v2) {
     v2++;
     std::cout << v2 << " "; 
  }
  std::cout << std::endl;
}

