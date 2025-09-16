. 9.10 .001 21/07/2008 JH  Created for CAR 174243                            
. 9.10 .002 28/07/2008                                                       
. 9.10 .003 28/07/2008                                                       
. 9.10 .004 28/07/2008                                                       
. 9.10 .005 19/08/2008 JH  Added item order field                            
. *----------------------------------------------------------------------
. * Include Name  :   RESIDTFD.INC
. *
. * Function      :   File Def'n Include for Clinical Results                   
. *                   Result Item Details Table          
. *
. * File Type     :   SQL
. *
. * File Name     :   residtaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RESIDTA1   IFILE    SQL, FIXED=225, KEY="U1-3,4-6"                              
RESIDTA2   IFILE    SQL, FIXED=225, KEY="U7-18,1-3,4-6"                         
RESIDTA3   IFILE    SQL, FIXED=225, KEY="U19-68,1-3,4-6"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
REIDRTYP  DIM       3      3        1     Result Type (Cat dg)               
REIDIORD  DIM       3      3        4     Item Order                         
REIDITEM  DIM       12     12       7     Item Code                          
REIDIDES  DIM       50     50       19    Test Item Description              
REIDRITY  DIM       1      1        69    Result Item Type 1=Numeric         
.                                         2=Yes/No
.                                         3=Short text
.                                         4=Long text
.                                         5=Sensitivity
.                                         6=Postive/Negative
.                                         7=Detected/Not Detected
.                                         8=Reactive/Non-Reactive
.                                         9=Blood Grouping
REIDRRAN  DIM       1      1        70    Ref Range Req 1=Yes 2=Gender 3=Age 
REIDRRTY  DIM       1      1        71    Ref Type 0=low-to 1<low 2>high     
REIDLRRM  FORM      3.2    4        72    Low Point Ref Range Std/Males/Adult
REIDHRRM  FORM      3.2    4        76    High Point Ref Range Std/Males/Adlt
REIDLRRF  FORM      3.2    4        80    Low Ref Range Females/Child        
REIDHRRF  FORM      3.2    4        84    High Point Ref Range Females/Child 
REIDRRDE  DIM       25     25       88    Ref Range Description              
REIDUMEA  DIM       10     10       113   Units of Measure                   
REIDWEBC  DIM       10     10       123   Web user id created (websecaf)     
REIDDATC  DIM       8      8        133   Date created (ccyymmdd)            
REIDTIMC  DIM       8      8        141   Time created (hh:mm:ss)            
REIDWEBU  DIM       10     10       149   Web user id updated (websecaf)     
REIDDATU  DIM       8      8        159   Date updated (ccyymmdd)            
REIDTIMU  DIM       8      8        167   Time updated (hh:mm:ss)            
REIDSPAR  DIM       50     50       175   Spare                              
.
.End of Record                      225  
.
