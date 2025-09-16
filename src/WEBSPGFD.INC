. V6.04.001 09/12/1997 BGA New Table                                         
. *----------------------------------------------------------------------
. * Include Name  :   WEBSPGFD.INC
. *
. * Function      :   File Def'n Include for WEB               
. *                   Interface Web Server Program Details         
. *
. * File Type     :   SQL
. *
. * File Name     :   webspgaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBSPGA1   IFILE    SQL, FIXED=267, KEY="U1-8"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBSPPRG   DIM       8      8        1     Program ID                         
WBSPNAM   DIM       40     40       9     Program Name                       
WBSPFIFO  DIM       40     40       49    Fifo File Name                     
WBSPOUTD  DIM       40     40       89    Output Directory                   
WBSPDEFT  DIM       40     40       129   Default Template File              
WBSPUR1   DIM       30     30       169   User Def Ref 1                     
WBSPUR2   DIM       30     30       199   User Def Ref 2                     
WBSPUD1   DIM       8      8        229   User Def Date 1                    
WBSPUD2   DIM       8      8        237   User Def Date 2                    
WBSPUY1   DIM       1      1        245   User Def Y/N 1                     
WBSPUY2   DIM       1      1        246   User Def Y/N 2                     
WBSPSPA   DIM       20     20       247   Spare                              
.
.End of Record                      267  
.
