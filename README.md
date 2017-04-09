ppl-assignment-syashakash **(S Akash [IIT2015067])**  created by GitHub Classroom

##About

>This project is an assignment for the Principles of Programming Languages course. It emphasises on Object Oriented Design and has been written in C++. Currently it holds the solution of *Questions 1, 2, 4 and 5.*

###Language Used
```
C++
```
###Requirements
```
C++ Complier must support c++11 or above(g++ preferred).
Linux OS


```
## How to run?
>To run any question follow the steps
```
To create a header files inclusion file
  g++ -c boy.cpp
  g++ -c girl.cpp
  g++ -c couple.cpp
  g++ -c essentialgift.cpp
  g++ -c luxurygift.cpp
  g++ -c utilitygift.cpp
  ar rvs header.a boy.o girl.o couple.o essentialgift.o luxurygift.o utilitygift.o
```
```
To execute question 1
  cd q1+q2
  g++ q1main.cpp header.a
  ./a.out
```
```
To run question 2
  cd q4
  g++ q2main.cpp header.a
  ./a.out
 ```
 ```
To run question 4
  cd q4
  g++ q4main.cpp header.a
  ./a.out
 ```
 ```
To run question 5
  cd q5
  g++ q5main.cpp header.a
  ./a.out
 ```
 ###Output files
 >For question 1 
  ```
  couples.txt
  ```
 >For question 2
 ```
  mostcompatible.txt
  happiest.txt
```

###Documentation and Class Diagram
 >Documentation can be found in documentation.pdf while ClassDiagram.jpg shows the class diagram in folder q1+q2 for Questions 1 and 2
 
#### Tools Used
Automatic documentation generation: Doxygen  
Class diagram generation: Visual paradigm for UML
