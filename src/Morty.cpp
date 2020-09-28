
/*
 __  __            _
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/
                       |___/           |_|   |_|
*/

// Include the Morty header file
#include <stdlib.h>
#include "Morty.hpp"

// =========================================================================== // 
//          Define functions enclosed in Namespace C137 here 
// =========================================================================== // 
namespace C137 {

    void Morty(int start, int stop, int step) {
        int check = 0;
        while (start <= stop) {
            printf("%d: ", start);
            if (check == (start % 15)) {
                printf("Aww Geez Man");
            }
            else if (check == (start % 5)) {
                printf("Geez");
            }
            else if (check == (start % 3)) {
                printf("Aww");
            }
            start = start + step;
            printf("\n");
        } //while bracket
    } //function bracket

    void Morty(int start, int stop) {

       int check = 0;

        while (start <= stop) {

            printf("%d: ", start);

            if (check == (start % 15)) {
                printf("Aww Geez Man");
            }
            else if (check == (start % 5)) {
                printf("Geez");
            }
            else if (check == (start % 3)) {
                printf("Aww");
            }
            start++;
            printf("\n");
        } //while bracket
    } //function bracket

} //namespace bracket
// =========================================================================== // 
//          Define functions enclosed in Namespace Z286 here 
// =========================================================================== // 
namespace Z286 {
    void Morty(int start, int stop, int step) {
        int check = 0;
        while (start <= stop) {
            printf("%d: ", start);

            if (check == (start % 15)) {
                printf("naM zeeG wwA");
            }
            else if (check == (start % 5)) {
                printf("zeeG");
            }
            else if (check == (start % 3)) {
                printf("wwA");
            }
            start = start + step;
            printf("\n");
        } //while bracket
    }//function bracket


    void Morty(int start, int stop) {
       int check = 0;
        while (start <= stop) {
            printf("%d: ", start);
            if (check == (start % 15)) {
                printf("naM zeeG wwA");
            }
            else if (check == (start % 5)) {
                printf("zeeG");
            }
            else if (check == (start % 3)) {
                printf("wwA");
            }
            start++;
            printf("\n");
        }//while bracket
    }//function bracket


}//namespace bracket
