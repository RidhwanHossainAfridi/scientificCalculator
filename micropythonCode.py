import math

# Factorial function using an iterative approach
def factorial(num):
    result = 1
    for i in range(1, num + 1):
        result *= i
    return result

# Binary to Decimal Conversion
def binary_to_decimal(n):
    return int(str(n), 2)

# Decimal to Octal Conversion
def decimal_to_octal(decimal_number):
    return oct(decimal_number)[2:]

# Area of Triangle using Heron's Formula
def area_triangle(a, b, c):
    if a < 0 or b < 0 or c < 0 or (a + b <= c) or (a + c <= b) or (b + c <= a):
        return -1
    s = (a + b + c) / 2
    return math.sqrt(s * (s - a) * (s - b) * (s - c))

# Utility functions for getting input and printing results
def get_input(prompt):
    value = input(prompt)
    return float(value) if value else 0.0

def print_result(operation, result):
    print(f"{operation} = {result}")

# Mode Functions
def addition():
    num1 = get_input("Enter the first number: ")
    num2 = get_input("Enter the second number: ")
    print_result("Addition", num1 + num2)

def subtraction():
    num1 = get_input("Enter the first number: ")
    num2 = get_input("Enter the second number: ")
    print_result("Subtraction", num1 - num2)

def multiplication():
    num1 = get_input("Enter the first number: ")
    num2 = get_input("Enter the second number: ")
    print_result("Multiplication", num1 * num2)

def division():
    num1 = get_input("Enter the numerator: ")
    num2 = get_input("Enter the denominator: ")
    if num2 != 0:
        print_result("Division", num1 / num2)
    else:
        print("Error: Division by zero!")

def power():
    base = get_input("Enter the base number: ")
    exponent = get_input("Enter the exponent: ")
    print_result("Power", math.pow(base, exponent))

def square_root():
    num = get_input("Enter a number: ")
    if num >= 0:
        print_result("Square Root", math.sqrt(num))
    else:
        print("Error: Negative number!")

def cube_root():
    num = get_input("Enter a number: ")
    print_result("Cube Root", math.pow(num, 1/3))

def sine():
    degrees = get_input("Enter the angle in degrees: ")
    print_result("Sine", math.sin(math.radians(degrees)))

def cosine():
    degrees = get_input("Enter the angle in degrees: ")
    print_result("Cosine", math.cos(math.radians(degrees)))

def tangent():
    degrees = get_input("Enter the angle in degrees: ")
    if degrees != 90 and degrees != 270:
        print_result("Tangent", math.tan(math.radians(degrees)))
    else:
        print("Error: Undefined (tan(90) and tan(270))")

def arcsine():
    value = get_input("Enter the value for arcsine (between -1 and 1): ")
    if -1 <= value <= 1:
        print_result("Arcsine", math.degrees(math.asin(value)))
    else:
        print("Error: Value must be between -1 and 1!")

def arccosine():
    value = get_input("Enter the value for arccosine (between -1 and 1): ")
    if -1 <= value <= 1:
        print_result("Arccosine", math.degrees(math.acos(value)))
    else:
        print("Error: Value must be between -1 and 1!")

def arctangent():
    value = get_input("Enter the value for arctangent: ")
    print_result("Arctangent", math.degrees(math.atan(value)))

def e_to_the_power():
    exponent = get_input("Enter the exponent for e^x: ")
    print_result("e^x", math.exp(exponent))

def natural_logarithm():
    num = get_input("Enter a number for ln(x): ")
    if num > 0:
        print_result("Natural Logarithm", math.log(num))
    else:
        print("Error: Natural log is undefined for non-positive numbers!")

def base_n_logarithm():
    base = get_input("Enter the base for log(base)(x): ")
    num = get_input("Enter the number for log(base)(x): ")
    if base > 0 and base != 1 and num > 0:
        print_result("Base-n Logarithm", math.log(num) / math.log(base))
    else:
        print("Error: Invalid inputs for logarithm.")

def cosecant():
    degrees = get_input("Enter the angle in degrees: ")
    print_result("Cosecant", 1 / math.sin(math.radians(degrees)))

def secant():
    degrees = get_input("Enter the angle in degrees: ")
    print_result("Secant", 1 / math.cos(math.radians(degrees)))

def cotangent():
    degrees = get_input("Enter the angle in degrees: ")
    print_result("Cotangent", 1 / math.tan(math.radians(degrees)))

def binary_to_decimal():
    binary = input("Enter a binary number: ")
    print_result("Binary to Decimal", binary_to_decimal(binary))

def decimal_to_octal():
    decimal = int(input("Enter a decimal number: "))
    print_result("Decimal to Octal", decimal_to_octal(decimal))

def hex_to_decimal():
    hex_value = input("Enter a hexadecimal number: ")
    print(f"Hexadecimal to Decimal: {int(hex_value, 16)}")

def average():
    count = int(input("Enter the number of elements: "))
    total = 0
    for i in range(count):
        value = float(input(f"Enter number {i+1}: "))
        total += value
    print_result("Average", total / count)

def area_of_circle():
    radius = get_input("Enter the radius of the circle: ")
    print_result("Area of Circle", math.pi * radius * radius)

def area_of_triangle():
    a = get_input("Enter side 1 of the triangle: ")
    b = get_input("Enter side 2 of the triangle: ")
    c = get_input("Enter side 3 of the triangle: ")
    area = area_triangle(a, b, c)
    if area != -1:
        print_result("Area of Triangle", area)
    else:
        print("Not a valid triangle!")

# Main menu loop
def main():
    while True:
        print("\nScientific Calculator (MicroPython)")
        print("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Power")
        print("6. Square Root\n7. Cube Root\n8. Sine\n9. Cosine\n10. Tangent")
        print("11. Arcsine\n12. Arccosine\n13. Arctangent\n14. e^x\n15. Natural Logarithm")
        print("16. Base-n Logarithm\n17. Cosecant\n18. Secant\n19. Cotangent\n20. Binary to Decimal")
        print("21. Decimal to Octal\n22. Hexadecimal to Decimal\n23. Average\n24. Area of Circle\n25. Area of Triangle")
        print("Enter 'q' to quit.")

        choice = input("Select a mode (1-25): ")
        
        if choice == '1':
            addition()
        elif choice == '2':
            subtraction()
        elif choice == '3':
            multiplication()
        elif choice == '4':
            division()
        elif choice == '5':
            power()
        elif choice == '6':
            square_root()
        elif choice == '7':
            cube_root()
        elif choice == '8':
            sine()
        elif choice == '9':
            cosine()
        elif choice == '10':
            tangent()
        elif choice == '11':
            arcsine()
        elif choice == '12':
            arccosine()
        elif choice == '13':
            arctangent()
        elif choice == '14':
            e_to_the_power()
        elif choice == '15':
            natural_logarithm()
        elif choice == '16':
            base_n_logarithm()
        elif choice == '17':
            cosecant()
        elif choice == '18':
            secant()
        elif choice == '19':
            cotangent()
        elif choice == '20':
            binary_to_decimal()
        elif choice == '21':
            decimal_to_octal()
        elif choice == '22':
            hex_to_decimal()
        elif choice == '23':
            average()
        elif choice == '24':
            area_of_circle()
        elif choice == '25':
            area_of_triangle()
        elif choice == 'q':
            print("Exiting calculator.")
            break
        else:
            print("Invalid input!")

# Start the calculator
if __name__ == "__main__":
    main()
