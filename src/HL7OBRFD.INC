. V10.03.01 11.12.2013 BA - CAR 275970 - Added Dummy OBR046 for Sonic trailing Field Separator
. V9.04.001 19/04/2005 ML - CAR 43973  - Change OBR020 to Location
. V5.06.001 01/12/1998
.*------------------------------------------------------------
.* Include Name  :    HL7OBRFD.INC
.*
.* Function      :    File Definition include for WEB
.*                    HL7 OBR SEGMENT
.*
.*------------------------------------------------------------
.
.NAME     TYPE      Length Description
.----     ----      ------ -----------
OBR001    DIM       4      Set ID - Observation Request
OBR002    DIM       70     Placer Order Number
OBR00201  DIM       20     Unique Order Number 
OBR00202  DIM       6      Application ID
OBR003    DIM       70     Filler Order Number
OBR00301  DIM       20     Order Number
OBR00302  DIM       6      Application ID
OBR004    DIM       127    Universal Service ID 
OBR00401  DIM       12     Type Code      
OBR00402  DIM       50     Type Description
OBR00403  DIM       12     Name of Coding System
OBR005    DIM       1      NS:Priority
OBR006    DIM       13     Requested Date-Time
OBR00601  DIM       8      Requested Date
OBR00602  DIM       5      Requested Time
OBR007    DIM       14     Observation Date-Time
OBR00701  DIM       8      Observation Date
OBR00702  DIM       6      Observatoin Time
OBR008    DIM       1      NS:Observation End Date-Time
OBR009    DIM       1      NS:Collection Volume
OBR010    DIM       50     Collector Identifier
OBR011    DIM       1      NS:Specimen Action Code
OBR012    DIM       1      NS:Danger Code
OBR013    DIM       127    Relevant Clinical Info
OBR014    DIM       14     Specimen Received Date/Time 
OBR01401  DIM       8      Specimen Date
OBR01402  DIM       6      Specimen Time
OBR015    DIM       1      NS:Specimen Source
OBR016    DIM       80     Ordering Provider 
OBR01601  DIM       10     Doctor ID
OBR01602  DIM       25     Family Name
OBR01603  DIM       20     Given Name
OBR01604  DIM       1      Initial
OBR01605  DIM       10     Coding Scheme
OBR017    DIM       1      NS:Order Call-back phone number
OBR018    DIM       1      NS:Placer Field #1
OBR019    DIM       60     Placer Field #2
OBR020    DIM       31     Location                                    *I-43973
OBR02001  DIM       5      Location Code                               *I-43973
OBR02002  DIM       25     Location Description                        *I-43973
OBR021    DIM       1      NS:Filler Field #2
OBR022    DIM       14     Results Rpt/Status Chng Date/Time
OBR02201  DIM       8      Change Date
OBR02202  DIM       6      Change Time
OBR023    DIM       1      NS:Charge to Practice
OBR024    DIM       10     Diagnostic Serv Sect ID
OBR025    DIM       2      Result Status
OBR026    DIM       1      NS:Parent Result
OBR027    DIM       10     Quantity/Timming 
OBR028    DIM       127    Result Copied To
OBR029    DIM       1      NS:Parent Number
OBR030    DIM       1      NS:Transportation Mode
OBR031    DIM       1      NS:Reason for Study
OBR032    DIM       30     Principal Result Interpreter
OBR033    DIM       1      NS:Assistant Result Interpreter
OBR034    DIM       1      NS:Technician
OBR035    DIM       1      NS:Transcriptionist
OBR036    DIM       1      NS:Scheduled - Date/Time
OBR037    DIM       1      NS:Number of Sample Containers
OBR038    DIM       1      NS:Transport Logistics of Collected Sample
OBR039    DIM       1      NS:Collector's Comment
OBR040    DIM       1      NS:Transport Arrangement Responsibility
OBR041    DIM       1      NS:Transport Arranged
OBR042    DIM       1      NS:Escort Required
OBR043    DIM       1      NS:Planned Patient Transport Comment
OBR044    DIM       1      NS:Procedure Code
OBR045    DIM       1      NS:Procedure Code Modifier
OBR046    DIM       1      NS:DUMMY Allow for extended records
