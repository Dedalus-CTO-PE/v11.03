. V11.03.01 20/01/2023 TTI C-0919770 New Hospital Field Added                   
. V9.04.001 04/03/2005 LV  Put in generator - old file oprdprbf                 
. *----------------------------------------------------------------------
. * Include Name  :   OPRDPFFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Doctor Preference Details          
. *
. * File Type     :   SQL
. *
. * File Name     :   oprdpfaf.dat
. *
. * Index Values  :   KEY37                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRDPFA1   IFILE    SQL, FIXED=68, KEY="U1-6,7-15,16-18,19-19,20-34,38-40"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPDFCODE  DIM       6      6        1     Doctor Code                        
OPDFPREF  DIM       9      9        7     Preference Code                    
OPDFCLSS  DIM       3      3        16    Class Type (Cat OG)                
OPDFTYPE  DIM       1      1        19    Item Type                          
OPDFITEM  DIM       15     15       20    Item Code                          
OPDFQTY   FORM      3      3        35    Quantity                           
OPDFHOSP  DIM       3      3        38    Hospital ID (pathspaf)             
OPDFSPAR  DIM       27     27       41    Spare Variable                     
.
.End of Record                      68   
.
