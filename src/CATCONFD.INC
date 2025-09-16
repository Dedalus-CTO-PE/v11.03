.
. CATCONFD.INC
. ------------
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : CATCONFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Dietary System      *
.  *                    Control File Sectors for Dietary System         *
.  *                                                                    *
.  *     File Type    : ASCII                                           *
.  *                                                                    *
.  *     File Name    : controlf.txt                                    *
.  *                                                                    *
.  *     Sectors      : 39                                              *
.  *                                                                    *
.  *     Modifications: V5.01.01   09/10/89 Graeme Williams             * 
.  *                               FD Created                           *
.  *                    30/10/89   addition of user parameter to control*
.  *                               printing order of sticky labels      *
.  *                    07/12/89   Added CTCNCGDT (Change diets in Inp) *
.  *                    15/12/89   Bill dew : add CTCNPREC              *
.  *                    23/07/90   Peter Eddey : added CTCNUNAT         *
.  *                               (use nutritional analysis class)     *
.  *      V5.03.01  04/01/1996  Greg Horvat                                   *
.  *                Commented out the menu program, security key, IBA screen  *
.  *                password & data directory variables                       *
.  *                                                                          *
.  ****************************************************************************
.
.
.                ** SECTOR 39 **
.
.NAME     TYPE   LENGTH     START       DESCRIPTION
.----     ----   ------     -----       -----------
.....HMENUCAT  DIM       8         1         Dietary Main Menu Name
.....HSECUCAT  DIM       6         9         Company Security Code
.....HDATACAT  DIM       20        15        Data Directory
.....HSECRCAT  DIM       8         35        Passwd IBACAT98
.
.        Note : AUDITS  1 = Not Required
.
CTCNAUDA  FORM      1         51        Audit A  (catcomaf)
CTCNAUDB  FORM      1         52        Audit B  (catdefaf)
CTCNAUDC  FORM      1         53        Audit C  (catdspaf)
CTCNAUDD  FORM      1         54        Audit D  (catextaf)
CTCNAUDE  FORM      1         55        Audit E  (catiteaf)
CTCNAUDF  FORM      1         56        Audit F  (catmenaf)
CTCNAUDG  FORM      1         57        Audit G  (catmesaf)
CTCNAUDH  FORM      1         58        Audit H  (catsmlaf)
CTCNAUDI  FORM      1         59        Audit I  (catsmsaf)
CTCNAUDJ  FORM      1         60        Audit J  (catrsiaf)
CTCNAUDK  FORM      1         61        Audit K  (patnobaf)
CTCNAUDL  FORM      1         62        Audit L  (catingfd)
CTCNAUDM  FORM      1         63        Audit M  (catmthfd)
CTCNAUDN  FORM      1         64        Audit N  (catrcafd)
CTCNAUDO  FORM      1         65        Audit O  (catrcbfd)
CTCNAUDP  FORM      1         66        Audit P  (catstkfd)
CTCNAUDQ  FORM      1         67        Audit Q  (catnutfd)
CTCNAUDR  FORM      1         68        Audit R
CTCNAUDS  FORM      1         69        Audit S 
CTCNAUDT  FORM      1         70        Audit T
CTCNAUDU  FORM      1         71        Audit U
CTCNAUDV  FORM      1         72        Audit V
CTCNAUDW  FORM      1         73        Audit W
CTCNAUDX  FORM      1         74        Audit X
CTCNAUDY  FORM      1         75        Audit Y
CTCNAUDZ  FORM      1         76        Audit Z
.
.-----------------------------------------------------------------------------
.         IBA special system control parameters for dietary (77-129)
.
CTCNML1   FORM      1         77        1st meal on menu
.                                         1 = Breakfast
.                                         3 = Luncheon
.                                         5 = Dinner
CTCNORD1  DIM       3         78        Order of top distrib'n bays on B.L.T's
.                                         3 digit number, each digit from 1-6
.                                         Each digit unique in both CTCNORD1,2
CTCNORD2  DIM       3         81        Order of bottom bays on Belt Line Tckts
.                                         3 digit number, each digit from 1-6
.                                         Each digit unique in both CTCNORD1,2
CTCNFORM  FORM      2         84        Meal Menu Format
.                                         1 = Standard, 2 = Modbury, 3 = WCH
CTCNNMLS  FORM      1         86        Six meals or three meals a day ?
.                                         0 = Six (All meals)
.                                         1 = Three (Breakfast,Luncheon,Dinner)
CTCNPOFF  FORM      1         87        Menu Print Offset (Left Margin)
CTCNBFRM  FORM      2         88        Belt Line Ticket Format
.                                         1 = Standard
CTCNLDCN  DIM       16        90        Date & Time Dietary Census last run.
.                                         CCYYMMDDHH:MM:SS format.
CTCNCGDT  FORM      1         106       Diet codes only changed in IBACAT14 ?
.                                         0 = No, 1 = Yes
CTCNUNAC  FORM      1         107       Use nutritional analysis class
.                                         0 = No, 1 = Yes
.-----------------------------------------------------------------------------
.                   USER system control parameters (130-255)
.
CTCNUBAR  FORM      1         130       Using Bar-codes ?
.                                         0 = No, 1 = Yes
CTCNBCHG  FORM      1         131       Batch print menus for chg in diet code
.                                         0 = No, 1 = Yes
CTCNBELT  FORM      1         132       Printing Belt Line Tickets ?
.                                         0 = No, 1 = Yes
CTCNRMCG  FORM      1         133       Can do room allocation in IBACAT12 ?
.                                         0 = No, 1 = Yes
CTCNMAGE  FORM      2         134       Minimum age to print on menu batches
CTCNNHRS  FORM      2         136       No of hrs for flag in Inpat Diet Census
CTCNLABL  FORM      2         138       Label Format
.                                         1 = Standard
CTCNPLBL  FORM      1         140       Labels across the page (1-3)
CTCNSLBL  FORM      1         141       Labels Size
.                                         1 = 37 char labels
.                                         2 = 42 char labels
CTCNMCHG  FORM      1         142       Where to print menu code changes
.                                         0 = Reprint menus, 1 = Print menus
CTCNMTM1  DIM       5         143       Time Meal 1 (Breakfast) starts
CTCNMTM2  DIM       5         148       Time Meal 2 (Morning Tea) starts
CTCNMTM3  DIM       5         153       Time Meal 3 (Luncheon) starts
CTCNMTM4  DIM       5         158       Time Meal 4 (Afternoon Tea) starts
CTCNMTM5  DIM       5         163       Time Meal 5 (Dinner) starts
CTCNMTM6  DIM       5         168       Time Meal 6 (Supper) starts
CTCNCLRI  FORM      1         173       Clear items on change of menu ?
.                                         0 = No, 1 = Yes
CTCNKORD  FORM      1         174       Order to keyin Completed Menus
.                                         0 = Date, Admission, Meal
.                                         1 = Date, Meal, Admission
CTCNLORD  FORM      1         175       Order produce sticky labels
.                                         1 = admission order
.                                         2 = item order
CTCNNEXM  FORM      3         176       Number of extra menu printed before
.                                         displaying a warning
CTCNABIR  FORM      1         179       Automatic birthday message
.                                         0 = No, 1 = yes
CTCNBMES  DIM       3         180       Default birthday message code
CTCNBML   FORM      1         183       Meal code for birthday message
CTCNALLI  FORM      1         184       All items valid when inputing menus
.                                         0 = No, 1 = yes
CTCNPREC  FORM      1         185       Update stock usage file in print recipe
.                                         0=No  1=yes 
.End of Record                256
.-----------------------------------------------------------------------------
