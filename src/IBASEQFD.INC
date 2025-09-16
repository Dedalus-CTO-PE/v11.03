. V10.07.01 11/02/2015 EC C-294154 Added SMS ID                       
. V10.03.01 19/07/2012 EC C-261630 Added TFILE type                             
. V10.01.01 24/03/2011 JP  Created for CAR 239574                               
. *----------------------------------------------------------------------
. * Include Name  :   IBASEQFD.INC
. *
. * Function      :   File Def'n Include for IBA Software                       
. *                   Sequential Numbers Table           
. *
. * File Type     :   SQL
. *
. * File Name     :   ibaseqaf.dat
. *
. * Index Values  :   KEY8                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBASEQA1   IFILE    SQL, FIXED=171, KEY="U1-8"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBSQTYPE  DIM       8      8        1     Type                               
.                                         SPOOL - Spool File                   
.                                         TFILE - Temp File                    
.                                         SMSID - SMS Messsage ID              
IBSQNEXT  FORM      10     6        9     Next Number                        
IBSQDESC  DIM       50     50       15    Description                        
IBSQMAXM  FORM      10     6        65    Maximum Number                     
IBSQSPAR  DIM       100    100      71    Spare                              
.
.End of Record                      171  
.
