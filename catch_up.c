# include <stdio.h>

int main(void){
    // Out Data has livedin 2 places
    // Stack - local variables, fixes arrays. Ends after function return.
    // Data segment - static,global variables. Lives for the entire program.

    // STACK - size known at compile time.
    int scores[100]; /// 100 spaces;

    // HEAP - size decided at run time.
    // int n = get_student_count();
    // int *scores = malloc(n * sizeof(int));
    // malloc -- memory allocator. returns pointer
    // Heap memory is global!


    // -----------------------------------------------------------
    // 2D ARRAYS - Conept
    // An array of arrays.
    int grid[3][4]; // 3 rows, 4 colummns, unitialzied.
    
    /*  3  4  5  6
        2  3  6  1    
        9  3  8  7  // This is what it would look like.
    */

    // 3D array
    int cube[3][4][5]; // 3 layers, 4 rows, 5 colummns.


    //-----------------------------------------------------------
    // Pointer quick review;
    printf("-------------------------\n");
    printf("Pointers:\n");
    int x = 42;

    int *pX = &x;

    printf("%d\n",*pX); // Dereference to get value.
    *pX = 99;
    printf("%d\n",*pX); // Value changed
    // Pointers stores an address. 

    // Pointer to Pointer - int **

    int y = 31;
    int *pY = &y;


    // ** - pointer to a pointer
    int **ppY = &pY; // We point at the address that is already holding an address!
    // Real world example. 
    // You go to an your friend's house (Address: 871 Lime Lane)
    // and get told to go to another address (Address: 971 Big Street Lane )

    // There are now 3 ways to get the value of y.
    printf("Double Pointers:\n");
    printf("%d\n",y);
    printf("%d\n",*pY); // Dereference via first pointer.
    printf("%d\n",**ppY); // Dereference via second pointer.

    // Let's look at their addresses.
    printf("Address comparison (Double Pointers):   \n");
    // Address of y itself
    printf("Address of y : %p\n",&y);
    printf("\n");
    
    // Address of pY itself.
    printf("Address of pY: %p\n",&pY);
    printf("Address of the value held by pY:%p\n",pY);
    printf("Same as the address of y!\n");
    printf("\n");

    // Address of ppY itself.
    printf("Address of ppY: %p\n",&ppY);
    printf("Address of the value held by pY:%p\n",ppY);
    printf("Same as the address of pY!\n");
    printf("\n");


}