// 1а. В классе, созданном на предыдущей практической работе, сделать не менее двух полей приватными,
// сохранив возможность для каждого из них (по отдельности) установки и получения значений (по отдельности)
// в процессе работы с ранее созданными объектами класса.


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

    void set_name(std::string c_name) {
        name = std::move(c_name);
    }

    [[nodiscard]] std::string get_name() const {
        return name;
    }

    void set_age(int c_age) {
        age = c_age;
    }

    [[nodiscard]] int get_age() const {
        return age;
    }
};



int main() {
    ConiferousTrees Pine("Crazy Pine", 123, "Lite green", 17);
    Pine.print_data();

    Pine.set_name("Cute Pine");
    Pine.set_age(20);
    Pine.print_data();

    std::cout << Pine.get_name() << std::endl;
    std::cout << Pine.get_age() << std::endl;

    return 0;
}
