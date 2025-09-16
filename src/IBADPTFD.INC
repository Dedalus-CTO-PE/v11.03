. V10.01.01 23/03/2011 JP  Created for CAR 239574                               
. *----------------------------------------------------------------------
. * Include Name  :   IBADPTFD.INC
. *
. * Function      :   File Def'n Include for IBA Software                       
. *                   Printer Department Table           
. *
. * File Type     :   SQL
. *
. * File Name     :   ibadptaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBADPTA1   IFILE    SQL, FIXED=209, KEY="U1-6"                                  
IBADPTA2   IFILE    SQL, FIXED=209, KEY="U87-89,1-6"                            
IBADPTA3   IFILE    SQL, FIXED=209, KEY="U90-95,1-6"                            
IBADPTA4   IFILE    SQL, FIXED=209, KEY="U96-98,1-6"                            
IBADPTA5   IFILE    SQL, FIXED=209, KEY="U99-108,1-6"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBDPDEPT  DIM       6      6        1     Department                         
IBDPDESC  DIM       80     80       7     Description                        
IBDPHOSP  DIM       3      3        87    Hospital                           
IBDPWARD  DIM       6      6        90    Ward                               
IBDPEMRS  DIM       3      3        96    EMR Site                           
IBDPOUTL  DIM       10     10       99    Outpatient Location                
IBDPSPAR  DIM       100    100      109   Spare                              
.
.End of Record                      209  
.
