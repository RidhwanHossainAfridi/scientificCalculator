#include <math.h>

long long factorial(int num);
int binaryToDecimal(long long n);
int DecimalToOctal(int decimalNumber);
float areaTriangle(float a, float b, float c);
void getInput(const char* prompt, float& value);
void printResult(const char* operation, float result);

// Helper function to handle input
void getInput(const char* prompt, float& value) {
  Serial.print(prompt);
  while (!Serial.available()) {} // Wait for user input
  value = Serial.parseFloat();
  Serial.println(value);
}

// Helper function to print result
void printResult(const char* operation, float result) {
  Serial.print(operation);
  Serial.print(" = ");
  Serial.println(result);
}

void setup() {
  Serial.begin(9600);
  Serial.println("Scientific Calculator - Arduino");
  Serial.println("Select a mode (1 - 25):");
}

void loop() {
  int mode;

  if (Serial.available()) {
    mode = Serial.parseInt();
    Serial.print("You selected mode: ");
    Serial.println(mode);

    // Handle different modes based on user input
    switch (mode) {
      case 1: // Addition
        addition();
        break;
      case 2: // Subtraction
        subtraction();
        break;
      case 3: // Multiplication
        multiplication();
        break;
      case 4: // Division
        division();
        break;
      case 5: // Power
        power();
        break;
      case 6: // Square Root
        squareRoot();
        break;
      case 7: // Cube Root
        cubeRoot();
        break;
      case 8: // Sine
        sine();
        break;
      case 9: // Cosine
        cosine();
        break;
      case 10: // Tangent
        tangent();
        break;
      case 11: // Arcsine
        arcsine();
        break;
      case 12: // Arccosine
        arccosine();
        break;
      case 13: // Arctangent
        arctangent();
        break;
      case 14: // e^x
        eToThePower();
        break;
      case 15: // Natural Logarithm
        naturalLogarithm();
        break;
      case 16: // Base-n Logarithm
        baseNLogarithm();
        break;
      case 17: // Cosecant
        cosecant();
        break;
      case 18: // Secant
        secant();
        break;
      case 19: // Cotangent
        cotangent();
        break;
      case 20: // Binary to Decimal
        binaryToDecimalMode();
        break;
      case 21: // Decimal to Octal
        decimalToOctalMode();
        break;
      case 22: // Hexadecimal to Decimal
        hexToDecimalMode();
        break;
      case 23: // Average
        average();
        break;
      case 24: // Area of Circle
        areaOfCircle();
        break;
      case 25: // Area of Triangle
        areaOfTriangleMode();
        break;
      default:
        Serial.println("Invalid selection.");
        break;
    }
  }
}

void addition() {
  float num1, num2;
  getInput("Enter the first number:", num1);
  getInput("Enter the second number:", num2);
  printResult("Addition", num1 + num2);
}

void subtraction() {
  float num1, num2;
  getInput("Enter the first number:", num1);
  getInput("Enter the second number:", num2);
  printResult("Subtraction", num1 - num2);
}

void multiplication() {
  float num1, num2;
  getInput("Enter the first number:", num1);
  getInput("Enter the second number:", num2);
  printResult("Multiplication", num1 * num2);
}

void division() {
  float num1, num2;
  getInput("Enter the numerator:", num1);
  getInput("Enter the denominator:", num2);
  if (num2 != 0) {
    printResult("Division", num1 / num2);
  } else {
    Serial.println("Error: Division by zero!");
  }
}

void power() {
  float base, exponent;
  getInput("Enter the base number:", base);
  getInput("Enter the exponent:", exponent);
  printResult("Power", pow(base, exponent));
}

void squareRoot() {
  float num;
  getInput("Enter a number:", num);
  if (num >= 0) {
    printResult("Square Root", sqrt(num));
  } else {
    Serial.println("Error: Negative number!");
  }
}

void cubeRoot() {
  float num;
  getInput("Enter a number:", num);
  printResult("Cube Root", cbrt(num));
}

void sine() {
  float degrees;
  getInput("Enter the angle in degrees:", degrees);
  printResult("Sine", sin(radians(degrees)));
}

void cosine() {
  float degrees;
  getInput("Enter the angle in degrees:", degrees);
  printResult("Cosine", cos(radians(degrees)));
}

void tangent() {
  float degrees;
  getInput("Enter the angle in degrees:", degrees);
  if (degrees != 90 && degrees != 270) {
    printResult("Tangent", tan(radians(degrees)));
  } else {
    Serial.println("Error: Undefined (tan(90) and tan(270))");
  }
}

void arcsine() {
  float value;
  getInput("Enter the value for arcsine (between -1 and 1):", value);
  if (value >= -1 && value <= 1) {
    printResult("Arcsine", degrees(asin(value)));
  } else {
    Serial.println("Error: Value must be between -1 and 1!");
  }
}

void arccosine() {
  float value;
  getInput("Enter the value for arccosine (between -1 and 1):", value);
  if (value >= -1 && value <= 1) {
    printResult("Arccosine", degrees(acos(value)));
  } else {
    Serial.println("Error: Value must be between -1 and 1!");
  }
}

void arctangent() {
  float value;
  getInput("Enter the value for arctangent:", value);
  printResult("Arctangent", degrees(atan(value)));
}

void eToThePower() {
  float exponent;
  getInput("Enter the exponent for e^x:", exponent);
  printResult("e^x", exp(exponent));
}

void naturalLogarithm() {
  float num;
  getInput("Enter a number for ln(x):", num);
  if (num > 0) {
    printResult("Natural Logarithm", log(num));
  } else {
    Serial.println("Error: Natural log is undefined for non-positive numbers!");
  }
}

void baseNLogarithm() {
  float base, num;
  getInput("Enter the base for log(base)(x):", base);
  getInput("Enter the number for log(base)(x):", num);
  if (base > 0 && base != 1 && num > 0) {
    printResult("Base-n Logarithm", log(num) / log(base));
  } else {
    Serial.println("Error: Invalid inputs for logarithm.");
  }
}

void cosecant() {
  float degrees;
  getInput("Enter the angle in degrees:", degrees);
  printResult("Cosecant", 1 / sin(radians(degrees)));
}

void secant() {
  float degrees;
  getInput("Enter the angle in degrees:", degrees);
  printResult("Secant", 1 / cos(radians(degrees)));
}

void cotangent() {
  float degrees;
  getInput("Enter the angle in degrees:", degrees);
  printResult("Cotangent", 1 / tan(radians(degrees)));
}

void binaryToDecimalMode() {
  long long binary;
  Serial.println("Enter a binary number:");
  while (!Serial.available()) {}
  binary = Serial.parseInt();
  printResult("Binary to Decimal", binaryToDecimal(binary));
}

void decimalToOctalMode() {
  int decimal;
  Serial.println("Enter a decimal number:");
  while (!Serial.available()) {}
  decimal = Serial.parseInt();
  printResult("Decimal to Octal", DecimalToOctal(decimal));
}

void hexToDecimalMode() {
  String hexValue;
  Serial.println("Enter a hexadecimal number:");
  while (!Serial.available()) {}
  hexValue = Serial.readString();
  Serial.print("Result: ");
  Serial.println(strtol(hexValue.c_str(), NULL, 16));
}

void average() {
  int count;
  Serial.println("Enter the number of elements:");
  while (!Serial.available()) {}
  count = Serial.parseInt();
  float sum = 0, value;
  for (int i = 0; i < count; i++) {
    Serial.print("Enter number ");
    Serial.print(i + 1);
    Serial.println(":");
    while (!Serial.available()) {}
    value = Serial.parseFloat();
    sum += value;
  }
  printResult("Average", sum / count);
}

void areaOfCircle() {
  float radius;
  getInput("Enter the radius of the circle:", radius);
  printResult("Area of Circle", M_PI * radius * radius);
}

void areaOfTriangleMode() {
  float a, b, c;
  getInput("Enter side 1 of the triangle:", a);
  getInput("Enter side 2 of the triangle:", b);
  getInput("Enter side 3 of the triangle:", c);
  float area = areaTriangle(a, b, c);
  if (area != -1) {
    printResult("Area of Triangle", area);
  } else {
    Serial.println("Not a valid triangle!");
  }
}

long long factorial(int num) {
  if (num >= 1) {
    return num * factorial(num - 1);
  } else {
    return 1;
  }
}

int binaryToDecimal(long long n) {
  return strtol(String(n).c_str(), NULL, 2);
}

int DecimalToOctal(int decimalNumber) {
  return strtol(String(decimalNumber).c_str(), NULL, 8);
}

float areaTriangle(float a, float b, float c) {
  if (a < 0 || b < 0 || c < 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
    return -1;
  }
  float s = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}
