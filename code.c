#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define PI 3.14159265359

long long factorial(int num1);
int binaryToDecimal(long long n);
int DecimalToOctal(int decimalNumber);
float AreaTriangle(float a, float b, float c);

struct triangleSides{
    float a;
    float b;
    float c;
};
typedef struct triangleSides Sides;

int main (){

    int case_var,confirm,num23,num27,num28,loop = 1,i,j,k,sum;
    double num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12;
    double num13,num14,num15,num16,num17,num18,num19,num20,num21,num22,num24;
    double num25,num26,num29,num30,num31,num32,num33,num34,num35;

    printf("\n  **************************************** Scientific Calculator *****************************************\n");
    printf("\n\t\t                                Version:1.0.2\n");
    printf("\n\t\t                                Welcome User:\n");
    printf("\n\t                                       Select a mode:\n\n");
    printf("\n  1.Addition         8.Sine        15.Base-e logarithm   22.Matrix Addition              29.Binary to Decimal\n");
    printf("\n  2.Subtraction      9.Cosine      16.Base-n logarithm   23.Matrix Subtraction           30.Decimal to Octal\n");
    printf("\n  3.Multiplication  10.Tangent     17.n-Factorial        24.Matrix Multiplication        31.Hexadecimal to Decimal\n");
    printf("\n  4.Division        11.Arcsine     18.Cosecant           25.Roots of Quadratic Equation  32.Average\n");
    printf("\n  5.Power           12.Arccosine   19.Secant             26.Number of Combinations(nCr)  33.Area of circle\n");
    printf("\n  6.Square Root     13.Arctangent  20.Cotangent          27.Degrees to Radians           34.Area of triangle\n");
    printf("\n  7.Cube Root       14.e^x         21.Value of Pi & e    28.Radians to Degrees           35.Unit Conversion\n");

    printf("\n\nEnter your selection: ");
    scanf("%d", &case_var);

    while(loop == 1){

    if (case_var == 1 ){
        printf("\n\tMode 1: Addition\n\n");
        printf("\tEnter the first number: ");
        scanf("%lf", &num1);
        printf("\tEnter the second number: ");
        scanf("%lf", &num2);
        printf("\n\t%lf + %lf = %lf\n", num1 ,num2,num1+num2);

        printf("\nIf you want to continue to another mode press the respective number, if you want to exit press 0: ");
        scanf("%d", &confirm);
        if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 2  ){
        printf("\n\tMode 2: Subtraction\n\n");
        printf("\tEnter the first number: ");
        scanf("%lf", &num3);
        printf("\tEnter the second number: ");
        scanf("%lf", &num4);
        printf("\n\t%lf - %lf = %lf\n", num3 ,num4,num3-num4);
        printf("\nIf you want to continue to another mode press the respective number, if you want to exit press 0: ");
        scanf("%d", &confirm);
        if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 3  ){
        printf("\n\tMode 3: Multiplication\n\n");
        printf("\tEnter the first number: ");
        scanf("%lf", &num5);
        printf("\tEnter the second number: ");
        scanf("%lf", &num6);
        printf("\n\t%lf x %lf = %lf\n", num5 ,num6,num5*num6);
        printf("\nIf you want to continue to another mode press the respective number, if you want to exit press 0: ");
        scanf("%d", &confirm);
        if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 4  ){
        printf("\n\tMode 4: Division\n\n");
        printf("\tEnter the numerator: ");
        scanf("%lf", &num7);
        printf("\tEnter the denominator: ");
        scanf("%lf", &num8);
        printf("\n\t%lf / %lf = %lf\n", num7 ,num8,num7/num8);
        printf("\nIf you want to continue to another mode press the respective number, if you want to exit press 0: ");
        scanf("%d", &confirm);
        if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 5  ){
        printf("\n\tMode 5: Power\n\n");
        printf("\tThe format for power is x^n (x to the power n): \n\n");
        printf("\tEnter x: ");
        scanf("%lf", &num9);
        printf("\tEnter n: ");
        scanf("%lf", &num10);
        printf("\n\t%lf ^ %lf = %lf\n", num9 ,num10,pow(num9,num10));
        printf("\nIf you want to continue to another mode press the respective number, if you want to exit press 0: ");
        scanf("%d", &confirm);
        if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 6  ){
        printf("\n\tMode 6: Square Root\n\n");
        printf("\tEnter a number: ");
        scanf("%lf", &num11);
        printf("\n\t%lf ^ %lf = %lf\n", num11 ,0.5,pow(num11,0.5));
        printf("\nIf you want to continue to another mode press the respective number, if you want to exit press 0: ");
        scanf("%d", &confirm);
        if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 7  ){
        printf("\n\tMode 7: Cube Root\n\n");
        printf("\tEnter a number: ");
        scanf("%lf", &num12);
        printf("\n\t%lf ^ %lf = %lf\n", num12 ,1.0/3,pow(num12,1/3.0));
        printf("\nIf you want to continue to another mode press the respective number, if you want to exit press 0: ");
        scanf("%d", &confirm);
        if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 8  ){
        printf("\n\tMode 8: Sine\n\n");
        printf("\tThe value of x in sin(x) is in degrees:\n");
        printf("\tEnter the value of x in sin(x): ");
        scanf("%lf", &num13);
        printf("\n\tsin(%lf) = %lf\n", num13, sin(num13*(PI/180)));
        printf("\nIf you want to continue to another mode press the respective number, if you want to exit press 0: ");
        scanf("%d", &confirm);
        if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 9  ){
        printf("\n\tMode 9: Cosine\n\n");
        printf("\tThe value of x in cos(x) is in degrees:\n");
        printf("\tEnter the value of x in cos(x): ");
        scanf("%lf", &num14);
        printf("\n\tcos(%lf) = %lf\n", num14, cos(num14*(PI/180.0)));
        printf("\nIf you want to continue to another mode press the respective number, if you want to exit press 0: ");
        scanf("%d", &confirm);
        if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 10 ){
        printf("\n\tMode 10: Tangent\n\n");
        printf("\tDue to limitations the function works within -360 degrees to 360 degrees\n");
        printf("\tThe value of x in tan(x) is in degrees:\n");
        printf("\tEnter the value of x in tan(x): ");
        scanf("%lf", &num15);
        if (num15 != 90 && num15!=270 && num15!=-90 && num15!=-270 && num15>=-360 && num15<=360){
        printf("\n\ttan(%lf) = %lf\n", num15, tan(num15*(PI/180.0)));
        }
        else{
            if (num15>360 || num15<-360){
            printf("\n\tOut of range\n");
            }
            else{
                printf("\n\ttan(%lf) = Undefined!\n", num15);
            }
        }
        printf("\nIf you want to continue to another mode press the respective number, if you want to exit press 0: ");
        scanf("%d", &confirm);
        if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 11 ){
        printf("\n\tMode 11: Arcsine\n\n");
        printf("\tThe value of x in arcsin(x) is in radians:\n");
        printf("\tEnter the value of x in arcsin(x): ");
        scanf("%lf", &num16);
        printf("\n\tarcsin(%lf) = %lf degrees\n", num16, asin(num16)*(180/PI));
        printf("\nIf you want to continue to another mode press the respective number, if you want to exit press 0: ");
        scanf("%d", &confirm);
        if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 12 ){
        printf("\n\tMode 12: Arccosine\n\n");
        printf("\tThe value of x in arccos(x) is in radians:\n");
        printf("\tEnter the value of x in arccos(x): ");
        scanf("%lf", &num17);
        printf("\n\tarccos(%lf) = %lf degrees\n", num17, acos(num17) * (180/PI));
        printf("\nIf you want to continue to another mode press the respective number, if you want to exit press 0: ");
        scanf("%d", &confirm);
        if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 13 ){
        printf("\n\tMode 13: Arctangent\n\n");
        printf("\tThe value of x in arcctan(x) is in radians:\n");
        printf("\tEnter the value of x in arctan(x): ");
        scanf("%lf", &num18);
        printf("\n\tarctan(%lf) = %lf degrees\n", num18, atan(num18) * (180/PI));
        printf("\nIf you want to continue to another mode press the respective number, if you want to exit press 0: ");
        scanf("%d", &confirm);
        if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 14 ){
        printf("\n\tMode 14: e^n\n\n");
        printf("\tEnter n in e^n: ");
        scanf("%lf", &num19);
        printf("\n\te ^ %lf = %lf\n", num19 ,pow(2.71828182845904523536,num19));
        printf("\nIf you want to continue to another mode press the respective number, if you want to exit press 0: ");
        scanf("%d", &confirm);
        if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 15 ){
        printf("\n\tMode 15: Natural Logarithm(base-e)\n\n");
        printf("\tEnter x in ln(x): ");
        scanf("%lf", &num20);
        if (num20 > 0){
        printf("\n\tln(%lf) = %lf\n", num20 ,log(num20));
        }
        else{
        printf("\n\tln(%lf) = undefined!",num20);
        }
        printf("\nIf you want to continue to another mode press the respective number, if you want to exit press 0: ");
        scanf("%d", &confirm);
        if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 16 ){
        printf("\n\tMode 16: Base-n logarithm\n\n");
        printf("\tEnter n in log(n-base)(x): ");
        scanf("%lf", &num21);
        printf("\tEnter x in log(n-base)(x): ");
        scanf("%lf", &num22);
        if (num21 > 0 && num22 >0){
        printf("\n\tlog(%lf-base)(%lf) = %lf\n", num21,num22 ,log(num22)/log(num21));
        }
        else{
        printf("\n\tlog(%lf-base)(%lf) = undefined!\n", num21,num22);
        }
        printf("\nIf you want to continue to another mode press the respective number, if you want to exit press 0: ");
        scanf("%d", &confirm);
        if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 17 ){
        printf("\n\tMode 17: n-factorial\n\n");
        printf("\tNote: If a decimal number is entered all numbers after the decimal will be discarded!");
        printf("\n\tThe factorial of a decimal or negative number is undefined!\n");
        printf("\tEnter n in n!: ");
        scanf("%d", &num23);

        printf("\n\t%d! = %lld\n", num23 ,factorial(num23));
        printf("\nIf you want to continue to another mode press the respective number, if you want to exit press 0: ");
        scanf("%d", &confirm);
        if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 18 ){
        printf("\n\tMode 18: Cosecant\n\n");
        printf("\tThe value of x in cosec(x) is in degrees:\n");
        printf("\tEnter the value of x in cosec(x): ");
        scanf("%lf", &num24);
        printf("\n\tcosec(%lf) = %lf\n", num24, 1.0/sin(num24*(PI/180.0)));
        printf("\nIf you want to continue to another mode press the respective number, if you want to exit press 0: ");
        scanf("%d", &confirm);
        if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 19 ){
        printf("\n\tMode 19: Secant\n\n");
        printf("\tThe value of x in sec(x) is in degrees:\n");
        printf("\tEnter the value of x in sec(x): ");
        scanf("%lf", &num25);
        printf("\n\tsec(%lf) = %lf\n", num25, cos(num25*(PI/180.0)));
        printf("\nIf you want to continue to another mode press the respective number, if you want to exit press 0: ");
        scanf("%d", &confirm);
        if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 20 ){
        printf("\n\tMode 20: Cotangent\n\n");
        printf("\tThe value of x in cot(x) is in degrees:\n");
        printf("\tEnter the value of x in cot(x): ");
        scanf("%lf", &num26);
        printf("\n\tcot(%lf) = %lf\n", num26, 1.0/tan(num26*(PI/180.0)));
        printf("\nIf you want to continue to another mode press the respective mode number, if you want to exit press 0: ");
        scanf("%d", &confirm);
        if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 21 ){
        printf("\n\tMode 21: Value of pi & e\n");
        printf("\n\tPi: 3.14159 26535 89793 23846 26433 83279 50288 41971 69399 37510 58209 74944\n");
        printf("\n\t e: 2.71828 18284 59045 23536 02874 71352 66249 77572 47093 69995 95749 66967\n");
        printf("\nIf you want to continue to another mode press the respective mode number, if you want to exit press 0: ");
        scanf("%d", &confirm);
        if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 22 ){
    int r1,c1;
    printf("\n\tMode 22: Matrix Addition\n");
    printf("\n\tNote: Enter the elements row wise.Example:\n\n");
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\tA[%d][%d]   ", i+1,j+1);
        }
    printf("\n");
    }
    printf("\n\tEnter the dimensions of the matrices: \n");
    printf("\tEnter the number of rows:");
    scanf("%d", & r1);
    printf("\tEnter the number of columns: ");
    scanf("%d", &c1);
    float a[r1][c1];
    float b[r1][c1];

    printf("\n\tEnter Matrix 1: \n\n");
    for (i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("\tMatrix 1 [%d][%d]: ",i+1,j+1);
            scanf("%f" ,&a[i][j]);

        }
    }
     printf("\n\n\tEnter Matrix 2: \n\n");
    for (i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("\tMatrix 2 [%d][%d]: ",i+1,j+1);
            scanf("%f" ,&b[i][j]);

        }
    }
    printf("\n\t[Matrix 1] + [Matrix 2]: \n\n");
    for (i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("\t %.2f   ",a[i][j]+b[i][j]);

        }
        printf("\n");
    }
    printf("\nIf you want to continue to another mode press the respective mode number, if you want to exit press 0: ");
    scanf("%d", &confirm);
    if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 23 ){
    int r2,c2;
    printf("\n\tMode 23: Matrix Subtraction\n");
    printf("\n\tNote: Enter the elements row wise.Example:\n\n");
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\tA[%d][%d]   ", i+1,j+1);
        }
    printf("\n");
    }
    printf("\n\tOrder : Matrix 1 - Matrix 2\n");
    printf("\n\tEnter the dimensions of the matrix: \n");
    printf("\tEnter the number of rows:");
    scanf("%d", & r2);
    printf("\tEnter the number of columns: ");
    scanf("%d", &c2);
    float c[r2][c2];
    float d[r2][c2];

    printf("\n\tEnter Matrix 1: \n\n");
    for (i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("\tMatrix 1 [%d][%d]: ",i+1,j+1);
            scanf("%f" ,&c[i][j]);

        }
    }
     printf("\n\tEnter Matrix 2: \n\n");
    for (i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("\tMatrix 2 [%d][%d]: ",i+1,j+1);
            scanf("%f" ,&d[i][j]);

        }
    }
    printf("\n\t[Matrix 1] - [Matrix 2]: \n\n");
    for (i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("\t %.2f   ", c[i][j]-d[i][j]);

        }
        printf("\n");
    }
    printf("\nIf you want to continue to another mode press the respective mode number, if you want to exit press 0: ");
    scanf("%d", &confirm);
    if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 24 ){

    int r3,r4,c3,c4;

    printf("\n\tMode 24: Matrix Multiplication\n");
    printf("\n\tNote: Enter the elements row wise.Example:\n\n");
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\tA[%d][%d]   ", i+1,j+1);
        }
    printf("\n");
    }
    printf("\n\tOrder: [Matrix 1] x [Matrix 2]");
    printf("\n\tNote: For a successful multiplication (Column 1 = Row 2)\n\n");

    printf("\tEnter the dimension of matrix 1: \n\tRow 1: ");
    scanf("%d", &r3);
    printf("\tColumn 1: ");
    scanf("%d", &c3);
    printf("\tEnter the dimension of matrix 2: \n\tRow 2: ");
    scanf("%d", &r4);
    printf("\tColumn 2: ");
    scanf("%d", &c4);


    if (c3 != r4)
    {
        printf("\n\tInvalid dimensions! The matrices cannot be multiplied!\n");
        printf("\tFor a successful multiplication (Column 1 = Row 2).\n");
        printf("\nIf you want to continue to another mode press the respective mode number, if you want to exit press 0: ");
    scanf("%d", &confirm);
    if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else{
    float e[r3][c3];
    float f[r4][c4];

    printf("\n\tEnter Matrix 1: \n\n");
    for (i=0;i<r3;i++){
        for(j=0;j<c3;j++){
            printf("\tMatrix 1 [%d][%d]: ",i+1,j+1);
            scanf("%f" ,&e[i][j]);

        }
    }
     printf("\n\n\tEnter Matrix 2: \n\n");
    for (i=0;i<r4;i++){
        for(j=0;j<c4;j++){
            printf("\tMatrix 2 [%d][%d]: ",i+1,j+1);
            scanf("%f" ,&f[i][j]);
        }
    }
    float multimatrix[r3][c4];
    for(i=0; i<r3; i++){
        for(j=0; j<c4; j++){
            sum = 0;
            for(k=0; k<c3; k++){
                sum += e[i][k]*f[k][j];
            }
            multimatrix[i][j] = sum;
        }
    }
    printf("\n\tThe resultant matrix ([Matrix 1] x [Matrix 2]) is of dimension [%d x %d] and is: \n\n",r3,c4);

    for(i=0; i<r3; i++){
        for(j=0; j<c4; j++){
            printf("\t%.2f ",multimatrix[i][j]);
        }
        printf("\n");
    }
    printf("\nIf you want to continue to another mode press the respective mode number, if you want to exit press 0: ");
    scanf("%d", &confirm);
    if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    }
    else if ( case_var == 25 ){
    double discriminant,a,b,c,x1,x2,real,imaginary;
    printf("\n\tMode 25: Roots of Quadratic Roots\n");
    printf("\n\tFormat: a(x^2)+ bx+ c = 0\n\tHere a,b,c are real numbers and are not equal to zero.\n\n");
    printf("\tEnter a: ");
    scanf("%lf",&a);
    printf("\tEnter b: ");
    scanf("%lf",&b);
    printf("\tEnter c: ");
    scanf("%lf",&c);

    discriminant = b * b - 4 * a * c;
    printf("\n\tThe roots are:\n\n");

    if(discriminant > 0){
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("\tRoot1 = %.2lf\n", x1);
        printf("\tRoot2 = %.2lf\n",x2);
    }
    else if( discriminant == 0){
        x1 =  -b / (2 * a);
        x2 = x1;
        printf("\tRoot1 = %.2lf\n", x1);
        printf("\tRoot2 = %.2lf\n",x2);
    }
    else{
        real = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);
        printf("\tRoot1 = %.2lf + i%.2lf\n", real,imaginary);
        printf("\tRoot2 = %.2lf - i%.2lf\n",real,imaginary);

    }
    printf("\nIf you want to continue to another mode press the respective mode number, if you want to exit press 0: ");
    scanf("%d", &confirm);
    if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 26 ){
    printf("\n\tMode 26: Number of Combinations (nCr)\n");
    printf("\n\tEnter the value of n: ");
    scanf("%d",&num27);
    printf("\tEnter the value of r: ");
    scanf("%d",&num28);
    if( num27<num28 ){
        printf("\n\t%dC%d= ERROR!!\n",num27,num28);
        printf("\nIf you want to continue to another mode press the respective mode number, if you want to exit press 0: ");
    scanf("%d", &confirm);
    if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else{
    printf("\n\tThe value of %dC%d = %lld\n",num27,num28, factorial(num27)/(factorial(num28)*factorial(num27-num28)));

    printf("\nIf you want to continue to another mode press the respective mode number, if you want to exit press 0: ");
    scanf("%d", &confirm);
    if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    }
    else if ( case_var == 27 ){
    printf("\n\tMode 27: Degrees to Radians\n");
    printf("\n\tEnter the angle in degree: ");
    scanf("%lf", &num29);
    printf("\n\t%.2lf degree = %.6lf radians\n\n",num29,(num29*(PI/180)));
    printf("\nIf you want to continue to another mode press the respective mode number, if you want to exit press 0: ");
    scanf("%d", &confirm);
    if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 28 ){
    printf("\n\tMode 28: Radians to degree\n");
    printf("\n\tEnter the angle in radians: ");
    scanf("%lf", &num30);
    printf("\n\t%.2lf radians = %.2lf degrees\n\n",num30,(num30*(180/PI)));
    printf("\nIf you want to continue to another mode press the respective mode number, if you want to exit press 0: ");
    scanf("%d", &confirm);
    if (confirm != 0){
            case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 29 ){
    printf("\n\tMode 29: Binary to Decimal\n");
    long long n;
    printf("\n\tEnter a binary number: ");
    scanf("%lld", &n);
    printf("\t%lld in binary = %d in decimal\n\n", n, binaryToDecimal(n));

    printf("\nIf you want to continue to another mode press the respective mode number, if you want to exit press 0: ");
    scanf("%d", &confirm);
    if (confirm != 0){
        case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 30 ){
    printf("\n\tMode 30: Decimal to Octal\n");

    int decimalNumber;
    printf("\n\tEnter a decimal number: ");
    scanf("%d", &decimalNumber);
    printf("\t%d in decimal = %d in octal\n\n", decimalNumber,DecimalToOctal(decimalNumber));
    printf("\nIf you want to continue to another mode press the respective mode number, if you want to exit press 0: ");
    scanf("%d", &confirm);
    if (confirm != 0){
        case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 31 ){
    printf("\n\tMode 31: Hexadecimal to Decimal\n");
    char hex[17];
    long long decimal1=0, place=1;
    int i = 0, val, len;
    printf("\n\tEnter any hexadecimal number: ");
    fflush(stdin);
    gets(hex);
    fflush(stdin);
    len = strlen(hex);
    len--;
    for(i=0; hex[i]!='\0'; i++)
    {
        if(hex[i]>='0' && hex[i]<='9'){
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f'){
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F'){
            val = hex[i] - 65 + 10;
        }
        decimal1 += val * pow(16, len);
        len--;
    }
    printf("\n\t%s in Hexadecimal number = %lld in Decimal number\n\n", hex,decimal1);
    printf("\nIf you want to continue to another mode press the respective mode number, if you want to exit press 0: ");
    scanf("%d", &confirm);
    if (confirm != 0){
        case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 32 ){
    printf("\n\tMode 32: Average\n");
    int totalnum;
    printf("\n\tEnter the total numbers: ");
    scanf("%d",&totalnum);

    float avg[totalnum],sum1=0;
    int i;

    for(i=0;i<totalnum;i++){
      printf("\tEnter element %d: ",i+1);
      scanf("%f", &avg[i]);
    }
    float *avgptr = (int *)malloc(totalnum*sizeof(float));
    avgptr = &avg;
    for(i=0;i<totalnum;i++){
    sum1 += *(avgptr+i);
    }
    printf("\n\tThe average of the given numbers: %f\n",sum1/totalnum);
    printf("\nIf you want to continue to another mode press the respective mode number, if you want to exit press 0: ");
    scanf("%d", &confirm);
    if (confirm != 0){
        case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 33 ){
    printf("\n\tMode 33: Area of Circle\n");
    printf("\n\tEnter the radius: ");
    scanf("%lf",&num31);
    printf("\n\tCircumference: %lf\n",2*PI*num31);
    printf("\tArea: %lf\n\n",PI*pow(num31,2));
    printf("\nIf you want to continue to another mode press the respective mode number, if you want to exit press 0: ");
    scanf("%d", &confirm);
    if (confirm != 0){
        case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else if ( case_var == 34 ){
    printf("\n\tMode 34: Area of Triangle\n");
    Sides triangle;
    printf("\n\tEnter the sides of the triangle: ");
    printf("\n\tSide 1: ");
    scanf("%f",&triangle.a);
    printf("\tSide 2: ");
    scanf("%f",&triangle.b);
    printf("\tSide 1: ");
    scanf("%f",&triangle.c);
    if(AreaTriangle(triangle.a,triangle.b,triangle.c)!=-1){
        printf("\n\tArea of the triangle: %f\n\n",AreaTriangle(triangle.a,triangle.b,triangle.c));
        printf("\nIf you want to continue to another mode press the respective mode number, if you want to exit press 0: ");
    scanf("%d", &confirm);
    if (confirm != 0){
        case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else{
        printf("\n\tNot a valid triangle! Try again!\n\n");
        printf("\nIf you want to continue to another mode press the respective mode number, if you want to exit press 0: ");
    scanf("%d", &confirm);
    if (confirm != 0){
        case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    }
    else if ( case_var == 35 ){
    printf("\n\tMode 35: Unit Convertions\n");
    printf("\n\t1.inch-->cm   6.m-->yd       11.km/h-->m/s   16.g-->oz");
    printf("\n\t2.cm-->inch   7.mile-->km    12.m/s-->km/h   17.gal(US)-->l");
    printf("\n\t3.ft-->m      8.km-->mile    13.lb-->kg      18.l-->gal(US)");
    printf("\n\t4.m-->ft      9.acre-->m^2   14.kg-->lb      19.Fahrenheit-->Celsius");
    printf("\n\t5.yd-->m     10.m^2-->acre   15.oz-->g       20.Celsius-->Fahrenheit");
    int loop2=1,conv;
    printf("\n\n\tEnter your selection: ");
    scanf("%d",&conv);
        if( conv == 1){
            float conv_m1;
            printf("\tEnter the value: ");
            scanf("%f",&conv_m1);
            printf("\t%f inch--> %f cm\n",conv_m1,2.54*conv_m1);
        }
        else if( conv == 2){
            float conv_m2;
            printf("\tEnter the value: ");
            scanf("%f",&conv_m2);
            printf("\t%f cm--> %f inch\n",conv_m2,0.393701*conv_m2);
        }
        else if( conv == 3){
            float conv_m3;
            printf("\tEnter the value: ");
            scanf("%f",&conv_m3);
            printf("\t%f ft--> %f m\n",conv_m3,0.3048*conv_m3);
        }
        else if( conv == 4){
            float conv_m4;
            printf("\tEnter the value: ");
            scanf("%f",&conv_m4);
            printf("\t%f m--> %f ft\n",conv_m4,3.28084*conv_m4);
        }
        else if( conv == 5){
            float conv_m5;
            printf("\tEnter the value: ");
            scanf("%f",&conv_m5);
            printf("\t%f yd--> %f m\n",conv_m5,0.9144*conv_m5);
        }
        else if( conv == 6){
            float conv_m6;
            printf("\tEnter the value: ");
            scanf("%f",&conv_m6);
            printf("\t%f m--> %f yd\n",conv_m6,1.09361*conv_m6);
        }
        else if( conv == 7){
            float conv_m7;
            printf("\tEnter the value: ");
            scanf("%f",&conv_m7);
            printf("\t%f mile--> %f km\n",conv_m7,1.60934*conv_m7);
        }
        else if( conv == 8){
            float conv_m8;
            printf("\tEnter the value: ");
            scanf("%f",&conv_m8);
            printf("\t%f km--> %f mile\n",conv_m8,0.621371*conv_m8);
        }
        else if( conv == 9){
            float conv_m9;
            printf("\tEnter the value: ");
            scanf("%f",&conv_m9);
            printf("\t%f acre--> %f m^2\n",conv_m9,4046.86*conv_m9);
        }
        else if( conv == 10){
            float conv_m10;
            printf("\tEnter the value: ");
            scanf("%f",&conv_m10);
            printf("\t%f m^2--> %f acre\n",conv_m10,0.000247105*conv_m10);
        }
        else if( conv == 11){
            float conv_m11;
            printf("\tEnter the value: ");
            scanf("%f",&conv_m11);
            printf("\t%f km/h--> %f m/s\n",conv_m11,0.277778*conv_m11);
        }
        else if( conv == 12){
            float conv_m12;
            printf("\tEnter the value: ");
            scanf("%f",&conv_m12);
            printf("\t%f m/s--> %f km/h\n",conv_m12,3.6*conv_m12);
        }
        else if( conv == 13){
            float conv_m13;
            printf("\tEnter the value: ");
            scanf("%f",&conv_m13);
            printf("\t%f lb--> %f kg\n",conv_m13,0.453592*conv_m13);
        }
        else if( conv == 14){
            float conv_m14;
            printf("\tEnter the value: ");
            scanf("%f",&conv_m14);
            printf("\t%f kg--> %f lb\n",conv_m14,2.20462*conv_m14);
        }
        else if( conv == 15){
            float conv_m15;
            printf("\tEnter the value: ");
            scanf("%f",&conv_m15);
            printf("\t%f oz--> %f g\n",conv_m15,28.3495*conv_m15);
        }
        else if( conv == 16){
            float conv_m16;
            printf("\tEnter the value: ");
            scanf("%f",&conv_m16);
            printf("\t%f g--> %f oz\n",conv_m16,0.035274*conv_m16);
        }
        else if( conv == 17){
            float conv_m17;
            printf("\tEnter the value: ");
            scanf("%f",&conv_m17);
            printf("\t%f gal(US)--> %f l\n",conv_m17,3.78541*conv_m17);
        }
        else if( conv == 18){
            float conv_m18;
            printf("\tEnter the value: ");
            scanf("%f",&conv_m18);
            printf("\t%f l--> %f gal(US)\n",conv_m18,0.264172*conv_m18);
        }
        else if( conv == 19){
            float conv_m19;
            printf("\tEnter the value: ");
            scanf("%f",&conv_m19);
            printf("\t%f Fahrenheit--> %f Celsius\n",conv_m19,((conv_m19-32)*(5/9.0)));
        }
        else if( conv == 20){
            float conv_m20;
            printf("\tEnter the value: ");
            scanf("%f",&conv_m20);
            printf("\t%f Celsius--> %f Fahrenheit\n",conv_m20,((conv_m20*9.0/5.0)+32));
        }
        else{
            printf("\n\tInvalid input!\n");
        }
        printf("\nIf you want to continue to another mode press the respective mode number, if you want to exit press 0: ");
    scanf("%d", &confirm);
    if (confirm != 0){
        case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    else{
        printf("\n\n\tInvalid Input!\n\n");
        printf("\nIf you want to continue to another mode press the respective mode number, if you want to exit press 0: ");
    scanf("%d", &confirm);
    if (confirm != 0){
        case_var = confirm;
        }
        else{
            loop = 0;
        }
    }
    }
    printf("\n**************** Thank You User ***********************\n");
    return 0;
}

long long factorial(int num1){
    if (num1 >= 1){
        return num1*factorial(num1-1);
    }
    else{
       return 1;
}
}
int binaryToDecimal(long long n) {
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        dec += rem * pow(2, i);
        n /= 10;
        ++i;
    }
    return dec;
}
int DecimalToOctal(int decimalNumber){
    int octalNumber = 0, i = 1;
    while (decimalNumber != 0){
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    return octalNumber;
}
float AreaTriangle(float a, float b, float c){
    if (a < 0 || b < 0 || c <0 || (a+b <= c) || (a+c <=b) || (b+c <=a))
    {
        return -1;
    }
    float s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

