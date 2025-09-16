.
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : CATCOMFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Dietary             *
.  *                    Completed Menus Table                           *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : catcomaf.dat                                    *
.  *     Audit Name   : cataudco.dat (Audit file)                       *
.  *                                                                    *
.  *     Keys         : KEY17,                                          *
.  *                    KEY19 (Audit file),                             *  
.  *                    KEY20                                           *
.  *                                                                    *
.  *     Programmer   : i chung 13/10/89                                *
.  *                                                                    *
.  *     Modifications: 13/12/1989 Monika Ohleiter                      *
.  *                               Added audits                         *
.  *                    28/03/1995 Helen Crick                          *
.  *                               Standardised FD                      * 
.  *                    28/03/2001 Dave Matthews                        *
.  *                               Added CTCODNAM,CTCOPAGN,CTCOOTHR     * 
.  *                                     CTCODTYP & CTCOALVL            * 
.  *                    22/06/2001 Helen Donnard                        *
.  *                               Changed Other Details to be Cat MM   * 
.  *                                                                    * 
.  **********************************************************************
.
.Audit File
.
CATAUDCO  IFILE     SQL, FIXED=234, KEY="D1-8,9-16,17-18,19-19"
.
CTCOAUDD  DIM       8      8   	1	* Date of change
CTCOAUDT  DIM       8      8    9	* Time of change
CTCOAUDP  DIM       2      2    17	* Port doing change
CTCOAUDR  DIM       1      1    19	* Record Type
.                                  	  A = Added record (ie a write)
.                                 	  B = Before any changes
.                                         C = After any changes (ie an update)
.                                         D = Deleted record (ie a delete)
CTCOAUDS  FORM      1      2    20	* Record Status
.                                 	  1 = Not printed
.                                 	  2 = Printed
CTCOAUDO  DIM       4      4    22	* Operator ID that did the change
.
.Data File Definition
.
CATCOMA1  IFILE     SQL, FIXED=209, KEY="U1-8,9-16,17-17"
CATCOMA2  IFILE     SQL, FIXED=209, KEY="U9-16,17-17,21-23,1-8"
.
. NAME    TYPE   LENGTH  PHYSICAL  START LOC.  DESCRIPTION
. ----    ----   ------  --------  ----------  -----------
DCTCOADM  DIM       8        8          1      Admission code
CTCODATE  DIM       8        8          9      Meal Date (CCYYMMDD)
DCTCOMEA  DIM       1        1         17      Meal Code
.                                                1 = Breakfast
.                                                2 = Morning Tea
.                                                3 = Lunch
.                                                4 = Afternoon Tea
.                                                5 = Dinner
.                                                6 = Supper
CTCOMENU  DIM       3        3         18      Menu Code for this meal
.                                                (Category "ME")
CTCODIET  DIM       3        3         21      Diet Code for this meal
.                                                (Category "DC")
CTCOWARD  DIM       3        3         24      Ward for this meal
CTCOSIZE  FORM      1        2         27      Serving Size
.                                                0 = Menu not returned yet
.                                                1 = Small
.                                                2 = Medium
.                                                3 = Large
.                                                4 = Fasting
CTCOSTAT  FORM      1        2         29      Meal Status
.                                                0 = Menu Not Printed
.                                                1 = Menu Printed
.                                                2 = Menu Returned
CTCOBELT  FORM      1        2         31      Belt line ticket printed ?
.                                                1 = Yes
.                                                2 = No
CTCOMTYP  FORM      1        2         33      Menu type printed
.                                                1 = Standard Menu (from
.                                                    menu file)
.                                                2 = Daily Special, no ward code
.                                                3 = Daily Special, with ward
.                                                    code
.                                                4 = Fasting
CTCOPRNT  DIM      16       16         35      Date & time meal was printed
.                                                (CCYYMMDDHH:MM:SS)
CTCOIT01  DIM       5        5         51      Selected Item 01 (from CATITEFD)
CTCOIT02  DIM       5        5         56      Selected Item 02 (from CATITEFD)
CTCOIT03  DIM       5        5         61      Selected Item 03 (from CATITEFD)
CTCOIT04  DIM       5        5         66      Selected Item 04 (from CATITEFD)
CTCOIT05  DIM       5        5         71      Selected Item 05 (from CATITEFD)
CTCOIT06  DIM       5        5         76      Selected Item 06 (from CATITEFD)
CTCOIT07  DIM       5        5         81      Selected Item 07 (from CATITEFD)
CTCOIT08  DIM       5        5         86      Selected Item 08 (from CATITEFD)
CTCOIT09  DIM       5        5         91      Selected Item 09 (from CATITEFD)
CTCOIT10  DIM       5        5         96      Selected Item 10 (from CATITEFD)
CTCOIT11  DIM       5        5        101      Selected Item 11 (from CATITEFD)
CTCOIT12  DIM       5        5        106      Selected Item 12 (from CATITEFD)
CTCOIT13  DIM       5        5        111      Selected Item 13 (from CATITEFD)
CTCOIT14  DIM       5        5        116      Selected Item 14 (from CATITEFD)
CTCOIT15  DIM       5        5        121      Selected Item 15 (from CATITEFD)
CTCOIT16  DIM       5        5        126      Selected Item 16 (from CATITEFD)
CTCOIT17  DIM       5        5        131      Selected Item 17 (from CATITEFD)
CTCOIT18  DIM       5        5        136      Selected Item 18 (from CATITEFD)
CTCOIT19  DIM       5        5        141      Selected Item 19 (from CATITEFD)
CTCOIT20  DIM       5        5        146      Selected Item 20 (from CATITEFD)
CTCODNAM  DIM      10       10        151      Name of Dietician
CTCOPAGN  DIM      20       20        161      Dietician's Pager Number
CTCOOTHR  DIM       3        3        181      Other Details (Cat MM)
CTCODTYP  DIM       3        3        184      Diet Type (Cat MJ)
CTCOALVL  DIM       3        3        187      Assistance Lvl (Dietary req.)
.                                              (Cat MK)
CTCOSPAR  DIM      19       19        190      Spare Variable
.
.End of Record                        209  
.
.
.  redefine form fields for keys
.  -----------------------------
.
. NAME    TYPE   LENGTH     START LOC.     DESCRIPTION
. ----    ----   ------     ----------     -----------
CTCOADMN  FORM      8            1         Admission Number
CTCOMEAL  FORM      1           17         Meal Code
