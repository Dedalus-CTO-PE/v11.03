. v9.00.005 20/01/2005 JT  Added field for 'No Charge' and 'Broken/Unused'   
. v9.00.002 08/06/2001 JT                                                    
. *----------------------------------------------------------------------
. * Include Name  :   OPRPEIFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Patient Expensive Item Table       
. *
. * File Type     :   SQL
. *
. * File Name     :   oprpeiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRPEIA1   IFILE    SQL, FIXED=40, KEY="U1-10,11-11,18-19"                      
OPRPEIA2   IFILE    SQL, FIXED=40, KEY="U12-17,1-10,11-11,18-19"                
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPPEUNID  DIM       10     10       1     Unique ID.                         
OPPETMNO  DIM       1      1        11    Team Number                        
OPPECODE  DIM       6      6        12    Expensive Item Code                
DOPPECNT  DIM       2      2        18    Counter                            
OPPEQUAN  FORM      8      5        20    Quantity                           
OPPECHRG  DIM       1      1        25    No Charge (0=No,1=Yes)             
OPPEBROK  DIM       1      1        26    Broken/Unused (0=No,1=Yes)         
OPPESPAR  DIM       13     13       27    Spare Variable                     
.
.End of Record                      40   
.
.Redefine Key Variables
.----------------------
OPPECNTR  FORM      2    
