. **************************************************************************
. *                                                                        *
. *  Include Name    :   FMSCODFD.INC                                      *
. *                                                                        *
. *  Function        :   File Def'n Include for Financial Management       *
. *                      Code Master Details                               *
. *                                                                        *
. *  File Type       :   SQL                                               *
. *                                                                        *
. *  File Name       :   fmscodaf.dat                                      *
. *                                                                        *
. *  Keys            :   KEY5                                              *
. *                                                                        *
. *  Modifications   :                                                     *
. **************************************************************************
.
FMSCODA1   IFILE SQL, FIXED=46, KEY="U1-2,3-5"
FMSCODA2   IFILE SQL, FIXED=46, KEY="U3-5,1-2"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMCDCATY  DIM       2      2        1     Category code
FMCDCODE  DIM       3      3        3     Code
FMCDDESC  DIM       20     20       6     Description
FMCDSPAR  DIM       20     20       26    Spare
.
.End of Record                      46 
