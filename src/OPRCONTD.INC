.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : OPRCONTD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for Theatre                   *
.  *                    Operating Room Control File cgi variables             *
.  *                                                                          *
.  *     Sector used  : 40,42,68,113                                          *
.  *                                                                          *
.  *     Modifications:                                                       *
.  *      V11.03.01 22/02/2023  Alina Bhari      TSK  0928951                 *
.  *                Added OPRCN058                                            *
.  *      V11.02.01 23/05/2022  Jacob Jackson    TSK  0914210                 *
.  *                Add OPRCN056/0PRCN057                                     *
.  *      V11.00.01 22/04/2020  Ebon Clements    Task 0850105                 *
.  *                Added OPRCN055 - Display theatre status in patient header *
.  *      V10.15.01 21/11/2019  Peter Vela       Task 0871644                 *
.  *                Added OPRCN054 - OPCNPTMC                                 *
.  *                Preference and Tray items from Misc Chrg Items file       *
.  *      V10.13.01 11/09/2018  Ania P           TSK 0859769                  *
.  *                Added OPRCN053                                            *
.  *      V10.12.06 17/07/2018  Richa Phogat     TSK 0851661                  *
.  *                Added OPRCN052/OPCNZCN6 - Write inbound ZSC.6 to          *
.  *                oprardaf.oparanas only                                    *
.  *      V10.12.05 16/07/2018  Ken Bell         TSK 0850101                  *
.  *                Added OPCNDTSV Display Theatre Bookings in Visits List    * 
.  *      V10.12.04 28/06/2018  Richa Phogat     TSK 0851661                  *
.  *                Added OPRCN049/OPCNAIPS -Send AIP Segment for Anaesthetist*
.  *                and other operating Personnel in S12, S14 and S15         *
.  *                Added OPRCN050/OPCNAILS - Send AIL Segment with Session   *
.  *                Start/End Date/Time, Session Period and Case Number in    *
.  *                S12, S14 and S15                                          *
.  *      V10.12.03 02/05/2018  Peter Vela       TSK 0851006                  *
.  *                Added OPRCN045 / OPCNTOPA - Variance in time for Time Out *
.  *                Performed to Anaesthetic Commenced (Cat ol)               *
.  *                Added OPRCN046 / OPCNACSS - Variance in time for          *
.  *                Anaesthetic Commenced to Surgery Start (Cat TV)           *
.  *                Added OPRCN047 / OPCNSETR - Variance in time for Surgery  *
.  *                End to Time in Recovery – Day (Cat Ou)                    *
.  *                Added OPRCN048 / OPCNPACU - User Defined Time for Ready   *
.  *                for PACU                                                  * 
.  *      V10.12.02 10/01/2018  J.Tan            TSK 0847295                  *
.  *                Added OPRCN044/OPCNDMBS - Display All MBS on Input Charges*
.  *      V10.12.01 10/01/2018  Tracey Nguyen    TSK 0825792                  *
.  *                Added OPRCN043/OPCNURSE - Use oprnuraf/pmshcpaf for       *
.  *                Theatre Nurse                                             *
.  *      V10.11.01 02/08/2017  Richa Phogat     TSK 0837479                  *
.  *                Added OPRCN042 - Enable use of consumption in theatre and *
.  *                billing                                                   *
.  *      V10.09.02 16/02/2017  Thanh Tieu       TSK 0832605                  *
.  *                Added OPRCN041 - Staff Category for Operating Surgeon     *
.  *      V10.09.01 07/02/2017  Davin            TSK 0829089                  *
.  *                Added OPRCN039 - Search Implant via Barcode (0=No/1=yes)  *
.  *                Added OPRCN040 - Verify Prosthetics Input   (0=No/1=yes)  *
.  *      V10.08.03 29/07/2016  J.Tan            TSK 0813090                  *
.  *                Added OPRCN036- Using Theatre Banding for Operation Av.   *
.  *                Added OPRCN037 - Op time of 1st Highest Banded Item       *
.  *                Added OPRCN038 - Op time of 2nd Highest Banded Item       *
.  *      V10.08.02 22/06/2016  Ebon Clements    TSK 0312728                  *
.  *                Added OPRCN035 - Clinical review required minutes         *
.  *      V10.08.01 26/05/2016  Peter Vela       TSK 0321157                  *
.  *                Added OPRCN031 - Collecting Timeout Information           *
.  *                Added OPRCN032 - Collecting OT Sign Out Information       *
.  *                Added OPRCN033 - Collecting Recovery Room Handover        *
.  *                Added OPRCN034 - Long Delay trigger Anaesthetic Event     *
.  *      V10.06.01 30/04/2015  Peter Vela       CAR 312771                   *
.  *                Added OPRCN030 - Using Theatre Requests Approval          *
.  *      V10.04.02 08/04/2014  Ebon Clements    CAR 283332                   *
.  *                Added OPRCN029 - Report Format for IBAOPR66               *
.  *      V10.04.01 13/02/2014  Peter Vela       CAR 218689                   *
.  *                Added OPRCN027 - Unique Theatre Request Number            *
.  *                Added OPRCN028 - Theatre time for Request Clock Stop      *
.  *      V10.03.01 08/07/2012  Saroeun Soeur    CAR 255726                   *
.  *                Added OPRCN025,OPRCN026                                   *
.  *      V10.02.01 02/06/2011  Saroeun Soeur    CAR 240742                   *
.  *                Added Added OPRCN024                                      *
.  *      V10.00.02 25/10/2010  Ebon Clements    CAR 231458                   *
.  *                Added OPRCN022 and OPRCN023                               *
.  *      V10.00.01 01/06/2010  Ebon Clements    CAR 222983                   *
.  *                Added OPRCN021 Use Implants Codes on Combined CBMS & Misc *
.  *      V9.12.01  17/12/2009  Ebon Clements    CAR 208431                   *
.  *                Added OPRCN020 - Delay/Overtime allowance amount (+- mins)*
.  *      V9.10.03  28/08/2008  Peter Vela       CAR 147323                   *
.  *                Added OPRCN017 - Send S12 after add Theatre Booking       *
.  *                Added OPRCN018 - Send S14 after update Theatre Booking    *
.  *                Added OPRCN019 - Send S15 after delete Theatre Booking    *
.  *      V9.10.02  30/07/2008  Ebon Clements    CAR 173369                   *
.  *                Added OPRCN016 - Don't print a blank line at the start    *
.  *                                 of theatre forms                         *
.  *      V9.10.01  27/05/2008  Ebon Clements    CAR 162259                   *
.  *                Added OPRCN015 - Using Combined CBMS & Misc changes       *
.  *      V9.09.05  01/04/2008  Ebon Clements    CAR 162868                   *
.  *                Added OPRCN014 - Using Free Format Duration               *
.  *      V9.09.04  04/02/2008  Ebon Clements    CAR 152783                   *
.  *                Added OPRCN013 - Highlight today patients on theatre list *
.  *      V9.09.03  05/12/2007  Steve Armstrong  CAR 155887                   *
.  *                Added OPRCN012 - Send A05 for Theatre Booking             *
.  *      V9.09.02  08/10/2007  Jill Habasque  CAR 150324                     *
.  *                Added OPRCN011 - Referral required before booking         *
.  *      V9.09.01  19/09/2007  Jill Habasque  CAR 150318                     *
.  *                Added OPRCN010 - Surgery End mandatory prior to next start*
.  ****************************************************************************
.  *      V9.08.01  20/04/2007  Peter Vela     CAR 136525                     *
.  *                Added OPRCN009 - Ward/Bed Ind for IBAOPR66                *
.  ****************************************************************************
.  *      V9.07.02  21/09/2006  Peter Vela     CAR 118228                     *
.  *                Changed OPRCN008 to a DIM field                           *
.  *      V9.07.01  13/09/2006  Peter Vela     CAR 118228                     *
.  *                Added OPRCN008 - Reallocation for Session Overlaps        *
.  ****************************************************************************
.  *      V9.04.03  01/09/2005  Ebon Clements  CAR 73209                      *
.  *                Added OPRCN004 & OPRCN005 operation start and end times   *
.  *                Added OPRCN006 & OPRCN007 input actuals default start/end *
.  *      V9.04.02  25/01/2005  Lina Vo        CAR 56410                      *
.  *                Added OPRCN003 - OPCNWHCD Warehouse Code                  *
.  *      V9.04.01  10/08/2004  Peter Vela     CAR 50678                      *
.  *                Added OPRCN002 - OPCNSCOM Session Based Comments Parameter*
.  ****************************************************************************
.  *      V9.03.00  20/05/2004  Ebon Clements  CAR 49926                      *
.  *                Created include                                           *
.  ****************************************************************************
.
.  ****************************************************************************
.  Sector 42
.  ****************************************************************************
.
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
OPRCN001  DIM    1        240     Booking list disgnosis display order
OPRCN002  DIM    1        241     Using Session Based Comments? 0=No 1=Yes
OPRCN003  DIM    5        242     Warehouse Code for Theatre Purchase Order
OPRCN004  DIM    2        235     New Operation start time                  
OPRCN005  DIM    2        237     New Operation end time                    
OPRCN008  DIM    1         93     Reallocation for Session Overlaps
OPRCN009  DIM    1        247     Ward/Bed Indicator for IBAOPR66
OPRCN011  DIM    1        248     Referral required before booking
OPRCN013  DIM    1        249     Highlight today patients on theatre list
OPRCN025  DIM    2        113     Variance in time for Theatre Case Late Time of Arrival
OPRCN029  DIM    2        56      Report Format for IBAOPR66
OPRCN056  DIM    1        58      Using Session Extra Doctor
.                                 0=No, 1=Yes
OPRCN057  DIM    3        59      Session Extra Doctor Personnel Code for Teams
.                                 (Cat OP)
.
.  ****************************************************************************
.  Sector 68
.  ****************************************************************************
.
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
OPRCN006  DIM    2        245     Code for default session actual start time
OPRCN007  DIM    2        247     Code for default session actual end time
OPRCN010  DIM    1        249     Surgery End mandatory prior to next start time
OPRCN058  DIM    1        244     Copy Full Desc from booking to surgery        .                                          0 = No
.                                          1 = Yes
.
.  ****************************************************************************
.  Sector 113
.  ****************************************************************************
.
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
OPRCN012  DIM    1        1       Send A05 for Theatre Booking
OPRCN014  DIM    1        2       Using Free Format Duration
OPRCN015  DIM    1        3       Using Combined CBMS & Misc changes
OPRCN016  DIM    1        4       Don't print a blank line at the start of
.                                 theatre forms
OPRCN017  DIM    1        5       Send S12 after add theatre booking.
OPRCN018  DIM    1        6       Send S14 after update theatre booking.
OPRCN019  DIM    1        7       Send S15 after delete theatre booking.
OPRCN020  DIM    2        8       Delay/Overtime allowance amount (+- mins)
OPRCN021  DIM    1        10      Use Implants Codes on Combined CBMS & Misc
OPRCN022  DIM    2        11      From time for Surgical Minutes (IBAOPR79)
OPRCN023  DIM    2        13      To time for Surgical Minutes (IBAOPR79)
OPRCN024  DIM    1        15      Using Recovery Anaethetic Details
OPRCN026  DIM    2        17      Variance in time for Theatre Recovery ready to depart
OPRCN027  DIM    10       19      Unique Theatre Request Number
OPRCN028  DIM    2        29      Theatre time for Request Clock Stop
OPRCN030  DIM    1        31      Using Theatre Requests Approval
OPRCN031  DIM    1        32      Collecting Timeout Information
OPRCN032  DIM    1        33      Collecting OT Sign Out Information
OPRCN033  DIM    1        34      Collecting Recovery Room Handover
OPRCN034  DIM    3        35      Long Delay trigger Anaesthetic Event
OPRCN035  DIM    3        38      Clinical Review Required Minutes
OPRCN036  DIM    3        41      Using Theatre Banding for Operation Averages
OPRCN037  DIM    3        42      % Op time of 1st Highest Banded Item
OPRCN038  DIM    3        45      % Op time of 2nd Highest Banded Item
OPRCN039  DIM    1        48      Search Implant via Barcode (0=No/1=yes)
OPRCN040  DIM    1        49      Verify Prosthetics Input   (0=No/1=yes)
OPRCN041  DIM    3        50      Opertating Surgeon Type (Cat OP)
OPRCN042  DIM    1        54      Enable use of consumption type in theatre and billing
OPRCN043  DIM    1        55      Use oprnuraf or pmshcpaf for Theatre Nurse
.                                 0=oprnuraf, 1=pmshcpaf
OPRCN044  DIM    1        56      Display All MBS on Input charges screen?
.                                 0=Yes, 1=Only the selected Unique Id.
OPRCN045  DIM    2        57      Variance in time for Time Out Performed
.                                 to Anaesthetic Commenced (Cat ol)
OPRCN046  DIM    2        59      Variance in time for Time Out Performed
.                                 to Anaesthetic Commenced (Cat ol)
OPRCN047  DIM    2        61      Variance in time for Surgery End to Time
.                                 in Recovery – Day (Cat Ou)
OPRCN048  DIM    1        63      User Defined Time for Ready for PACU
OPRCN049  DIM    1        64      Send AIP Segment for Anaesthetist and other 
.                                 operating Personnel in S12, S14 and S15
OPRCN050  DIM    1        65      Send AIL Segment with Session Start/End
.                                 Date/Time, Session Period and Case Number in 
.                                 S12, S14 and S15
OPRCN051  DIM    1        66      Display Theatre Booking in Visits List
.                                 0=No,1=Yes
OPRCN052  DIM    1        67      Write inbound ZSC.6 to oprardaf.oparanas only
.                                 0=No,1=Yes
OPRCN053  DIM    2        68      Theatre time for Discharge check
OPRCN054  DIM    1        69      Preference and Tray items from Misc Chrg 
.                                 Items file      
OPRCN055  DIM    1        67      Display Theatre Status in Patient Header
.                                 0=No, 1=Yes
.
