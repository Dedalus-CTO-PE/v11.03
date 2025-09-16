.
. MAMCONFD.INC
. ------------
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : MAMCONFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for                     *
.  *                    Control File Sectors for Mammography System     *
.  *                                                                    *
.  *     File Type    : ASCII                                           *
.  *                                                                    *
.  *     File Name    : controlf.txt                                    *
.  *                                                                    *
.  *     Keys         : KEY                                             *
.  *                                                                    *
.  *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  **********************************************************************
.
.
.                ** SECTOR 54 **
.
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
HMENUMAM    DIM          8         1      Mammography Main Menu name
HSECUMAM    DIM          6         9      Company Security Code
HDATAMAM    DIM         20        15      Data Directory
HSECRMAM    DIM          8        35      Passwd IBAMAM98
.
.        Note : AUDITS  1 = NOT REQUIRED 
.
HMAUDA      FORM         1        51      Mammography Attendees
HMAUDB      FORM         1        52      Mammography Bookings
HMAUDC      FORM         1        53      Audit C    
HMAUDD      FORM         1        54      Audit D
HMAUDE      FORM         1        55      Audit E
HMAUDF      FORM         1        56      Audit F
HMAUDG      FORM         1        57      Audit G
HMAUDH      FORM         1        58      Audit H 
HMAUDI      FORM         1        59      Mammography Clinic ID's
HMAUDJ      FORM         1        60      Audit J
HMAUDK      FORM         1        61      Audit K
HMAUDL      FORM         1        62      Audit L
HMAUDM      FORM         1        63      Mammography Clinic Master
HMAUDN      FORM         1        64      Mammography Non-Attendees
HMAUDO      FORM         1        65      Audit O
HMAUDP      FORM         1        66      Mammography Public Holidays
HMAUDQ      FORM         1        67      Audit Q
HMAUDR      FORM         1        68      Audit R
HMAUDS      FORM         1        69      Mammography Sites
HMAUDT      FORM         1        70      Mammography Clinic Types
HMAUDU      FORM         1        71      Audit U
HMAUDV      FORM         1        72      Audit V
HMAUDW      FORM         1        73      Audit W
HMAUDX      FORM         1        74      Audit X
HMAUDY      FORM         1        75      Audit Y
HMAUDZ      FORM         1        76      Audit Z
.
HMDIM1      DIM          3        77      Comp.Code for WORKCARE
HMDIM2      DIM          3        80      Comp.Code for MOTOR ACCIDENT BOARD
HMDIM3      DIM          3        83      Comp.Code for VETERAN AFFAIRS
HMDIM4      DIM          3        86      Comp.Code for CORRECTIVE SERVICES
HMLPAGE     FORM         1        89      No.of labels across page
HMLPRNT     FORM         3        90      Default no.of labels to print
HMLSIZE     FORM         1        93      Label Size
.                                         1 = Small (37 Char)
.                                         2 = Large (42 Char)
HMPMR3      FORM         1        94      Using MR3 forms ?
.                                         0 = No
.                                         1 = Yes
HMRVCODE    DIM          3        95      Default code for Revisits
HMAAESCD    DIM          3        98      Source code for A&E attendances
HMBMSOPT    FORM         1       101      Display booking message ?
.                                         0 = No
.                                         1 = Yes
HMBKMESG    DIM         60       102      Message to display during booking
HMLABLAY    FORM         2       162      Layout for Mammography Labels   
.                                         1 = Modbury
.                                         2 = St.Andrews Rockhampton
HMLBMESG    DIM         30       164      Message to print on 2nd line of label
.
.End of Record    256
.
.            ** SECTOR 55 **
.
.            User Defined Fields
.
CATT1       FORM         1          1      Using User Defined Field 1 for 
.                                          Attendees?
.                                          0 = No
.                                          1 = Yes
CATTDES1    DIM          15         2      Description for User Defined Field 1
CATTMAN1    FORM         1         17      Is User Defined Field 1 Mandatory
CATT2       FORM         1         18      Using User Defined Field 2 for 
.                                          Attendees?
.                                          0 = No
.                                          1 = Yes
CATTDES2    DIM          15        19      Description for User Defined Field 2
CATTMAN2    FORM         1         34      Is User Defined Field 2 Mandatory
CATT3       FORM         1         35      Using User Defined Field 3 for 
.                                          Attendees?
.                                          0 = No
.                                          1 = Yes
CATTDES3    DIM          15        36      Description for User Defined Field 3
CATTMAN3    FORM         1         51      Is User Defined Field 3 Mandatory
CATT4       FORM         1         52      Using User Defined Field 4 for 
.                                          Attendees?
.                                          0 = No
.                                          1 = Yes
CATTDES4    DIM          15        53      Description for User Defined Field 4
CATTMAN4    FORM         1         68      Is User Defined Field 4 Mandatory
CTES1       FORM         1         69      Using User Defined Field 1 for 
.                                          Test Results?
.                                          0 = No
.                                          1 = Yes
CTESDES1    DIM          15        70      Description for User Defined Field 1
CTESMAN1    FORM         1         85      Is User Defined Field 1 Mandatory
CTES2       FORM         1         86      Using User Defined Field 2 for 
.                                          Test Results?
.                                          0 = No
.                                          1 = Yes
CTESDES2    DIM          15        87      Description for User Defined Field 2
CTESMAN2    FORM         1        102      Is User Defined Field 2 Mandatory
CTES3       FORM         1        103      Using User Defined Field 3 for 
.                                          Test Results?
.                                          0 = No
.                                          1 = Yes
CTESDES3    DIM          15       104      Description for User Defined Field 3
CTESMAN3    FORM         1        119      Is User Defined Field 3 Mandatory
CTES4       FORM         1        120      Using User Defined Field 4 for 
.                                          Test Results?
.                                          0 = No
.                                          1 = Yes
CTESDES4    DIM          15       121      Description for User Defined Field 4
CTESMAN4    FORM         1        136      Is User Defined Field 4 Mandatory
CABN1       FORM         1        137      Using User Defined Field 1 for 
.                                          Abnormalities?
.                                          0 = No
.                                          1 = Yes
CABNDES1    DIM          15       138      Description for User Defined Field 1
CABNMAN1    FORM         1        153      Is User Defined Field 1 Mandatory
CABN2       FORM         1        154      Using User Defined Field 2 for 
.                                          Abnormalities?
.                                          0 = No
.                                          1 = Yes
CABNDES2    DIM          15       155      Description for User Defined Field 2
CABNMAN2    FORM         1        170      Is User Defined Field 2 Mandatory
CABN3       FORM         1        171      Using User Defined Field 3 for 
.                                          Abnormalities?
.                                          0 = No
.                                          1 = Yes
CABNDES3    DIM          15       172      Description for User Defined Field 3
CABNMAN3    FORM         1        187      Is User Defined Field 3 Mandatory
CABN4       FORM         1        188      Using User Defined Field 4 for 
.                                          Abnormalities?
.                                          0 = No
.                                          1 = Yes
CABNDES4    DIM          15       189      Description for User Defined Field 4
CABNMAN4    FORM         1        204      Is User Defined Field 4 Mandatory
.
.
.End of Record     256
.                    
.
.            ** SECTOR 56 **
.
.            User Defined Fields
.
CATT5       FORM         1          1      Using User Defined Field 5 for 
.                                          Attendees?
.                                          0 = No
.                                          1 = Yes
CATTDES5    DIM          15         2      Description for User Defined Field 5
CATTMAN5    FORM         1         17      Is User Defined Field 5 Mandatory
CATT6       FORM         1         18      Using User Defined Field 6 for 
.                                          Attendees?
.                                          0 = No
.                                          1 = Yes
CATTDES6    DIM          15        19      Description for User Defined Field 6
CATTMAN6    FORM         1         34      Is User Defined Field 6 Mandatory
CATT7       FORM         1         35      Using User Defined Field 7 for 
.                                          Attendees?
.                                          0 = No
.                                          1 = Yes
CATTDES7    DIM          15        36      Description for User Defined Field 7
CATTMAN7    FORM         1         51      Is User Defined Field 7 Mandatory
CATT8       FORM         1         52      Using User Defined Field 8 for 
.                                          Attendees?
.                                          0 = No
.                                          1 = Yes
CATTDES8    DIM          15        53      Description for User Defined Field 8
CATTMAN8    FORM         1         68      Is User Defined Field 8 Mandatory
CTES5       FORM         1         69      Using User Defined Field 5 for 
.                                          Test Results?
.                                          0 = No
.                                          1 = Yes
CTESDES5    DIM          15        70      Description for User Defined Field 5
CTESMAN5    FORM         1         85      Is User Defined Field 5 Mandatory
CTES6       FORM         1         86      Using User Defined Field 6 for 
.                                          Test Results?
.                                          0 = No
.                                          1 = Yes
CTESDES6    DIM          15        87      Description for User Defined Field 6
CTESMAN6    FORM         1        102      Is User Defined Field 6 Mandatory
CTES7       FORM         1        103      Using User Defined Field 7 for 
.                                          Test Results?
.                                          0 = No
.                                          1 = Yes
CTESDES7    DIM          15       104      Description for User Defined Field 7
CTESMAN7    FORM         1        119      Is User Defined Field 7 Mandatory
CTES8       FORM         1        120      Using User Defined Field 8 for 
.                                          Test Results?
.                                          0 = No
.                                          1 = Yes
CTESDES8    DIM          15       121      Description for User Defined Field 8
CTESMAN8    FORM         1        136      Is User Defined Field 8 Mandatory
CABN5       FORM         1        137      Using User Defined Field 5 for 
.                                          Abnormalities?
.                                          0 = No
.                                          1 = Yes
CABNDES5    DIM          15       138      Description for User Defined Field 5
CABNMAN5    FORM         1        153      Is User Defined Field 5 Mandatory
CABN6       FORM         1        154      Using User Defined Field 6 for 
.                                          Abnormalities?
.                                          0 = No
.                                          1 = Yes
CABNDES6    DIM          15       155      Description for User Defined Field 6
CABNMAN6    FORM         1        170      Is User Defined Field 6 Mandatory
CABN7       FORM         1        171      Using User Defined Field 7 for 
.                                          Abnormalities?
.                                          0 = No
.                                          1 = Yes
CABNDES7    DIM          15       172      Description for User Defined Field 7
CABNMAN7    FORM         1        187      Is User Defined Field 7 Mandatory
CABN8       FORM         1        188      Using User Defined Field 8 for 
.                                          Abnormalities?
.                                          0 = No
.                                          1 = Yes
CABNDES8    DIM          15       189      Description for User Defined Field 8
CABNMAN8    FORM         1        204      Is User Defined Field 8 Mandatory
.
.                    
.End of Record     256
.
