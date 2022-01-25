#include <iostream>

class Animal
{
public:
    virtual void Voice() const = 0;
};

class Cats : public Animal
{
public:
   void Voice() const override
    {
        std::cout << "Мяяяяу\n";
    }
};

class Wolfs : public Animal
{
public:
    void Voice() const override
    {
        std::cout << "Ауф!\n";
    }
};

class Snakes : public Animal
{
public:
    void Voice() const override
    {
        std::cout << "Асссссуссссаа\n";
    }
};

int main()
{
    setlocale(LC_CTYPE, "rus");
    Animal* animal[3];
    animal[0] = new Cats();
    animal[1] = new Wolfs();
    animal[2] = new Snakes();

    for (Animal* a : animal)
        a->Voice();
}