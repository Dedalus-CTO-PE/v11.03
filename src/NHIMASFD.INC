. V10.14.01 20/02/2019 EC C-0867703 Ethnicity field additions and length change
. V5.02.001 02/10/1994                                                       
. *----------------------------------------------------------------------
. * Include Name  :   NHIMASFD.INC
. *
. * Function      :   File Def'n Include for NZ Health Interface
. *                   NHI/MWS HCU Details                
. *
. * File Type     :   SQL
. *
. * File Name     :   nhimasaf.dat
. * Audit Name    :   nhiaudma.dat
. *
. * Modifications :   
. *  **** Programmer Note **************
. *       Any changes to this FD may also need to be made in PMSQPTFD.
. *       Please check this before proceeding.
. *
. *                   27/06/96 Paul Howells   MOH mods
. *                   Added NHMAETH2, NHMAETH3
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
NHIAUDMA   IFILE    SQL, FIXED=376, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NHMAAUDD  DIM       8      8        1     Date of Change
NHMAAUDT  DIM       8      8        9     Time of Change
NHMAAUDP  DIM       2      2        17    Port
NHMAAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
NHMAAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
NHMAAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
NHIMASA1   IFILE    SQL, FIXED=351, KEY="U1-7"                                  
NHIMASA2   IFILE    SQL, FIXED=351, KEY="U8-15"                                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NHMANMPI  DIM       7      7        1     National HCU ID                    
NHMAURNO  DIM       8      8        8     Local U/R Number                   
NHMASURN  DIM       25     25       16    Surname                            
NHMAGIV1  DIM       20     20       41    Given Name 1                       
NHMAGIV2  DIM       20     20       61    Given Name 2                       
NHMAGIV3  DIM       20     20       81    Given Name 3                       
NHMAPREI  DIM       1      1        101   Preferred Name Indicator (1-3)     
NHMAADD1  DIM       35     35       102   Address Line 1                     
NHMAADD2  DIM       30     30       137   Address Line 2                     
NHMAADD3  DIM       30     30       167   Suburb                             
NHMAADD4  DIM       30     30       197   City/Town                          
NHMAADD5  DIM       30     30       227   Country                            
NHMADOB   DIM       8      8        257   Date of Birth                      
NHMADDTH  DIM       8      8        265   Date of Death                      
NHMADOMC  DIM       4      4        273   Domicile Code                      
NHMARES   DIM       1      1        277   Residence Status (Y/N)             
NHMAETH   DIM       5      5        278   Ethnicity
NHMASEX   DIM       1      1        283   Gender
NHMADAT   DIM       8      8        284   Date Last Updated
NHMATIM   DIM       8      8        292   Time Last Updated
NHMAETH2  DIM       5      5        300   2nd Ethnicity
NHMAETH3  DIM       5      5        305   3rd Ethnicity
NHMAETH4  DIM       5      5        310   4th Ethnicity
NHMAETH5  DIM       5      5        315   5th Ethnicity
NHMAETH6  DIM       5      5        320   6th Ethnicity
NHMASPA   DIM       26     26       325   Spare
.
.End of Record                      351
.
