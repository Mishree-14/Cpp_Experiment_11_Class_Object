# Cpp Experiment-11: Class and Object

## Aim

To understand the concept of Objects and Classes in C++ and calculate the Volume of a Cuboid using different approaches such as direct initialization, user input, and member functions.

## Objectives

To learn the use of class and object in C++.

To explore the role of data members and member functions.

To implement volume calculation using different methods:

Class with user input method.

Class with direct values assigned inside object.

Class with a member function for volume.

Class with encapsulation (private data and public method).

To compare different approaches and understand the advantages of encapsulation and abstraction.

## Theory

In C++, Object-Oriented Programming (OOP) allows us to design programs using objects that represent real-world entities. The main pillars of OOP are Classes, Objects, Encapsulation, Abstraction, Inheritance, and Polymorphism. In this experiment, we focus on Classes, Objects, Encapsulation, and Abstraction.

### Class and Object

A class is a blueprint or template that defines the structure and behavior of objects.

Data members (variables) store the state of the object, while member functions define the behavior or operations on that data.

An object is an instance of a class, which means each object has its own copy of the data members but uses the same member functions.

Example: In the Cuboid class, length, width, and height are data members, and volume() is a member function. Each cuboid object can store different dimensions but can use the same volume() function to calculate its volume.

### Encapsulation

Encapsulation is the process of wrapping data and functions together in a class.

It helps protect data by controlling access using access specifiers (public, private, protected).

In our experiment, using private variables with a public volume() method ensures that the dimensions cannot be modified directly, reducing errors.

### Abstraction

Abstraction hides unnecessary implementation details from the user.

Users interact with public methods like getVolume() or display(), without worrying about how the calculation is performed internally.

This makes programs simpler to use and understand.

### Reusability and Modularity

Member functions can be reused for multiple objects. For example, volume() can calculate volume for any cuboid object without rewriting the formula.

Modular code improves readability, maintainability, and reduces redundancy.

### Data Members and Member Functions

Data Members: Variables storing object properties (length, width, height).

Member Functions: Functions that operate on these data members. They can take input, process data, or return values.

In this experiment:

input() → Takes user input for dimensions.

volume() → Calculates volume using stored dimensions.

display() → Shows the result to the user.

### Observations from Different Approaches

Using public data members directly is easy but not secure.

Using methods for input and calculation improves interactivity and modularity.

Using private data members with public methods is best practice, ensures encapsulation, and prevents accidental modification of data.

### Importance of Classes in Real-World Programming

Classes help model real-world objects in software.

They allow multiple objects to coexist with different states but shared behaviors.

They form the foundation for advanced OOP concepts like inheritance and polymorphism.

### Key Concepts learned:

Encapsulation → Wrapping of data and functions together.

Access Specifiers → public and private control access to data.

Reusability → Methods can be reused for multiple objects.

Abstraction → Hiding implementation details (e.g., keeping dimensions private but providing a public volume() method).

## Comparison of Programs

| Program Version                          | Input Method                 | Data Members Access | Volume Calculation Method | Output Example |
|------------------------------------------|------------------------------|-------------------|---------------------------|----------------|
| User_Input_Volume_using_ClassMethod      | User enters values via method | Public            | Member method `volume()`  | Volume of cuboid displayed after input |
| Volume_using_Class_Cuboid                | Values directly assigned      | Public            | Formula in `main()`       | Volume calculated directly |
| vol_of_Cuboid_Class_Method               | Values initialized inside class | Public          | Member method `volume()`  | Volume returned by function |
| Cuboid with Encapsulation (Private data) | Values private, method public | Private           | Public method `volume()`  | Volume securely calculated |

## Algorithms 
### User Input of Volume using Class and Method

Start.

Define a class Cuboid with public data members length, width, height.

Define a member function input() to take values from the user.

Define a member function volume() to calculate length * width * height.

Define a member function display() to show the calculated volume.

Create an object of Cuboid.

Call input() to get user input.

Call volume() and display() to calculate and show the volume.

Stop.

### Volume using Class Cuboid (Direct Assignment)

Start.

Define a class Cuboid with public data members length, width, height.

Create an object of Cuboid and assign values directly to data members.

In main(), calculate volume using length * width * height.

Display the calculated volume.

Stop.

### Vol of Cuboid (Values Initialized in Object)

Start.

Define a class Cuboid with public data members length, width, height.

Create a constructor or initialize values inside the object.

Define a member function volume() that returns length * width * height.

Create an object of Cuboid.

Call volume() and display the result.

Stop.

### Cuboid with Encapsulation (Private Data)

Start.

Define a class Cuboid with private data members length, width, height.

Define a public method setDimensions(l, w, h) to assign values.

Define a public method volume() to calculate and return length * width * height.

Create an object of Cuboid.

Call setDimensions() to assign values.

Call volume() to get and display the calculated volume.

Stop

## Program Descriptions

### 1. User Input of Volume using Class and Method

Takes height, width, and length from user input using a member function.

Volume is calculated inside a class method and displayed.

Demonstrates interaction between user and object.

### 2. Volume using Class Cuboid

Values are directly assigned to public data members of the object.

Volume calculated in main() using formula.

Simple but not secure since data members are public.

### 3. Vol of Cuboiod

Values initialized in the object.

A member function volume() calculates and returns the volume.

Cleaner design compared to method 2.

### 4. Cuboid with Encapsulation (Private data)

Data members are kept private.

Public method volume() calculates and returns volume.

Demonstrates encapsulation and data hiding.

## Concepts Used

Class and Object → Basic building blocks of OOP.

Data Members → Variables inside a class representing cuboid dimensions.

Member Functions → Functions defined inside a class to operate on data.

Encapsulation → Restricting direct access by keeping variables private.

Access Specifiers → public (accessible outside class) and private (restricted access).

Abstraction → Hiding internal details but exposing only necessary methods.

Modularity → Separating logic into reusable blocks (methods).

## Overall Observations

Public data members make programs simple but less secure.

Taking user input with methods makes programs interactive.

Using member methods to calculate volume improves readability and modularity.

Private data with public methods is the best practice as it ensures encapsulation.

## Conclusion

This experiment helped us understand:

The concept of Objects and Classes in C++.

How different approaches affect security, modularity, and design.

That encapsulation is the most effective method for protecting data.

> Overall, using classes and objects makes programs more organized, reusable, and professional.
