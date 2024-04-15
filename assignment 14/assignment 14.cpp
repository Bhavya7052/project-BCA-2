#include <iostream>
#include <vector>

class MenuItem {
protected:
    std::string name;
    double price;
public:
    MenuItem(const std::string& n, double p) : name(n), price(p) {}
    virtual double getPrice() const {
        return price;
    }
    virtual void display() const {
        std::cout << name << ": $" << price << std::endl;
    }
};

class FoodItem : public MenuItem {
private:
    std::string category;
public:
    FoodItem(const std::string& n, double p, const std::string& c) : MenuItem(n, p), category(c) {}
    void display() const override {
        std::cout << name << " (" << category << "): $" << price << std::endl;
    }
};

class DrinkItem : public MenuItem {
private:
    bool alcoholic;
public:
    DrinkItem(const std::string& n, double p, bool alc) : MenuItem(n, p), alcoholic(alc) {}
    void display() const override {
        std::cout << name << " (" << (alcoholic ? "Alcoholic" : "Non-Alcoholic") << "): $" << price << std::endl;
    }
};

class Order {
private:
    std::vector<MenuItem*> items;
public:
    void addItem(MenuItem* item) {
        items.push_back(item);
    }
    double calculateTotal() const {
        double total = 0.0;
        for (const auto& item : items) {
            total += item->getPrice();
        }
        return total;
    }
    void display() const {
        std::cout << "Order details:" << std::endl;
        for (const auto& item : items) {
            item->display();
        }
        std::cout << "Total: $" << calculateTotal() << std::endl;
    }
};

int main() {
    FoodItem sandwich("Chicken Sandwich", 8.99, "Main Course");
    DrinkItem cola("Cola", 1.99, false);
    DrinkItem beer("Beer", 5.99, true);

    Order order;
    order.addItem(&sandwich);
    order.addItem(&cola);
    order.addItem(&beer);

    order.display();

    return 0;
}