# DesignPatterns

You have to know something about design patterns.

> Note: The source code based on C++ and the class diagram in [/class](https://github.com/i0Ek3/DesignPatterns/tree/master/class?1539571778256) from *Graphic Design Patterns*.  

![DesignPatterns](https://github.com/i0Ek3/DesignPatterns/blob/master/images/DesignPatterns.png)


## Contents


* [Creational](#creational)

    * [Factory Method](#factory-method)
    * [Abstract Factory](#abstract-factory)
    * [Builder](#builder)
    * [Prototype](#prototype)
    * [Singleton](#Singleton)

* [Structural](#structural)

    * [Adapter](#adapter)
    * [Bridge](#bridge)
    * [Composite](#composite)
    * [Decorator](#decorator)
    * [Facade](#facade)
    * [Flyweight](#flyweight)
    * [Proxy](#proxy)

* [Behavioral](#behavioral)

    * [Chain of Responsibility](#chain-of-responsibility)
    * [Command](#command)
    * [Interpreter](#interpreter)
    * [Iterator](#iterator)
    * [Mediator](#mediator)
    * [Memento](#memento)
    * [Observer](#observer)
    * [Visitor](#visitor)
    * [Strategy](#strategy)
    * [State](#state)
    * [Template Method](#template-method)



## Creational

These design patterns provide a way to hide the creation logic while creating the object, rather than instantiating the object directly with the new operator. This makes the program more flexible in determining which objects need to be created for a given instance.

### Factory Method

In this pattern, the factory parent class is responsible for defining the public interface for creating product objects, while the factory subclass is responsible for generating specific product objects.

### Abstract Factory

Provides an interface to create a series of related or interdependent objects without specifying their specific classes.

### Builder

Separating the construction of a complex object from its representation allows the same build process to create different representations.

### Singleton 

The singleton pattern ensures that a class has only one instance and instantiates itself and provides this instance to the entire system.



## Structural

These design patterns focus on the combination of classes and objects. The concept of inheritance is used to combine interfaces and define ways in which composite objects get new functionality.

### Adapter

Convert an interface to another interface that the client wants, and makes those classes that are not compatible with the interface work together.

### Bridge

Separate the abstract part from its implementation so that they can all change independently.

### Decorator

Dynamically add some additional responsibilities to an object.

### Facade

External communication with a subsystem must be done through a uniform look and feel object, providing a consistent interface for a set of interfaces in the subsystem.

### Flyweight

Use sharing technology to support the reuse of a large number of fine-grained objects effectively. 

### Proxy

Provide an agent to an object, and the proxy object controls the reference to the original object.

### Command

Encapsulating a request as an object allows us to parameterize the client with different requests, and queue requests or log request logs, and support revocable operations.

### Mediator

A mediation object is used to encapsulate a series of object interactions. The mediator does not need to explicitly refer to each other, making the coupling loose, and can change the interaction between them independently.



## Behavioral

These design patterns pay special attention to communication between objects.



## Relationship

Here is a relationship between design patterns, take it look.

![Relationship](https://github.com/i0Ek3/DesignPatterns/blob/master/images/the-relationship-between-design-patterns.png)


## Reference

- GOF（设计模式：可复用面向对象软件的基础）
- [图说设计模式](https://design-patterns.readthedocs.io/zh_CN/latest/)
- [https://github.com/kamranahmedse/design-patterns-for-humans](https://github.com/kamranahmedse/design-patterns-for-humans)
- [https://www.runoob.com/design-pattern/design-pattern-tutorial.html](https://www.runoob.com/design-pattern/design-pattern-tutorial.html)

