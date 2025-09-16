. V11.03.01 20/01/2023 TTI C-0919770 New Hospital Field Added                   
. V9.04.001 04/03/2005 LV  Put file through generater - old oprdpraf            
. *----------------------------------------------------------------------
. * Include Name  :   OPRDPHFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Doctor Preference Header           
. *
. * File Type     :   SQL
. *
. * File Name     :   oprdphaf.dat
. *
. * Index Values  :   KEY18   KEY68                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRDPHA1   IFILE    SQL, FIXED=119, KEY="U1-6,7-15,66-68"
OPRDPHA2   IFILE    SQL, FIXED=119, KEY="U16-65,1-6,7-15,66-68"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPDHCODE  DIM       6      6        1     Doctor Code                        
OPDHPREF  DIM       9      9        7     Preference Code                    
OPDHDESC  DIM       50     50       16    Preference Description             
OPDHHOSP  DIM       3      3        66    Hospital ID (pathspaf)             
OPDHSPAR  DIM       50     50       69    Spare Variable                     
.
.End of Record                      119  
.
