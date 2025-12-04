// 1. Переопределить виртуальную функцию базового класса в классе-наследнике.
// Использовать в переопределённой функции исходную функцию базового класса.


#include <iostream>



class ConiferousTrees {
private:
    std::string name;
    int age;
    std::string color;
    int height;

public:
    virtual ~ConiferousTrees() = default;


    ConiferousTrees(std::string c_name, int c_age, std::string c_color, int c_height)
        : name(std::move(c_name)), age(c_age), color(std::move(c_color)), height(c_height) {
    }

    virtual void print_data() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << " y.o." << std::endl;
        std::cout << "Color: " << color << std::endl;
        std::cout << "Height: " << height << " m" << std::endl << std::endl;
    }
};



class ProtectedConifer : public ConiferousTrees {
private:
    int population_count;
    std::string threats;

public:
    ProtectedConifer(
        std::string c_name, int c_age, std::string c_color, int c_height,
        int c_population_count, std::string c_threats
    )
        : ConiferousTrees(std::move(c_name), c_age, std::move(c_color), c_height),
          population_count(c_population_count), threats(std::move(c_threats)) {
    }

    void print_data() const override {
        ConiferousTrees::print_data();

        std::cout << "=== Protection Information ===" << std::endl;
        std::cout << "Current threats: " << threats << std::endl;
        std::cout << "Population: " << population_count << " individuals" << std::endl;
        std::cout << "Protected by: Federal Law No. 7-FZ \"On Environmental Protection\"" << std::endl;
        std::cout << "Articles: 60, 60.1, 60.15" << std::endl;
        std::cout << "Protection status: Critically Endangered" << std::endl;
        std::cout << "==============================" << std::endl << std::endl;
    }
};



int main() {
    ConiferousTrees Thuja("Crazy Thuja", 47, "Green", 14);

    ProtectedConifer Cypress(
        "Crazy Cypress", 400, "Silvery-green", 31,
        1000, "deforestation, climate change"
    );

    std::cout << "Regular coniferous tree:" << std::endl;
    Thuja.print_data();
    std::cout << "\nProtected coniferous tree:" << std::endl;
    Cypress.print_data();

    // Демонстрация полиморфизма
    ConiferousTrees* ptr_tree = &Cypress;
    std::cout << "\nUsing base class pointer to protected tree:" << std::endl;
    ptr_tree->print_data(); // Вызовется переопределенная функция

    return 0;
}
