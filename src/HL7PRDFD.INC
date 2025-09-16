. V10.04.00 03/06/2014
.*------------------------------------------------------------
.* Include Name  :    HL7PRDFD.INC
.*
.* Function      :    File Definition include for WEB
.*                    HL7 PRD SEGMENT
.*
.*------------------------------------------------------------
.
.NAME     TYPE      Length Description
.----     ----      ------ -----------
PRD001    DIM       127    Provider Role
PRD00101  DIM       10     Provider Role Identifier
PRD00102  DIM       50     Provider Role Text
PRD00103  DIM       10     Provider Role Coding System
PRD002    DIM       127    Provider Name  
PRD00201  DIM       40     Provider Family Name  
PRD00202  DIM       40     Provider Given Name  
PRD00203  DIM       40     Provider Middle Name  
PRD00204  DIM       10     Provider Name Suffix
PRD00205  DIM       10     Provider Name Prefix
PRD003    DIM       127    Provider Address 
PRD00301  DIM       40     Provider Address Street Address
PRD00302  DIM       40     Provider Address Other Designation
PRD00303  DIM       40     Provider Address City
PRD00304  DIM       40     Provider Address State
PRD00305  DIM       40     Provider Address Post Code
PRD00306  DIM       40     Provider Address Country
PRD004    DIM       1      Provider Location
PRD005    DIM       1      Provider Communication Information
PRD006    DIM       1      Pref Method Contact
PRD007    DIM       60     Provider Identifier
PRD00701  DIM       20     Provider Identifier ID
PRD00702  DIM       20     Provider Identifier Type of ID
PRD00703  DIM       20     Provider Identifier Qualifier
PRD008    DIM       1      Eff Start Date Role
PRD009    DIM       1      Eff End Date Role
