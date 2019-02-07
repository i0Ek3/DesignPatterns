#include <iostream>

class Door {
public:
    virtual void GetDescription() = 0;
};

class WoodenDoor : public Door {
public:
    void GetDescription() override {
        std::cout << "Wooden door." << std::endl;
    }
};

class IronDoor : public Door {
public:
    void GetDescription() override {
        std::cout << "Iron door." << std::endl;
    }
};

class DoorExpert {
public:
    virtual void GetDescription() = 0;
};

class Carpenter : public DoorExpert {
    void GetDescription() override {
        std::cout << "Wooden door only!" << std::endl;
    }
};

class Welder : public DoorExpert {
    void GetDescription() override {
        std::cout << "Iron door only!" << std::endl;
    }
};

class IDoorFactory {
public:
    virtual Door* MakeDoor() = 0;
    virtual DoorExpert* MakeExpert() = 0;
};

template <typename Door, typename DoorExpert>
class DoorFactory : public IDoorFactory {
public:
    Door* MakeDoor() override {
        return new Door();
    }
    DoorExpert* MakeExpert() override {
        return new DoorExpert();
    }
};


int main()
{
    IDoorFactory* woodenFactory = new DoorFactory<WoodenDoor, Carpenter>();
    {
        Door* door = woodenFactory->MakeDoor();
        DoorExpert* expert = woodenFactory->MakeExpert();
        door->GetDescription();
        expert->GetDescription();
    }

    IDoorFactory* ironFactory = new DoorFactory<IronDoor, Welder>();
    {
        Door* door = ironFactory->MakeDoor();
        DoorExpert* expert = ironFactory->MakeExpert();
        door->GetDescription();
        expert->GetDescription();
    }
}

