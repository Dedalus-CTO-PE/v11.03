. V9.04.001 13/09/2005 EC  Added OPEXACTV CAR 51515                          
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OPREXPFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                    EXPENSIVE ITEM                                  *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : oprexpaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 6, KEY36                                    *
.  *                                                                    *
.  *     Modifications: 19/10/90 Graeme Williams                        *
.  *                             Added miscellaneous charge code        *
.  *                                                                    *
.  **********************************************************************
.
OPREXPA1   IFILE    SQL, FIXED=60, KEY="U1-6"                                   
OPREXPA2   IFILE    SQL, FIXED=60, KEY="U7-36,1-6"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPEXCODE  DIM       6      6        1     Expensive Item Code                
OPEXDESC  DIM       30     30       7     Description                        
OPEXRUS   DIM       3      3        37    RUS Equivalent Code                
OPEXMCHG  DIM       9      9        40    Miscellaneous Charge Code          
OPEXSICD  DIM       7      7        49    IBA Supply & Inventory Code        
OPEXACTV  DIM       1      1        56    Active 0=Active 1=Inactive         
OPEXSPAR  DIM       3      3        57    Spare                              
.
.End of Record                      60   
.
