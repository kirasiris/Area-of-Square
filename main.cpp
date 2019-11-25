#include <iostream>

using namespace std;

class Square {
  private:
    double side;
  public:
    void setSide(double sd){ side = sd; }
    double getSide() const { return side; }
    double calculateArea() {
      double result = side * side;
      return result;
    }
};

int main() {
  // First instance
  Square S1;
  S1.setSide(5.0);
  cout << S1.calculateArea();

  // New line
  cout << endl;

  // Second instance
  Square S2;
  S2.setSide(7.4);
  cout << S2.calculateArea();
}