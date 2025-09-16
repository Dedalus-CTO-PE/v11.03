.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   EMRUNKFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Emergency         *
.  *                        Unknown Patients                              *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   emrunkaf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY8                                          *
.  *                                                                      *
.  *  Modifications     :   V6.06.01  28/04/1999  Nicole Harrington       *
.  *                                  Added surname, given name and DOB   *
.  *                        V6.06.00  09/02/1999  Nicole Harrington       *
.  *                                  Ported from V5.07                   *
.  ************************************************************************
.
.Data File Definition
.--------------------
EMRUNKA1   IFILE SQL, FIXED=164, KEY="U1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DEMUNADM  DIM         8        8      1   ED Visit number
EMUNDET1  DIM        50       50      9   Details Line 1
EMUNDET2  DIM        50       50     59   Details Line 2
EMUNSEX   DIM         1        1    109   Patient's Sex (M or F)
EMUNAGE   FORM        3        3    110   Patient's Approx Age
EMUNSNAM  DIM        20       20    113   Patient's Surname
EMUNGNAM  DIM        20       20    133   Patient's Given Name
EMUNBDAT  DIM         8        8    153   Patient's DOB
EMUNSPAR  DIM         3        3    161   Spare
.
.End of record                      164
.
. Redefine form fields from key
. -----------------------------
EMUNADMN  FORM        8
