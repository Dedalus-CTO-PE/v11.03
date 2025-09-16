. V5.07.002 10/09/1999 kcn Added HL7 message id and sending application      
. *----------------------------------------------------------------------
. * Include Name  :   RESLABFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Clinical Results Laboratory Master 
. *
. * File Type     :   SQL
. *
. * File Name     :   reslabaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RESLABA1   IFILE    SQL, FIXED=182, KEY="U1-3"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
RELBLCD   DIM       3      3        1     Code                               
RELBDES   DIM       40     40       4     Description                        
RELBLRN   FORM      4      3        44    Last Run Number                    
RELBEML   DIM       50     50       47    E-Mail Address for Lab             
RELBHEM   DIM       50     50       97    Hospital E-Mail Address for Errors 
RELBMID   FORM      8      5        147   HL7 Message ID                     
RELBSAP   DIM       10     10       152   HL7 Sending Application            
RELBSPA   DIM       20     20       162   Spare                              
.
.End of Record                      182  
.
