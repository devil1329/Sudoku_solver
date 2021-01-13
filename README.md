# Information
    Sudoku solver is a project to solve any valid 9x9 grid sudoku. This program is written in c++ language. 
    This Repository contains two files one is header file which has the code to solve the sudoku grid and other one is cpp file to run the functions in header file.
    To run this sudoku solver on your code editor, you should have to download both the files and save them into one folder so that sorce file can read header file.
    The source file receives the sudoku values as a string of 9 letter and place them at their respective potion as suggest by the user.
    For empty places use zero(0) instead of space bar while giving the sudoku to the program to solve it.
# Functions:-
    The functions in this projects are mainly of bool type.
    # bool issafe()
        The functions receives 4 parameters in it.
        One is array of 9x9, the other two are the postion coordinates of the empty slot and last one is the digit compiler wants to enter.
        This function is used to check whether the position is perfect to place the chosen no at that position.
        It checks whether the row or column or the 3x3 grid doesn't contain any similar digit as of the digit compiler wants to enter.
        it checks the validity of digit at each slot so that there can't be any error regarding the solving of sudoku.
    # bool unassignedposition()
        This function receives 3 parameters, array of 9x9, row and col.
        Row and col are passed as call by reference so that any changes done is this variables reflect in the original ones too.
        The work of this function is to check whether there is an empty slot or not.
        It provides slot to the compiler to fill the requied digits at that places.
        If there is a slot it return true otherwise false.
    # bool sudokusolver()
        This is the main funtin which governs all the proces to solve the given sudoku grid.
        This function receives array of 9x9 as its parameter and start its function on the grid.
        As soon as this function is called it call the unassignedposition funtion to check whether there is any empty place available or not.
        If it receives false it return true and function ends at that point and the grid is solved.
        The row and col variable in this function have the coordinates of the empty places.
        After that the loop is called which will decide the digits to be places at the emp[ty places.
        Loop runs from 1 to 9 and call the issafe function to check validity of slot. if slot is availabe to place the value, then alued get placed at that slot.
        Afetr that sudokusolver will be again called to check for another empty place. If there is no one then it returns true.
        Also if some of the positions are get wrong filled by the function then it will recheck all of them and replace the values with correct one.
        This whole process continues until the whole sudoku get solved or till the sudoku retur false and tell that this can't be solved.
        
