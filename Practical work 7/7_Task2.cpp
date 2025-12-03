// 1б. На основе существующего базового класса создать ещё один класс, содержащий не менее одного поля,
// не менее одного конструктора, не менее одной функции. В созданном классе использовать возможности базового класса.


#include <iostream>
#include <utility>



class ConiferousTrees {
private:
    std::string name;
    int age;
    std::string color;
    int height;

public:
    ConiferousTrees(std::string c_name, int c_age, std::string c_color, int c_height)
        : name(std::move(c_name)), age(c_age), color(std::move(c_color)), height(c_height) {
    }

    void print_data() const {
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

    void get_protection_info() const {
        std::cout << "=== Protection Information ===" << std::endl;
        std::cout << "Current threats: " << threats << std::endl;
        std::cout << "Population: " << population_count << " individuals" << std::endl;
        std::cout << "Protected by: Federal Law No. 7-FZ \"On Environmental Protection\"" << std::endl;
        std::cout << "Articles: 60, 60.1, 60.15" << std::endl;
        std::cout << "Protection status: Critically Endangered" << std::endl;
        std::cout << "==============================" << std::endl << std::endl;
    }

    void print_full_info() const {
        print_data(); // Используем функцию базового класса
        get_protection_info();
    }
};



int main() {
    ProtectedConifer Juniper(
        "Crazy Juniper", 45, "Bluish-gray", 11,
        100, "fires"
    );
    Juniper.print_full_info();

    return 0;
}
