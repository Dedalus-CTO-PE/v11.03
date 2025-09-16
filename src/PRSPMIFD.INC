. *----------------------------------------------------------------------
. * Include Name  :   PRSPMIFD.INC
. *
. * Function      :   File Def'n Include for PRS2 System                        
. *                   PRS2 PMI Detail Changes            
. *
. * File Type     :   SQL
. *
. * File Name     :   prspmiaf.dat
. *
. * Mods          :
. *
. *       26/09/2017  Steve Armstrong     
. *                   Added value 13 for P2PMUNIQ and updated descriptions
. *                   for values 9 and 11.
. *       12/02/2004  DS  Created FD for PRS2 PMI Triggers                  
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRSPMIA1   IFILE    SQL, FIXED=97, KEY="U1-8,9-11"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
P2PMURNO  DIM       8      8        1     Patient U/R Number                 
P2PMUNIQ  DIM       3      3        9     Unique Numeric PMI Field Identifier
                                                1 = Date of Birth
                                                2 = Aboriginality
                                                3 = Country of Birth
                                                4 = Preferred Language
                                                5 = Sex
                                                6 = Marital Status
                                                7 = Resident Status
                                                8 = Interpreter Required
                                                9 = Address Line 2/Suburb
                                               10 = Postcode
                                               11 = Medicare/Ref Number
                                               12 = U/R Merge
                                               13 = Concession Card
P2PMVALU  DIM       35     35       12    Value of field at time of update   
P2PMSPAR  DIM       50     50       47    Spare Variable                     
.
.End of Record                      97   
.
