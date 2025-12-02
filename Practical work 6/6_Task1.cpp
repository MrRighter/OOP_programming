// 1а) не менее двух полей, одного конструктора, одной функции класса.
// 1б) кроме требования к заданию 1а, не менее трёх конструкторов.
// 1в) кроме требования к заданию 1б, не менее двух функций класса, хотя бы одна из которых имеет и входные параметры,
// и возвращаемое значение.
// 1г) кроме требования к заданию 1в, не менее трёх функций класса, одна из которых является перегрузкой другой.


#include <iostream>
#include <utility>



class ConiferousTrees {
private:
    std::string name;
    int age;
    std::string color;
    int height;

public:
    ConiferousTrees(
        std::string c_name, int c_age,
        std::string c_color, int c_height
    )
        : name(std::move(c_name)), age(c_age), color(std::move(c_color)), height(c_height) {
    }

    ConiferousTrees(std::string c_name, std::string c_color)
        : name(std::move(c_name)), age(-1), color(std::move(c_color)), height(-1) {
    }

    ConiferousTrees(int c_age, int c_height)
        : name("None"), age(c_age), color("None"), height(c_height) {
    }

    void print_data() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << " y.o." << std::endl;
        std::cout << "Color: " << color << std::endl;
        std::cout << "Height: " << height << " m" << std::endl;
    }

    void print_data(bool short_format) {
        if (short_format) {
            std::cout << name << " (" << age << " years, " << height << "m)";
        }
        else {
            print_data();
        }
        std::cout << std::endl;
    }

    bool is_young(int max_age) {
        return age < max_age;
    }
};



int main() {
    ConiferousTrees Spruce("Crazy Spruce", 52, "Dark green", 20);
    Spruce.print_data();
    std::cout << std::endl;

    ConiferousTrees Fir("Crazy Fir", "Blue");
    Fir.print_data();
    std::cout << std::endl;

    ConiferousTrees None1(67, 31);
    None1.print_data();
    std::cout << std::endl;

    std::cout << "Original format:" << std::endl;
    Spruce.print_data();
    std::cout << std::endl;

    std::cout << "Short format:" << std::endl;
    Spruce.print_data(true);
    std::cout << std::endl;

    std::cout << "Is the 'Spruce' young?: " << std::boolalpha << Spruce.is_young(200) << std::endl;

    return 0;
}
