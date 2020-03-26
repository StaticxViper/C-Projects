// Week 5 Project Worst Fit
//

#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>




class Requests {
private:
    int process_id;
    int num_units;
    int units_traversed;


    //Methods for changing or displaying attributes for different requests
public:
    //Constructor
    Requests(int new_id, int new_units, int new_units_traversed = 0) {
        process_id = new_id;
        num_units = new_units;
        units_traversed = new_units_traversed;
    }

    /*Assume that the memory is 256 KB and is divided into units of 2 KB each.
     A process may request between 3 and 10 units of memory.
    */
    //19 units, all adding up to 128 (2 KB of 256 KB) element * 2 = amount of KB
    std::vector<int> memory = { 4, 4, 7, 3, 9, 7, 8, 8, 5, 7, 8, 8, 4, 10, 4, 10, 8, 5, 9 };
    //used memory vector is for finding holes only
    std::vector<int> used_memory = { 4, 4, 7, 3, 9, 7, 8, 8, 5, 7, 8, 8, 4, 10, 4, 10, 8, 5, 9 };


    /*allocates num_units units of memory to a process whose id is process_id.
    If successful, it returns the number of elements traversed in the vector.
    */
    int memory_allocation() {


        for (int i = 0; i <= 18; i++) {
            if (num_units > memory[i]) {
                units_traversed = units_traversed + 1;
            }
            else if (num_units * 3 <= memory[i]) {
                int used_memory_unit = 0;
                used_memory_unit = memory[i] - num_units;
                used_memory[i] = used_memory_unit;

                return units_traversed;
            }
            else if (num_units * 2 == memory[i]) {
                int used_memory_unit = 0;
                used_memory_unit = memory[i] - num_units;
                used_memory[i] = used_memory_unit;

                return units_traversed;
            }
            else if (memory[i] - num_units == 4 && num_units == 6) {
                int used_memory_unit = 0;
                used_memory_unit = memory[i] - num_units;
                used_memory[i] = used_memory_unit;

                return units_traversed;
            }
            else if (memory[i] - num_units == 3 && num_units == 7) {
                int used_memory_unit = 0;
                used_memory_unit = memory[i] - num_units;
                used_memory[i] = used_memory_unit;

                return units_traversed;
            }
            else if (memory[i] - num_units == 2 && num_units == 8) {
                int used_memory_unit = 0;
                used_memory_unit = memory[i] - num_units;
                used_memory[i] = used_memory_unit;

                return units_traversed;
            }
            else if (memory[i] - num_units == 1 && num_units == 9) {
                int used_memory_unit = 0;
                used_memory_unit = memory[i] - num_units;
                used_memory[i] = used_memory_unit;

                return units_traversed;
            }
            else {
                units_traversed = units_traversed + 1;

            }
        }

    }



    //Returns ID
    int get_id() {
        return process_id;
    }
    //Returns units
    int get_units() {
        return num_units;
    }
    //Returns memory taken
    int get_units_traversed() {
        return units_traversed;
    }
    //Returns all data
    int get_data() {
        return process_id;
        return num_units;
        return units_traversed;
    }

    //Returns the number of holes
    int fragment_count() {
        int holes_found = 0;
        for (int j = 0; j <= 18; j++) {
            if (used_memory[j] < 3) {
                holes_found = holes_found + used_memory[j];

                return holes_found;
            }

        }

    }

    int leftovers() {
        int leftover_memory = 0;
        for (int x = 0; x <= 18; x++) {
            if (used_memory[x] >= 3) {
                leftover_memory = leftover_memory + (2 * used_memory[x]);

                return leftover_memory;
            }
        }
    }
};


int main()
{




    //Request instance declaration
    Requests p1(1, 5);
    Requests p2(2, 7);
    Requests p3(3, 3);
    Requests p4(4, 4);
    Requests p5(5, 5);
    Requests p6(6, 8);
    Requests p7(7, 10);
    Requests p8(8, 3);
    Requests p9(9, 4);
    Requests p10(10, 6);
    Requests holes(0, 0);


    //std::vector<int> memory = { 4, 4, 7, 3, 9, 7, 8, 8, 5, 7, 8, 8, 4, 10, 4, 10, 8, 5, 9 }; (Vector copy for reference)
    std::cout << "Request #" << p1.get_id() << " traversed " << p1.memory_allocation() << " units. This request had " << p1.get_units() << " units.\n";
    std::cout << "Request #" << p2.get_id() << " traversed " << p2.memory_allocation() << " units. This request had " << p2.get_units() << " units.\n";
    std::cout << "Request #" << p3.get_id() << " traversed " << p3.memory_allocation() << " units. This request had " << p3.get_units() << " units.\n";
    std::cout << "Request #" << p4.get_id() << " traversed " << p4.memory_allocation() << " units. This request had " << p4.get_units() << " units.\n";
    std::cout << "Request #" << p5.get_id() << " traversed " << p5.memory_allocation() << " units. This request had " << p5.get_units() << " units.\n";
    std::cout << "Request #" << p6.get_id() << " traversed " << p6.memory_allocation() << " units. This request had " << p6.get_units() << " units.\n";
    std::cout << "Request #" << p7.get_id() << " traversed " << p7.memory_allocation() << " units. This request had " << p7.get_units() << " units.\n";
    std::cout << "Request #" << p8.get_id() << " traversed " << p8.memory_allocation() << " units. This request had " << p8.get_units() << " units.\n";
    std::cout << "Request #" << p9.get_id() << " traversed " << p9.memory_allocation() << " units. This request had " << p9.get_units() << " units.\n";
    std::cout << "Request #" << p10.get_id() << " traversed " << p10.memory_allocation() << " units. This request had " << p10.get_units() << " units.\n";

    std::cout << "\nIf a request has traversed over 18 units, then there are no available spaces for it!\n";

    std::cout << "\nAfter these requests, there are " << holes.fragment_count() << " holes, and " << holes.leftovers() << " KB un-used.(Any unit above 3 units)\n";

}