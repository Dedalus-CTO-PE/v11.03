. v9.00.003 16/03/2002                                                       
. v9.00.004 16/03/2002                                                       
. v9.00.005 16/03/2002                                                       
. v9.00.006 16/03/2002                                                       
. v9.00.007 16/03/2002                                                       
. v9.00.008 16/03/2002                                                       
. *----------------------------------------------------------------------
. * Include Name  :   EMRLCKFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Locking of EMRVCDFD                
. *
. * File Type     :   SQL
. *
. * File Name     :   emrlckaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRLCKA1   IFILE    SQL, FIXED=102, KEY="U1-8,9-11"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMLOVIST  DIM       8      8        1     Visit Number                       
EMLOTYPS  DIM       3      3        9     Coding Type                        
EMLOUSER  DIM       10     10       12    Web User ID                        
EMLOEXTR  DIM       80     80       22    Spare Variable                     
.
.End of Record                      102  
.
