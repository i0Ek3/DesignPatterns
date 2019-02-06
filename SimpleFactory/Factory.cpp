#include <iostream>

class Door{
public:
    virtual float GetWidth() = 0;
    virtual float GetHeight() = 0;
};

class WoodenDoor : public Door {
public:
    WoodenDoor(float width, float height) : m_width(width), m_height(height) {}
    float GetWidth() override { return m_width; }
    float GetHeight() override { return m_height; }

protected:
    float m_width;
    float m_height;
};

class DoorFactory {
public:
    static Door* MakeDoor(float width, float height) {
        return new WoodenDoor(width, height);
    }
};

int main()
{
    Door* door = DoorFactory::MakeDoor(90, 210);
    std::cout << "Width: " << door->GetWidth() << std::endl;
    std::cout << "Height: " << door->GetHeight() << std::endl;
}
