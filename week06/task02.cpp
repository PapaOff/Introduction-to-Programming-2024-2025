#include <iostream>

int main() {
    int price, usbPorts, ram;
    bool hasSSD;

    std::cout << "Enter the price of the laptop: ";
    std::cin >> price;

    std::cout << "Enter the number of USB ports: ";
    std::cin >> usbPorts;

    std::cout << "Enter the amount of RAM (in GB): ";
    std::cin >> ram;

    std::cout << "Does the laptop have an SSD (1 for Yes, 0 for No)? ";
    std::cin >> hasSSD;

    bool willBuy = usbPorts >= 3 && 
                   ((ram >= 8 && hasSSD && price >= 1000 && price <= 1500) || 
                    (price <= 800));

    if (willBuy) {
        std::cout << "Tishko will buy this laptop." << std::endl;
    } else {
        std::cout << "Tishko will not buy this laptop." << std::endl;
    }

    return 0;
}
