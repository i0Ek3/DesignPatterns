# DesignPatterns

> **Note**: Before you start learning, make sure you are familiar with the object-oriented concepts in C++, otherwise please visit [here](https://segmentfault.com/a/1190000002868033) first.

You have to know something about design patterns. 关于设计模式，你必须要知道的一些事情。

![DesignPatterns](https://github.com/i0Ek3/DesignPatterns/blob/master/images/DesignPatterns.png)


## Contents

* [Creational 创建型](#creational-创建型) 
    * [Simple Factory 简单工厂](#simple-factory-简单工厂) 
    * [Factory Method 工厂方法](#factory-method-工厂方法) 
    * [Abstract Factory 抽象工厂](#abstract-factory-抽象工厂) 
    * [Builder 生成器](#builder-生成器) 
    * [Prototype 原型](#prototype-原型) 
    * [Singleton 单例](#Singleton-单例) 
* [Structural 结构型](#structural-结构型) 
    * [Adapter 适配器](#adapter-适配器) 
    * [Bridge 桥接](#bridge-桥接) 
    * [Composite 组成](#composite-组成) 
    * [Decorator 装饰](#decorator-装饰) 
    * [Facade 外观](#facade-外观) 
    * [Flyweight 享元](#flyweight-享元) 
    * [Proxy 代理](#proxy-代理) 
* [Behavioral 行为型](#behavioral-行为型) 
    * [Chain of Responsibility 责任链](#chain-of-responsibility-责任链) 
    * [Command 命令](#command-命令) 
    * [Iterator 迭代器](#iterator-迭代器) 
    * [Mediator 中介者](#mediator-中介者) 
    * [Memento 备忘录](#memento-备忘录) 
    * [Observer 观察者](#observer-观察者) 
    * [Visitor 访问者](#visitor-访问者) 
    * [Strategy 策略](#strategy-策略) 
    * [State 状态](#state-状态) 
    * [Template Method 模板方法](#template-method-模板方法) 
* [Relationship 关系图](#relationship-关系图)
* [Epolog 小结](#epilog-小结)
* [Reference](#reference)



## Creational 创建型

These design patterns provide a way to hide the creation logic while creating the object, rather than instantiating the object directly with the new operator. This makes the program more flexible in determining which objects need to be created for a given instance.

创建型模式，讲的就是如何**创建对**象的。

## Simple Factory 简单工厂

In this pattern, you can return instances of different classes depending on the parameters.

直白一点讲，简单工厂模式就是给你一个现成的东西，省去你制作它的细节。

### Factory Method 工厂方法

In this pattern, the factory parent class is responsible for defining the public interface for creating product objects, while the factory subclass is responsible for generating specific product objects.

做不同的事，不同的人有明确的分工。即将实例化逻辑委托给子类的一种方法。

### Abstract Factory 抽象工厂

Provides an interface to create a series of related or interdependent objects without specifying their specific classes.

相当于一个总的工厂，下面有很多分公司子公司，而这些分公司子公司还有依赖关系，而不关心各自的细节问题。

### Builder 生成器

Separating the construction of a complex object from its representation allows the same build process to create different representations.

适用于创建不同类型的对象，同时可避免构造器污染。其本质就是将构造函数中的参数列表方法化。

### Prototype 原型

It is used when the type of objects to create is determined by a prototypical instance, which is cloned to produce new objects.

原型模式允许你拷贝一份已有的对象，并根据你自己的需求改造，从而省去创建的过程。也可以理解为克隆，或者在创建过程比克隆更复杂的情形下使用。

### Singleton 单例

The singleton pattern ensures that a class has only one instance and instantiates itself and provides this instance to the entire system.

确保一个特定类型的对象只能创建一次。但由于其本质类似于全局变量，可能会造成耦合度过高的问题，故应该慎用。



## Structural 结构型

These design patterns focus on the combination of classes and objects. The concept of inheritance is used to combine interfaces and define ways in which composite objects get new functionality.

结构型模式的重点在于对象的组合，即实体之间是如何相互调用的。

### Adapter 适配器

Convert an interface to another interface that the client wants, and makes those classes that are not compatible with the interface work together.

即包装一个对象，使得该对象兼容其他类。

### Bridge 桥接

Separate the abstract part from its implementation so that they can all change independently.

桥接模式优先考虑组合而非继承，即将实现细节从层次结构中剥离并独立出来，形成另一套层次结构可供其他类使用。

### Composite 组成

The composite pattern describes that a group of objects is to be treated in the same way as a single instance of an object.

组成模式让客户以统一的方式对待各个独立的对象。

### Decorator 装饰

Dynamically add some additional responsibilities to an object.

装饰模式将对象包装在装饰类对象中，从而在运行时动态改变该对象的行为。

### Facade 外观

External communication with a subsystem must be done through a uniform look and feel object, providing a consistent interface for a set of interfaces in the subsystem.

外观模式为复杂的子系统提供了一个简单的接口，而不需要你关注子系统的具体实现。

### Flyweight 享元

Use sharing technology to support the reuse of a large number of fine-grained objects effectively. 

享元模式的特点是共享，也可以理解为缓存，即尽量以最小的资源或成本来服务更多的对象。

### Proxy 代理

Provide an agent to an object, and the proxy object controls the reference to the original object.

所谓代理模式，实际上就是在原本的系统上附加了其他功能，即让一个类表现出其他类的功能。



## Behavioral 行为型

These design patterns pay special attention to communication between objects.

行为型模式关注对象间的责任分配，即软件组件之间的行为是如何运转的。与结构型模式的不同之处在于，它们不仅指定结构，还概述了结构之间消息传递和通讯的模式。

### Chain of Responsibility 责任链

The chain-of-responsibility pattern is a design pattern consisting of a source of command objects and a series of processing objects.

责任链模式旨在建立一条对象链，从对象链的一端开始，依次遍历，直到找到合适的解决方案。

### Command 命令

Encapsulating a request as an object allows us to parameterize the client with different requests, and queue requests or log request logs, and support revocable operations.

命令模式允许你将操作封装在对象中，其核心思想是分离客户与接收者。

### Iterator 迭代器

The iterator pattern is a design pattern in which an iterator is used to traverse a container and access the container’s elements.

迭代器模式提供了一个接口供对象使用，你无需知道底层方法，其本质就是迭代。

### Mediator 中介者

A mediation object is used to encapsulate a series of object interactions. The mediator does not need to explicitly refer to each other, making the coupling loose, and can change the interaction between them independently.

中介者模式正如其名，增加了一个第三方对象来控制两个对象之间的交互。

### Memento 备忘录

The memento pattern is a software design pattern that provides the ability to restore an object to its previous state.

备忘录模式相当于一种快照，抓取并保存当前状态以便恢复使用。

### Observer 观察者

Defines a one-to-many dependency between objects, so that whenever an object's state changes, its associated dependent objects are notified and automatically updated.

观察者模式简单来说就是一种通知模式，即定义了对象之间的依赖关系，当一个对象的状态改变时，依赖它的对象都会得到通知，其核心是注入/回调。

### Visitor 访问者

The visitor design pattern is a way of separating an algorithm from an object structure on which it operates.

访问者模式允许你为对象们增加额外的操作，而不需要修改它们本身。其核心思想是对调用的一种抽象，依靠回调来实现。

### Strategy 策略

Define a series of algorithms that encapsulate each algorithm and allow them to be replaced.

所谓策略模式，就是允许你根据不同的情况使用对应的方法。

### State 状态

Allow an object to change its behavior when its internal state changes.

状态模式即允许你在状态改变的同时，也改变类的行为。

### Template Method 模板方法

The template method pattern is a behavioral design pattern that defines the program skeleton of an algorithm in an operation, deferring some steps to subclasses.

模板方法模式相当于一种框架，即按规定好的流程来执行某一流程，具体实现交给子类。



## Relationship 关系图

Here is a relationship between design patterns, take it look.

![Relationship](https://github.com/i0Ek3/DesignPatterns/blob/master/images/the-relationship-between-design-patterns.png)


## Eplog 小结

首先，总算断断续续的完成了。其次，该项目第一遍我参考图说设计模式完成的，可能还残缺了很多，当时只是心血来潮。第二遍我主要参照 pezy 的笔记进行学习的，参照重写了所有的之前按照类图写的冗长代码，这回也很好理解了。

尽管这是我第二次学习设计模式，但第一次的学习过程实在糟糕，只知道有这些东西，完全不懂做什么用，学习过程也是走马观花，依葫芦画瓢。这次就好很多了，至少知道了很多设计模式具体是做什么的和如何使用，但还有些没有完全理解，需要继续实践应用。

总之，感谢 pezy 的笔记和 kamranahmedse 的过万 star 项目，也感谢自己。希望大家学习愉快，这只是个开始，一切都只是刚开始而已！


## Reference

- GOF（设计模式：可复用面向对象软件的基础）
- [图说设计模式](https://design-patterns.readthedocs.io/zh_CN/latest/)
- [https://github.com/kamranahmedse/design-patterns-for-humans](https://github.com/kamranahmedse/design-patterns-for-humans)
- [pezy](https://pushmind.org/2017/07/31/design-patterns-for-humans/)
