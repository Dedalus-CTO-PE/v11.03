.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRICMNFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File definition include for Private Practice  *
.  *                        Comments Details                              *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   pricmntf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY13                                         *
.  *                                                                      *
.  *  Modifications     :   08/10/92  Steve Armstrong                     *
.  *                        Modified PRCMDEBT from a FORM 8 to a DIM 8    *
.  *                        to handle alphanumeric debtor numbers         *
.  *                                                                      *
.  ************************************************************************
.Data File Definition
.--------------------
PRICMNT1   IFILE SQL, FIXED=84, KEY="U1-8,9-10,11-13"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRCMDEBT  DIM         8       8       1   Debtor Number
DPRCMSCN  DIM         2       2       9   Scan Flag
.                                          0 = Debtor
.                                          1 = PMI
DPRCMLNO  DIM         3       3       11  Line number for comment
PRCMLINE  DIM         70      70      14  Text line
.
.End of Record                        84
.
PRICENDP  FORM        3
PRIDIM127 DIM       127
. 
.
. Redefine form fields from key
. -----------------------------
PRCMSCAN  FORM        2
PRCMCLNO  FORM        3
