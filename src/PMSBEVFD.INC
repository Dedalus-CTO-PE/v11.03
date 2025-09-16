. V10.00.01 25/05/2010 JP  Created for CAR 222551                            
. *----------------------------------------------------------------------
. * Include Name  :   PMSBEVFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Baby Birth Event Details           
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsbevaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSBEVA1   IFILE    SQL, FIXED=283, KEY="U1-10,11-20,21-28,29-36,37-39,40-42"   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMBEUNIQ  DIM       10     10       1     Pregnancy Unique ID                
PMBEBUNQ  DIM       10     10       11    Birth Unique Number                
PMBEEDAT  DIM       8      8        21    Event Date (CCYYMMDD)              
PMBEETIM  DIM       8      8        29    Event Time (hh:mm:ss)              
PMBETYPE  DIM       3      3        37    Type of Record 001 - Resuscitation 
.                                                        002 - Congenital 
.                                                        003 - Labour Event
PMBEETYP  DIM       3      3        40    Type of Event (Cat ND)             
PMBEESTA  DIM       3      3        43    Event Status (Cat NE)              
PMBEDES1  DIM       50     50       46    Free Format Description 1          
PMBEDES2  DIM       50     50       96    Free Format Description 2          
PMBEWEBC  DIM       10     10       146   Web User ID Created (CCYYMMDD)     
PMBEDATC  DIM       8      8        156   Date Created (CCYYMMDD)            
PMBETIMC  DIM       8      8        164   Time Created (hh:mm:ss)            
PMBEWEBU  DIM       10     10       172   Web User Id Updated (websecaf)     
PMBEDATU  DIM       8      8        182   Date Updated (CCYYMMDD)            
PMBETIMU  DIM       8      8        190   Time Updated (hh:mm:ss)            
PMBERECS  DIM       1      1        198   Record Status 1=Deleted            
PMBEWEBD  DIM       8      8        199   Date Deleted (CCYYMMDD)            
PMBEDATD  DIM       8      8        207   Date Deleted (CCYYMMDD)            
PMBETIMD  DIM       8      8        215   Time Deleted (hh:mm:ss)            
PMBESPAR  DIM       60     60       223   Spare                              
.
.End of Record                      283  
.
