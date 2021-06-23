#include "Paper.h"
#include "Pen.h"

int main() {

    Paper paper;
    Pen pen;

    std::cout << "Paper.getMaxSymbols - " << paper.getMaxSymbols() << std::endl;
    std::cout << "Paper.getSymbols - " << paper.getSymbols() << std::endl;
   
    std::cout << "________________________________________________" << std::endl;

    std::cout << "Pen.getInkAmount - " << pen.getInkAmount() << std::endl;
    std::cout << "Pen.getInkCapacity - " << pen.getInkCapacity() << std::endl;

    std::cout << "________________________________________________" << std::endl;

    pen.refill();
    pen.write(paper, "Hello");
    paper.show();

	return 0;
}
