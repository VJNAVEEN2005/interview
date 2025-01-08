# Interview

[https://github.com/VJNAVEEN2005/interview](https://github.com/VJNAVEEN2005/interview)

# Interview

## **1. Find the largest number among the three numbers.**

### c++:

```cpp
#include <iostream>

int main(){
    
    int a, b, c, i;
    printf("Enter the Number : ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c){
        printf("The largest value %d",a);
    }
    else if(b>a && b>c){
        printf("The largest value %d",b);
    }
    else{
        printf("The largest value %d",c);
    }

}
```

### java:

```java

import java.util.Scanner;

public class _1_largest{
    public static void main(String[] args){

        Scanner sc = new  Scanner(System.in);

        System.out.println("Enter First Number : ");
        int a = sc.nextInt();

        System.out.println("Enter Second Number : ");
        int b = sc.nextInt();

        System.out.println("Enter Third Number : ");
        int c = sc.nextInt();

        if (a>b && a>c) {
            System.out.println(a+" is Largest Number");
        }
        else if(b>a && b>c){
            System.out.println(b+" is Larger Number");
        }
        else{
            System.out.println(c+" is Largest Number");
        }
    }
}
```

## Ternary operator (java):

The ternary operator in Java is a concise way to write an if-else statement in a single line. It has the following syntax:

```java
result = (condition) ? expressionIfTrue : expressionIfFalse;
```

Here's how it works:

- The condition is evaluated first.
- If the condition is true, the expression before the colon (:) is executed.
- If the condition is false, the expression after the colon (:) is executed.

For our largest number problem, we can use the ternary operator like this:

```java
int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
System.out.println(largest + " is the Largest Number");
```

This nested ternary operation first compares a and b, then compares the larger of those with c to determine the largest number.

### java:

```java
import java.util.Scanner;

public class _1_largest{
    public static void main(String[] args){

        Scanner sc = new  Scanner(System.in);

        System.out.println("Enter First Number : ");
        int a = sc.nextInt();

        System.out.println("Enter Second Number : ");
        int b = sc.nextInt();

        System.out.println("Enter Third Number : ");
        int c = sc.nextInt();

		    // New code

        int largest1 = a>b?a:b;
        int largest2 = c>largest1 ? c:largest1;

        System.out.println(largest2+" is the largest number");
    }
}
```

## **2.Write a Program to check whether a number is prime or not.**

### c++:

```cpp
#include <iostream>
using namespace std;

int main(){

    int a ,i ;
    int count = 0;

    cout<<"Enter the number : ";
    cin>>a;

    if(a<=0){
        cout<<"It is not a prime number";
    }

    else{
        for(i=1;i<=a;i++){
            if((a%i)==0){
                count++;
            }
        }
        if(count==2){
            cout<<"It is the prime number";
        }
        else{
            cout<<"It is not a prime number";
        }
    }

}
```

### java:

```java

import java.util.Scanner;

public class _2_primenumber{
    public static void main(String[] args){

        int count = 0;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the Number : ");
        int a = sc.nextInt();

        if(a<=0){
            System.out.println("It is not a prime number");
        }
        else{
            for(int i=1;i<=a;i++){
                if(a%i == 0){
                    count ++;
                }
            }
            if(count == 2){
                System.out.println("It is a prime Number");
            }
            else{
                System.out.println("It is not a prime number");
            }
        }

    }
}
```

## New topic : pow()

The pow() function in C++ is used to calculate the power of a number. It is part of the <math.h> library and has the following syntax:

```cpp
pow(base, exponent);
```

Here's a brief explanation of the pow() function:

- It takes two parameters: the base and the exponent.
- It returns the result of raising the base to the power of the exponent.
- Both parameters and the return value are of type double.

Example usage:

```cpp
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double base = 2.0;
    double exponent = 3.0;
    
    double result = pow(base, exponent);
    
	  cout<<"Answer : "<<result;
    
    return 0;
}
```

This program will output: "2 raised to the power of 3 is: 8"

Note that you need to include the <math.h> header to use the pow() function in your C++ program.

## **3. Write a C program to calculate Compound Interest.**

### c++:

```cpp
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    double principle = 1000;       // amount they have bought

    double intrest = 5;         // it is %

    int time = 2;               // time in year or any time

    double amount = principle * pow( 1 + intrest/100,time) ;

    double compund_intrest = amount - principle;

    cout<<"The CI = "<<compund_intrest;

}
```

### java:

```java
public class _3_compound_intrest{
    public static void main(String[] args){

        double principle = 1000;
        double intrest = 5;
        double time = 2;

        double amount = principle * Math.pow(1 + intrest / 100 , time);

        double CI = amount - principle;

        System.out.println(CI);

    }
}
```

## **4. Write a Program in C to Swap the values of two variables without using any extra variable.**

### c++:

```cpp
#include <iostream>
using namespace std;

int main(){

    int a = 20;
    int b = 40;

    cout<<"a : "<<a<<", b : "<<b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"\na : "<<a<<", b : "<<b;

}
```

### java:

```java
public class _4_swap_without_extra_variable{
    public static void main(String[] args){

        int a = 5;
        int b = 10;

        System.out.println("a : "+a+", b : "+b);

        a = a + b;
        b = a - b;
        a = a - b;

        System.out.println("\na : "+a+", b : "+b);

    }
}
```

## **5. Write a Program to Replace all 0’s with 1’s in a Number.**

### c++:

```cpp
#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int N = 10106570;
    int ans = 0;
    int i = 0;

    while(N != 0){
        if((N%10) == 0){
            ans = ans + 1 * pow(10,i);
        }
        else{
            ans = ans + (N%10) * pow(10,i);
        }
        N = N/10;
        i++;
    }

    cout<<ans;

}
```

### java:

```java
public class _5_replace_0_with_1{
    public static void main(String[] args){

        int N = 1301032;
        int ans = 0;
        int i = 0;

        while(N != 0){
            if(N%10 == 0){
                ans = (int) (ans + 1 * Math.pow(10, i));
            }
            else{
                ans =  (int) (ans + (N%10) * Math.pow(10,i));
            }

            N = N / 10;
            i++;
        }

        System.out.println(ans);

    }
}
```

## **6. Write a Program to convert the binary number into a decimal number.**

### c++:

```cpp
#include<iostream>
using namespace std;

int main(){
    int N = 11011;
    int a = 1;
    int ans = 0;

    while(N != 0){
        ans = ans + (N%10) * a;
        N = N/10;
        a = a * 2;
    }

    cout<<ans;
}
```

### java:

```java
public class _6_binary_to_decimal{
    public static void main(String[] args){

        int N = 11011;
        int a = 1;
        int ans = 0;

        while(N != 0){
            ans = ans + (N%10) * a;
            N = N/10;
            a =  a * 2;
        }

        System.out.println(ans);

    }
}
```

## **7.  Write a Program to check if the year is a leap year or not.**

### c++:

```cpp
#include<iostream>
using namespace std;

int main(){

    int year;

    cout<<"Enter the leap year : ";
    cin>>year;

    if(year%400 == 0){
        cout<<"It is a leap Year";
    }
    else if(year%100 == 0){
        cout<<"Not a leap year";
    }
    else if(year%4 == 0){
        cout<<"It is a leap year";
    }
    else{
        cout<<"It is not a leap year";
    }

}
```

### java:

```cpp

import java.util.Scanner;

public class _7_leap_year{
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int year;
        
        System.out.println("Enter the year : ");
        year = sc.nextInt();

        if(year%400 == 0){
            System.out.println("Leap Year");
        }
        else if(year%100 == 0){
            System.out.println("Not a Leap Year");
        }
        else if(year%4 == 0){
            System.out.println("Leap Year");
        }
        else{
            System.out.println("Not a Leap Year");
        }
        
    }
}
```

## **8. Write a program to Factorial of a Number.**

### c++:

```cpp
#include<iostream>
using namespace std;

unsigned long long int factorial(int a){
    unsigned long long int ans = 1;
    for(int i = 1 ; i<=a ; i++){
        ans = ans * i;
    }
    return ans;
}

double factorial_recursion(int a){
    if(a == 0){
        return 1;
    }
    return a * factorial_recursion(a-1);
}

int main(){

    cout<<factorial(13)<<endl;
    cout<<factorial_recursion(9)<<endl;
    

}
```

### java:

```cpp
public class _8_factorial{

    static double factorial(int a){
        double ans = 1;
        for(int i=1 ; i<=a ; i++){
            ans = ans * i;
        }
        return ans;
    }

    static double factorial_recursion(int a){
        if(a==0){
            return 1;
        }
        return a * factorial_recursion(a-1); 
    }

    public static void main(String[] args){

        System.out.println(factorial(5));
        System.out.println(factorial_recursion(5));

    }
}
```

## **9. Write a Program to Check if a number is an Armstrong number or not.**

### Armstrong Number :

An Armstrong number is a number that is equal to the sum of its own digits raised to the power of the number of digits. For example:

- 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
- 370 is an Armstrong number because 3^3 + 7^3 + 0^3 = 27 + 343 + 0 = 370

To check if a number is an Armstrong number:

1. Count the number of digits in the number
2. For each digit, raise it to the power of the number of digits
3. Sum these values
4. If the sum equals the original number, it's an Armstrong number

Armstrong numbers are also known as Narcissistic numbers, pluperfect digital invariants, or plus perfect numbers.

### c++:

```cpp
#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int a;
    int ans = 0;
    int count = 0;

    cout<<"Enter the number : ";
    cin>>a;

    int N = a;

    while(N != 0){
        N = N/10;
        count++;
    }

    N = a;

    while(N != 0){
        ans = ans + pow((N%10),count);
        N = N/10;
    }

    (a == ans) ? cout<<"It is Armstrong" : cout<<"It is not Armstrong";
}
```

### java:

```cpp

import java.util.Scanner;

public class _9_armstrong{
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        int a;
        int ans = 0;
        int count = 0;

        System.out.println("Enter the Number : ");
        a = sc.nextInt();

        int N = a;

        while(N != 0){
            N = N/10;
        count++;
        }

        N = a;

        while(N != 0){
        ans = ans + (int) Math.pow((N%10),count);
        N = N/10;
        }

        String print = (a == ans) ? "Armstrong" : "Not Armstrong";

        System.out.println(print);

    }
}
```

## **10. Write a program to Find all the roots of a quadratic equation in C.**

### c++:

```cpp
#include<iostream>
#include<math.h>
using namespace std;

int main(){

    double a = 2.3;
    double b = 4;
    double c = 5.6;

    double d = pow(b,2) - (4*a*c);

    double ans1 , ans2;
    double cans1 , cans2;

    if(d == 0){
        cout<<"Roots are real and equale"<<endl;
        ans2 = ans1 = (-b / (2*a) );
        cout<<ans1<<endl<<ans2;
    } 
    else if (d > 0){
        cout<<"Roots are real and different"<<endl;
        ans1 = ((-b + sqrt(d)) / (2*a) );
        ans2 = ((-b - sqrt(d)) / (2*a) );
        cout<<ans1<<endl<<ans2;
    }
    else{
        cout<<"Roots are complex"<<endl;
        ans1 = (-b/(2*a));
        cans1 = sqrt(-d) / (2*a);    // Take the square root of the positive value of d
        /*
        The issue is that when the discriminant 𝑑=𝑏^2−4𝑎𝑐 is negative,
        taking the square root of d in sqrt(d) results in NaN (not a number)
        */
        cout<<ans1<<"+i"<<cans1<<endl<<ans1<<"-i"<<cans1;
    }

}
```

### java:

```java
public class _10_roots_of_quadratic{
    public static void main(String[] args){

        double a = 2.3;
    double b = 4;
    double c = 5.6;

    double d = Math.pow(b,2) - (4*a*c);

    double ans1 , ans2;
    double cans1 , cans2;

    if(d == 0){
        System.out.println("Root are real and equal");
        ans2 = ans1 = (-b / (2*a) );
        System.out.println(ans1+"\n"+ans2);
    } 
    else if (d > 0){
        System.out.println("Roots are real and different");
        ans1 = ((-b + Math.sqrt(d)) / (2*a) );
        ans2 = ((-b - Math.sqrt(d)) / (2*a) );
        System.out.println(ans1+"\n"+ans2);
    }
    else{
        System.out.println("Roots are complex");
        ans1 = (-b/(2*a));
        cans1 = Math.sqrt(-d) / (2*a);    // Take the square root of the positive value of d
        /*
        The issue is that when the discriminant 𝑑=𝑏^2−4𝑎𝑐 is negative,
        taking the square root of d in sqrt(d) results in NaN (not a number)
        */
        System.out.println(ans1+"+i"+cans1+"\n"+ans1+"-i"+cans1);
    }

    }
}
```

## **11. Write a Program to reverse a number.**

### c++:

```cpp
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    
    int a = 39402;
    int N = a;
    int ans = 0;
    int count = 0;

    while(N != 0){
        N = N / 10;
        count++;        
    }

    while(a != 0){
        count--;
        ans = ans + (a%10)*pow(10,count);
        a = a / 10;
    }

    cout<<ans;
}
```

### java:

```java
public class _11_reverse_number{
    public static void main(String[] args){

    int a = 39402;
    int N = a;
    int ans = 0;
    int count = 0;

    while(N != 0){
        N = N / 10;
        count++;        
    }

    while(a != 0){
        count--;
        ans = ans + (a%10) * (int) Math.pow(10,count);
        a = a / 10;
    }

    System.out.println(ans);

    }
}
```

## **12. Check whether a number is a palindrome.**

### c++:

```cpp
// Normal Method
#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int a = 39493;
    int N = a;
    int ans = 0;
    int count = 0;

    while(N != 0){
        N = N / 10;
        count++;        
    }

    N = a;

    while(a != 0){
        count--;
        ans = ans + (a%10)*pow(10,count);
        a = a / 10;
    }

    N == ans ? cout<<"Palindrome" : cout<<"Not Palindrome" ;
     
}
```

### java:

```java
// By using StringBuilder
public class _12_palindrome{
    public static void main(String[] args){

        int a = 39493;
        String N = String.valueOf(a);

        StringBuilder temp = new StringBuilder();

        temp.append(N);
        temp.reverse();

        N = String.valueOf(temp);

        String output = (a == Integer.valueOf(N) ? "Palindrome" : "Not Palindrome");
        
        System.out.println(output);

    }
}
```

## 13. Reverse a String

cpp:

```java
#include<iostream>
using namespace std;

int main(){
    string str = "Hello";
    int start = 0;
    int end = str.length()-1;

    while(start<end){
        swap(str[start],str[end]);
        start++;
        end--;
    }

    cout<<str;
}
```

## 14. Single number

cpp: 

```cpp
#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int result = 0;
    for (size_t i = 0; i < nums.size(); ++i) {
        result = result ^ nums[i];                        // XOR - operation
    }
    return result;
}

int main() {
   
    int arr[] = {4, 1, 2, 1, 2};
    vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0]));

    // Find and display the single number
    int single = singleNumber(nums);
    cout << "The single number is: " << single << endl;

    return 0;
}

```

## 15. Union

cpp: 

```cpp

#include <iostream>
#include <vector>
#include <set>
using namespace std;

void findUnion(const vector<int>& arr1, const vector<int>& arr2) {
    set<int> unionSet;

    // Insert elements of the first array into the set
    for (size_t i = 0; i < arr1.size(); ++i) {
        unionSet.insert(arr1[i]);
    }

    // Insert elements of the second array into the set
    for (size_t i = 0; i < arr2.size(); ++i) {
        unionSet.insert(arr2[i]);
    }

    // Display the union of the two arrays
    cout << "Union: { ";
    for (set<int>::iterator it = unionSet.begin(); it != unionSet.end(); ++it) {
        cout << *it << " ";
    }
    cout << "}" << endl;
}

int main() {
    // Example input
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};

    // Convert to vectors for compatibility with the function
    vector<int> array1(arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]));
    vector<int> array2(arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]));

    // Find and display the union
    findUnion(array1, array2);

    return 0;
}



```

## 16. Missing Number Using XOR

cpp: 

```cpp

#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(const vector<int>& nums) {
    int n = nums.size();
    int xorAll = 0, xorNums = 0;

    // XOR all numbers from 0 to n
    for (int i = 0; i <= n; ++i) {
        xorAll ^= i;
    }

    // XOR all elements in the array
    for (size_t i = 0; i < nums.size(); ++i) {
        xorNums ^= nums[i];
    }

    return xorAll ^ xorNums; // The missing number
}

int main() {
    int arr[] = {3, 0, 1};
    vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0])); // Initialize vector for C++98

    cout << "Missing Number: " << findMissingNumber(nums) << endl;
    return 0;
}



```

## 17. Best Time To Buy And Sell Stock

cpp: 

```cpp

#include <iostream>
#include <vector>
using namespace std;

int maxProfit(const vector<int>& prices) {
    int minPrice = 1e9; // Set an initial large value for minimum price
    int maxProfit = 0;

    for (size_t i = 0; i < prices.size(); ++i) {
        // Update the minimum price so far
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
        // Calculate profit if we sell at current price and update maxProfit
        else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }

    return maxProfit;
}

int main() {
    // Initialize the vector using an array and constructor
    int arr[] = {7, 1, 5, 3, 6, 4};
    vector<int> prices(arr, arr + sizeof(arr) / sizeof(arr[0])); // Convert array to vector

    cout << "Maximum Profit: " << maxProfit(prices) << endl;
    return 0;
}


```

## 18. Move Zeroes

cpp : 

```cpp
#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int nonZeroIndex = 0; // Tracks the position to place the next non-zero element

    // Move all non-zero elements to the beginning of the array
    for (size_t i = 0; i < nums.size(); ++i) {
        if (nums[i] != 0) {
            nums[nonZeroIndex++] = nums[i];
        }
    }

    // Fill the rest of the array with zeros
    while (nonZeroIndex < nums.size()) {
        nums[nonZeroIndex++] = 0;
    }
}

int main() {
    // Initialize the input array
    int arr[] = {0, 1, 0, 3, 12};
    vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0])); // Convert array to vector

    moveZeroes(nums); // Call the function to move zeroes

    // Print the modified array
    cout << "Modified Array: ";
    for (size_t i = 0; i < nums.size(); ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
```

## 19. Reversing

cpp : 

```cpp
#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    int left = 0;                 // Start pointer
    int right = s.size() - 1;     // End pointer

    // Swap characters while left < right
    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

int main() {
    // Initialize the input array
    char arr[] = {'h', 'e', 'l', 'l', 'o'};
    vector<char> s(arr, arr + sizeof(arr) / sizeof(arr[0])); // Convert array to vector

    reverseString(s); // Call the function to reverse the string

    // Print the reversed string
    cout << "Reversed String: ";
    for (size_t i = 0; i < s.size(); ++i) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}
```

## 20. Contains Duplicate

cpp

```cpp

#include <iostream>
#include <vector>
#include <set> // Use set instead of unordered_set
using namespace std;

bool containsDuplicate(const vector<int>& nums) {
    set<int> seen; // To store unique elements

    for (size_t i = 0; i < nums.size(); ++i) {
        // Check if the number is already in the set
        if (seen.find(nums[i]) != seen.end()) {
            return true; // Duplicate found
        }
        // Add the number to the set
        seen.insert(nums[i]);
    }

    return false; // No duplicates found
}

int main() {
    // Initialize the input array
    int arr[] = {1, 2, 3, 1};
    vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0])); // Convert array to vector

    // Call the function and print the result
    cout << "Contains Duplicate: " << (containsDuplicate(nums) ? "true" : "false") << endl;

    return 0;
}


```

## 21. Two Sum

cpp

```cpp

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }

        return result;
    }
};

int main()
{
    int arr[] = {2, 7, 11, 15};
    vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0]));

    Solution s;

    vector<int> result = s.twoSum(nums, 9);

    cout << "Result: " << result.back() << " ";
    result.pop_back();
    cout << result.back() << endl;
}

```