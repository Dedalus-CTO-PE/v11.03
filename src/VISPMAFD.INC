. *----------------------------------------------------------------------
. * Include Name  :   VISPMAFD.INC
. *
. * Function      :   File Def'n Include for Visit System                       
. *                   Visit Based Payer Member Accounts  
. *
. * File Type     :   SQL
. *
. * File Name     :   vispmaaf.dat
. *
. * Modifications :
. *       V9.08.00  22/11/2006  Mike Laming   CAR 103368
. *                 CCPS EDI Extract - ported from 9.07 
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
VISPMAA1   IFILE    SQL, FIXED=350, KEY="U1-8,15-29"
VISPMAA2   IFILE    SQL, FIXED=350, KEY="U1-8,9-14,15-29"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
VSPMVISN  DIM       8      8        1     Visit Number                       
VSPMPAYC  DIM       6      6        9     Expected Payor Code (Health Fund)  
VSPMMACN  DIM       15     15       15    Member Account No.                 
VSPMMNAM  DIM       60     60       30    Account Holder Name                
VSPMRLTP  DIM       2      2        90    Relationship to Patient            
VSPMMPID  DIM       17     17       92    Member's Id No.
VSPMMPIT  DIM       2      2        109   Member's Id Type
VSPMMAD1  DIM       35     35       111   Member's Address Line 1
VSPMMAD2  DIM       35     35       146   Member's Address Line 1
VSPMMAD3  DIM       35     35       181   Member's Address Line 1
VSPMMAD4  DIM       35     35       216   Member's Address Line 1
VSPMMPCD  DIM       10     10       251   Member's Post Code
VSPMEAMT  FORM      12.2   8        261   Amount to be paid by Member
.                                           (default 0.00)     OR
VSPMEPEC  FORM      3      3        269   Percentage to be paid by Member
.                                           (default 0)
.
VSPMCDAT  DIM       8      8        272   Date Record Created (CCYYMMDD)     
VSPMCTIM  DIM       8      8        280   Time Record Created (HH:MM:SS)     
VSPMCUID  DIM       10     10       288   WEB User ID Created (websecaf)     
VSPMUDAT  DIM       8      8        298   Date Record Updated (CCYYMMDD)     
VSPMUTIM  DIM       8      8        306   Time Record Updated (HH:MM:SS)     
VSPMUUID  DIM       10     10       314   WEB User ID Created (websecaf)     
VSPMSPAR  DIM       26     26       324   Spare                              
.
.End of Record                      350  
.
