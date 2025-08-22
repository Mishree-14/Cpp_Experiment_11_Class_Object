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

In C++, a class is a user-defined data type that acts as a blueprint. It can contain:

Data Members → Variables such as length, width, height.

Member Functions → Functions that operate on these variables, such as calculating the volume.

An object is an instance of a class. Each object has its own data members, but the structure is defined by the class.

Key Concepts learned in this experiment:

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
