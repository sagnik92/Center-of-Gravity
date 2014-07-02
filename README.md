Center-of-Gravity
=================

Finds out the center of gravity (C.G.) of a binary image (matrix structure containing binary values only) and replaces each cell containing a binary '1' with the equivalent distance from the C.G.

   The following C code performs the the functions :-
    
     1) Finding C.G. of a Gray image: The C.G. by summing up the row and column indices of the cells which contain '1' and 
                                      deviding them by the number of such cells containing 1s.
    
     2) Calculating the equivalent distance: The equivalent distance of each cell containing 1s from C.G is calculated using                                              the formulae -
                                                            sqrt((CG(x)-CELL(x))^2) + (CG(y)-CELL(y))^2))
                                                    
                                               where  sqrt():- square root function.
                                                      CG(x) and CG(y):- row and column indices of CG respectively.
                                                      CELL(x) and CELL(y):- row and column indices of cell containing 1.
                                                    
    3) Replacing the 1s in the cells with the equivalent distance from the CG. The cells containing 0s are left unaltered.

