. *****************************************************************************
. *                                                                           *
. * Include Name  : PCPCONFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for                               *
. *                 Control File Sectors for Patient Care Plan System         *
. *                                                                           *
. * File Type     : ASCII                                                     *
. *                                                                           *
. * File Name     : controlf.txt                                              *
. *                                                                           *
. * Sectors       : 41                                                        *
. *                                                                           *
. * Modifications :                                                           *
. *      V9.02.00  30/12/2002 Tracey Nguyen srf 23497                         *
. *                r5.10 Care Plans Port to V9                                *
. *---------------------------------------------------------------------------*
. * Modifications : 18/12/89 Glen Hobby                                       *
. *                 FD Created                                                *
. *                 30/04/89 Peter Eddey                                      *
. *                 Added PCCNUREL and PCCNUDEF                               *
. *                 18/11/1991    Justin Coates                               *
. *                 Added PCCNEREL to PCCNEINT                                *
. *                 14/12/1993  Glenn Berry      Hawkes Bay Changes           *
. *                 Added PCCNFEVA                                            *
. *       V5.03.01  04/01/1996  Greg Horvat                                   *
. *                 Commented out the menu program, security key, IBA screen  *
. *                 password & data directory variables                       *
. *       V5.04.01  09/09/1996  Steve Armstrong  STH mods                     *
. *                 Added PCCNSECL                                            *
. *                                                                           *
. *****************************************************************************
.
.                ** SECTOR 41 **
.
.NAME     TYPE   LENGTH     START       DESCRIPTION
.----     ----   ------     -----       -----------
.....HMENUPCP  DIM       8         1         Patient Care Plan Main Menu Name
.....HSECUPCP  DIM       6         9         Company Security Code
.....HDATAPCP  DIM       20        15        Data Directory
.....HSECRPCP  DIM       8         35        Passwd IBACAT98
.
.        Note : AUDITS  1 = Not Required
.
PCCNAUDA  FORM      1         51        Database File Audit 
PCCNAUDB  FORM      1         52        Database File Description Audit 
PCCNAUDC  FORM      1         53        Clinic Condition Related Factors Audit 
PCCNAUDD  FORM      1         54        Nursing Diagnoses Audit 
PCCNAUDE  FORM      1         55        Patient Related Factors Audit 
PCCNAUDF  FORM      1         56        Patient Defining Characteristics Audit 
PCCNAUDG  FORM      1         57        Patient Outcomes Audit 
PCCNAUDH  FORM      1         58        Nursing Intervention Audit 
PCCNAUDI  FORM      1         59        Patient Descriptions Audit 
PCCNAUDJ  FORM      1         60        Nurse Audit 
PCCNAUDK  FORM      1         61        Evaluation Audit 
PCCNAUDL  FORM      1         62        Discharges Audit 
PCCNAUDM  FORM      1         63        Location Audit 
PCCNAUDN  FORM      1         64        Audit N
PCCNAUDO  FORM      1         65        Audit O
PCCNAUDP  FORM      1         66        Audit P
PCCNAUDQ  FORM      1         67        Audit Q
PCCNAUDR  FORM      1         68        Audit R
PCCNAUDS  FORM      1         69        Audit S 
PCCNAUDT  FORM      1         70        Audit T
PCCNAUDU  FORM      1         71        Audit U
PCCNAUDV  FORM      1         72        Audit V
PCCNAUDW  FORM      1         73        Audit W
PCCNAUDX  FORM      1         74        Audit X
PCCNAUDY  FORM      1         75        Audit Y
PCCNAUDZ  FORM      1         76        Audit Z
.
PCCNSSEC  FORM      1         77        Nursing station security level
PCCNDCAT  FORM      1         78        Diagnostic Category
.                                         1 = Type of Condition
.                                         3 = Health Pattern
.                                         4 = Response Pattern
.                                         5 = ABC PRN REST
PCCNUNIQ  FORM      10         79       Unique Key
PCCNUREL  FORM      1          89       Using related factors
.                                         0 = No
.                                         1 = Yes
PCCNUDEF  FORM      1          90       Using defining characteristics
.                                         0 = No
.                                         1 = Yes
PCCNEREL  FORM      1          91       Related factors/defining char. editting
.                                       being used ?            0 = No, 1 = Yes
PCCNEDEF  FORM      1          92       Defining char./outcomes editting
.                                       being used ?            0 = No, 1 = Yes
PCCNEOUT  FORM      1          93       Outcomes/Interventions editting
.                                       being used ?            0 = No, 1 = Yes
PCCNEINT  FORM      1          94       Interventions/frequencies editting
.                                       being used ?            0 = No, 1 = Yes
PCCNFEVA  FORM      1          95       Force input of Evaluation after Mods?
.                                         0 = No, 1= Yes
PCCNSECL  FORM      1          96       Security level for Reactivate option
.
.End of Record                256
.
