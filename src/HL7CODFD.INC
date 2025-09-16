. V5.06.001 19/11/1998                                                       
. V5.06.002 10/12/1998                                                       
. *----------------------------------------------------------------------
. * Include Name  :   HL7CODFD.INC
. *
. * Function      :   File Def'n Include for Heakth Level 7                     
. *                   HL7 Codes Table                    
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7codaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7CODA1   IFILE    SQL, FIXED=140, KEY="U1-4,5-14"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLCOTID   DIM       4      4        1     Table ID                           
HLCOCOD   DIM       10     10       5     Code                               
HLCODES   DIM       60     60       15    Description                        
HLCOCAT   DIM       2      2        75    IBA Category                       
HLCOICD   DIM       3      3        77    IBA Code                           
HLCOBGC   DIM       7      7        80    Web Background Color               
HLCOSPA   DIM       53     53       87    Spare                              
.
.End of Record                      140  
.
