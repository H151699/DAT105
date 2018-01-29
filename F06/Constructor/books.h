/*
What is deconstructor?

is a member function which destructs or deletes an object.
in another words:

A Destructor is used to destroy objects that hvae been created by constructor;

Why need DESTRUCTOR



When is destructor called?
A Deconstructor function is called automatically when the object goes out of scope;
(1) the function ends
(2) the program ends
(3) a block containing local variables ends
(4) a delete operator is called

How destructors are different from a normal member function?

1, Destructors have same name as the class preceded by a tilde (~)
2, Destructors don’t take any argument and don’t return anything
3, Only one destructor is need to destroy all objects created by constructor
*/

#pragma once
