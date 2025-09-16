. V10.04.01 26/02/2014 PA C-287247 Added printer description and new key        
. V10.02.01 29/03/2011 JP  Created for CAR 239574                               
. *----------------------------------------------------------------------
. * Include Name  :   IBAPDDFD.INC
. *
. * Function      :   File Def'n Include for IBA Software                       
. *                   Printer Department Details         
. *
. * File Type     :   SQL
. *
. * File Name     :   ibapddaf.dat
. *
. * Index Values  :   KEY12   KEY15   KEY12   KEY32                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBAPDDA1   IFILE    SQL, FIXED=136, KEY="U1-6,10-15"                            
IBAPDDA2   IFILE    SQL, FIXED=136, KEY="U1-6,7-9,10-15"                        
IBAPDDA3   IFILE    SQL, FIXED=136, KEY="U10-15,1-6"                            
IBAPDDA4   IFILE    SQL, FIXED=136, KEY="U1-6,16-35,10-15"                      
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBPDDEPT  DIM       6      6        1     Department (ibadptaf)              
IBPDSEQU  DIM       3      3        7     Sequence                           
IBPDPRTR  DIM       6      6        10    Printer                            
IBPDPDSC  DIM       20     20       16    PRTDESC from IBAPRTFD              
IBPDSPAR  DIM       100    100      36    Spare                              
.
.End of Record                      136  
.
