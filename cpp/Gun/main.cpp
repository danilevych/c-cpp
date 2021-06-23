#include "Gun.h"

int main() {
    Gun Beretta;
    
    std::cout << "Gun: " << Beretta << std::endl;
    
    std::cout << "Gun.getModel - " << Beretta.getModel() << std::endl;
    std::cout << "Gun.getAmount - " << Beretta.getAmount() << std::endl;
    std::cout << "Gun.getCapacity - " << Beretta.getCapacity() << std::endl;
    std::cout << "Gun.IsReagy - " << Beretta.ready() << std::endl;
    std::cout << "Gun.TotalShots - " << Beretta.getTotalShots() << std::endl;

    std::cout << "________________________________________________" << std::endl;

    Beretta.prepare();
    Beretta.reload();
    Beretta.shoot();

    std::cout << "Gun.getModel - " << Beretta.getModel() << std::endl;
    std::cout << "Gun.getAmount - " << Beretta.getAmount() << std::endl;
    std::cout << "Gun.getCapacity - " << Beretta.getCapacity() << std::endl;
    std::cout << "Gun.IsReagy - " << Beretta.ready() << std::endl;
    std::cout << "Gun.TotalShots - " << Beretta.getTotalShots() << std::endl;

    std::cout << "________________________________________________" << std::endl;

    return 0;
}
