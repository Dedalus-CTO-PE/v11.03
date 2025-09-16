. V11.03.01 20/01/2023 TTI C-0919770 New Hospital Field Added                   
. *----------------------------------------------------------------------
. * Include Name  :   OPRTRBFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   TRAY DETAIL                        
. *
. * File Type     :   SQL
. *
. * File Name     :   oprtrybf.dat
. *
. * Index Values  :   KEY33                                                  
. *
. *                                                          
. * Modifications:                                           
. *  V9.04.01  22/02/2005 Lina Vo    CAR 56404               
. *            Changed Tray & Item code from DIM 6 to DIM 15.
. *            Also changed indexes.                             
. *                                                              
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRTRYB1  IFILE    SQL, FIXED=71, KEY="U1-15,16-30,34-36"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPTDCODE  DIM       15     15       1     Tray Code                          
OPTDITEM  DIM       15     15       16    Item Code                          
OPTDQTY   FORM      3      3        31    Quantity                           
OPTDHOSP  DIM       3      3        34    Hospital ID (pathspaf)             
OPTDSPAR  DIM       34     34       37    Spare Variable                     
.
.End of Record                      71   
.
