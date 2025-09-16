. V11.03.01 20/01/2023 TTI C-0919770 New Hospital Field Added                   
. *----------------------------------------------------------------------
. * Include Name  :   OPRTRAFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   TRAY HEADER                        
. *
. * File Type     :   SQL
. *
. * File Name     :   oprtryaf.dat
. *
. * Index Values  :   KEY18   KEY48                                          
. *                                                                    
. * Modifications:                                                 
. *  V9.04.01  22/02/2005 Lina Vo    CAR 56404                     
. *            Changed Tray code from DIM 6 to DIM 15. Also changed
. *            indexes                                             
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRTRYA1   IFILE    SQL, FIXED=81, KEY="U1-15,46-48"
OPRTRYA2   IFILE    SQL, FIXED=81, KEY="U16-45,1-15,46-48"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPTHCODE  DIM       15     15       1     Tray Code                          
OPTHDESC  DIM       30     30       16    Description                        
OPTHHOSP  DIM       3      3        46    Hospital ID (pathspaf)             
OPTHSPAR  DIM       32     32       49    Spare Vairable                     
.
.End of Record                      81   
.
