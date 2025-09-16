. V5.06.001 01/12/1998
.*------------------------------------------------------------
.* Include Name  :    HL7ORCFD.INC
.*
.* Function      :    File Definition include for WEB
.*                    HL7 ORC SEGMENT
.*
.* Modification  : 06.11.2012 B.G.Ackland
.*                            Extract Fields 3 and 4 into Components
.*
.*
.*------------------------------------------------------------
.
.NAME     TYPE      Length Description
.----     ----      ------ -----------
ORC001    DIM       2      Order Control
ORC002    DIM       27     Placer Order Number
ORC00201  DIM       20     Unique Order Number 
ORC00202  DIM       6      Application ID
ORC003    DIM       27     Filler Order Number
ORC00301  DIM       20     Order Number
ORC00302  DIM       6      Application ID
ORC004    DIM       27     Placer Group Number
ORC00401  DIM       20     Placer Group Order Number
ORC00402  DIM       6      Placer Group Application ID
ORC005    DIM       1      NS:Order Status
ORC006    DIM       1      NS:Response Flag
ORC007    DIM       1      NS:Quantity / Timing
ORC008    DIM       1      NS:Parent
ORC009    DIM       1      NS:Date/Time of Transaction
ORC010    DIM       1      NS:Entered By
ORC011    DIM       1      NS:Verified By
ORC012    DIM       80     Ordering Provider
ORC01201  DIM       10     Doctor ID Number
ORC01202  DIM       25     Family Name
ORC01203  DIM       20     Given Name
ORC01204  DIM       1      Initial
ORC01205  DIM       10     Coding Scheme  
ORC013    DIM       1      NS:Enterer's Location
ORC014    DIM       1      NS:Call Back Phone Number
ORC015    DIM       1      NS:Order Effective Date/Time
ORC016    DIM       1      NS:Order Control Code Reason
ORC017    DIM       1      NS:Entering Organization
ORC018    DIM       1      NS:Entering Device
ORC019    DIM       1      NS:Action By
ORC020    DIM       1      Dummy Field
