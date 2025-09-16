. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSSMAFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Statistical Summary Table                        *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmssyyyy.dat                                     *
. *                      yyyy = Financial Year                            *
. *                                                                       *
. *  Keys            :   KEY14                                            *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
FMSSMAA1  IFILE     SQL, FIXED=295, KEY="U1-2,3-14"
FMSSMAA2  IFILE     SQL, FIXED=295, KEY="U1-2,3-14"  * Last Year
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMSSLEDG  DIM       2      2        1     Ledger   
FMSSACCT  DIM       12     12       3     Account  
.
FMSSA1    FORM      12.5   10       15    Units Period 1
FMSSA2    FORM      12.5   10       25    Units Period 2
FMSSA3    FORM      12.5   10       35    Units Period 3
FMSSA4    FORM      12.5   10       45    Units Period 4
FMSSA5    FORM      12.5   10       55    Units Period 5
FMSSA6    FORM      12.5   10       65    Units Period 6
FMSSA7    FORM      12.5   10       75    Units Period 7
FMSSA8    FORM      12.5   10       85    Units Period 8
FMSSA9    FORM      12.5   10       95    Units Period 9
FMSSA10   FORM      12.5   10       105   Units Period 10
FMSSA11   FORM      12.5   10       115   Units Period 11
FMSSA12   FORM      12.5   10       125   Units Period 12
FMSSA13   FORM      12.5   10       135   Units Period 13
.
FMSSC1    FORM      12.5   10       145   Units Period 1
FMSSC2    FORM      12.5   10       155   Units Period 2
FMSSC3    FORM      12.5   10       165   Units Period 3
FMSSC4    FORM      12.5   10       175   Units Period 4
FMSSC5    FORM      12.5   10       185   Units Period 5
FMSSC6    FORM      12.5   10       195   Units Period 6
FMSSC7    FORM      12.5   10       205   Units Period 7
FMSSC8    FORM      12.5   10       215   Units Period 8
FMSSC9    FORM      12.5   10       225   Units Period 9
FMSSC10   FORM      12.5   10       235   Units Period 10
FMSSC11   FORM      12.5   10       245   Units Period 11
FMSSC12   FORM      12.5   10       255   Units Period 12
FMSSC13   FORM      12.5   10       265   Units Period 13
.
FMSSSPAR  DIM       20     20       275   Spare
.
.End of Record                      295
.
