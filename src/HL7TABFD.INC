. V5.06.001 19/11/1998                                                       
. *----------------------------------------------------------------------
. * Include Name  :   HL7TABFD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   HL7 Table Details                  
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7tabaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7TABA1   IFILE    SQL, FIXED=105, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLTATID   DIM       4      4        1     Table ID                           
HLTADES   DIM       40     40       5     Description                        
HLTASPA   DIM       60     60       45    Spare                              
.
.End of Record                      105  
.
