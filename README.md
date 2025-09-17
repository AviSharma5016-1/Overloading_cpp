# Function and Operator Overloading in C++  

## Aim  
To study and implement **Function Overloading** and **Operator Overloading** in C++.  

## Theory  
In C++, **overloading** is a key feature of **polymorphism** that allows the same function or operator to perform different tasks depending on context. This enhances flexibility, expressiveness, and code readability.  

### Function Overloading  
Function overloading allows multiple functions with the **same name** but **different parameter lists**. The compiler determines which version to execute at **compile time** based on the arguments.  

**Key Characteristics:**  
- Functions must differ in the number or type of parameters.  
- Return type alone cannot distinguish overloaded functions.  
- Represents **compile‑time polymorphism (static binding)**.  
- Improves readability by grouping logically similar operations.  

**Advantages:**  
- Avoids unnecessary multiple function names.  
- Makes code easier to understand and maintain.  
- Provides flexibility for different data types and argument counts.  

### Operator Overloading  
Operator overloading redefines the behavior of standard operators (`+`, `-`, `*`, etc.) for **user‑defined types** such as classes. This allows objects to be manipulated using natural expressions (e.g., `c1 + c2` for complex numbers).  

**Key Characteristics:**  
- Implemented using the keyword `operator`.  
- Can be defined as a member function or as a friend function.  
- Certain operators (`::`, `.`, `.*`, `?:`) cannot be overloaded.  
- Enhances abstraction and makes code more intuitive.  

**Advantages:**  
- Allows user‑defined types to behave like built‑in types.  
- Supports natural mathematical and logical operations on objects.  
- Simplifies code and improves readability.  

## Algorithms  

### Function Overloading (Addition Class)  
1. Start.  
2. Define a class `Addition`.  
3. Create three overloaded methods:  
   - `sum(int a, int b)` → returns sum of two integers.  
   - `sum(int a, int b, int c)` → returns sum of three integers.  
   - `sum(double d, double e)` → returns sum of two doubles.  
4. In `main()`:  
   - Create an object `obj`.  
   - Call `obj.sum(10, 20)`.  
   - Call `obj.sum(10, 20, 20)`.  
   - Call `obj.sum(10.8, 20.34)`.  
   - Display results.  
5. End.  

### Function Overloading (UserInfo Class)  
1. Start.  
2. Define a class `UserInfo`.  
3. Overload the method `show()` with different parameter lists:  
   - `show(string name)` → prints name.  
   - `show(string name, int age)` → prints name and age.  
   - `show(string name, string city)` → prints name and city.  
   - `show(string name, int age, string city)` → prints all details.  
4. In `main()`:  
   - Create an object `u`.  
   - Call each overloaded version with proper arguments.  
   - Display results.  
5. End.  

### Operator Overloading (Complex Numbers)  
1. Start.  
2. Define a class `Complex` with members `real`, `imag`.  
3. Add a constructor to initialize values.  
4. Overload the `+` operator:  
   - Add real parts.  
   - Add imaginary parts.  
   - Return a new `Complex` object.  
5. Define a method `display()` to show results.  
6. In `main()`:  
   - Create objects `c1`, `c2`.  
   - Compute `c3 = c1 + c2`.  
   - Display `c3`.  
7. End.  

### Operator Overloading (Book Class)  
1. Start.  
2. Define a class `Book` with members `title`, `pages`.  
3. Create a constructor to initialize values.  
4. Overload the `-` operator:  
   - Concatenate titles with `" & "`.  
   - Add page counts.  
   - Return a new `Book` object.  
5. Define a method `display()` to show details.  
6. In `main()`:  
   - Create objects `b1`, `b2`.  
   - Compute `b3 = b1 - b2`.  
   - Display all books.  
7. End.  

## Conclusion  
This experiment demonstrates the importance of **overloading** in C++.  
- **Function Overloading** allows the same function name with different parameter lists, creating flexible and intuitive usage.  
- **Operator Overloading** redefines standard operators for user‑defined types, enabling objects to behave like built‑in types.  
- Both features represent **compile‑time polymorphism**, resolved by the compiler before execution.  
- Overloading enhances readability, abstraction, and reusability, making programs more professional and maintainable.  
