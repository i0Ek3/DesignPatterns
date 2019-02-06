# DesignPatterns

> Before you start learning, make sure you are familiar with the object-oriented concepts in C++, otherwise please visit [here](https://segmentfault.com/a/1190000002868033) first.

You have to know something about design patterns.

> Note: The source code based on C++ and the class diagram in [/class](https://github.com/i0Ek3/DesignPatterns/tree/master/class?1539571778256) from *Graphic Design Patterns*.  

![DesignPatterns](https://github.com/i0Ek3/DesignPatterns/blob/master/images/DesignPatterns.png)


## Contents


* [Creational](#creational)

    * [Simple Factory](#simple-factory)
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

创建型模式，讲的就是如何**创建对**象的。

## Simple Factory

In this pattern, you can return instances of different classes depending on the parameters.

直白一点讲，简单工厂模式就是给你一个现成的东西，省去你制作它的细节。

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

而结构型模式的重点在于对象的组合，即实体之间是如何相互调用的。

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



## Behavioral

These design patterns pay special attention to communication between objects.

行为型模式则关注对象间的责任分配，即软件组件之间的行为是如何运转的。

### Command

Encapsulating a request as an object allows us to parameterize the client with different requests, and queue requests or log request logs, and support revocable operations.

### Mediator

A mediation object is used to encapsulate a series of object interactions. The mediator does not need to explicitly refer to each other, making the coupling loose, and can change the interaction between them independently.

### Observer

Defines a one-to-many dependency between objects, so that whenever an object's state changes, its associated dependent objects are notified and automatically updated.

### State

Allow an object to change its behavior when its internal state changes.

### Strategy

Define a series of algorithms that encapsulate each algorithm and allow them to be replaced.




## Relationship

Here is a relationship between design patterns, take it look.

![Relationship](https://github.com/i0Ek3/DesignPatterns/blob/master/images/the-relationship-between-design-patterns.png)


## Reference

- GOF（设计模式：可复用面向对象软件的基础）
- [图说设计模式](https://design-patterns.readthedocs.io/zh_CN/latest/)
- [https://github.com/kamranahmedse/design-patterns-for-humans](https://github.com/kamranahmedse/design-patterns-for-humans)
- [@pezy](https://pushmind.org/2017/07/31/design-patterns-for-humans/)
