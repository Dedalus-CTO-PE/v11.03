.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : PATCONTD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for Billing                   *
.  *                    Control File CGI variables                            *
.  *                                                                          *
.  *     Sectors      : 118                                                   *
.  *                                                                          *
.  *     Modifications:                                                       *
.  *                                                                          *
.  ****************************************************************************
.  *     V11.03.10  02/10/2023  Nikitha B        TSK 0927699                  *
.  *                Added  PATCN625 - Hospital Provider Approval Number       *
.  *                Added  PATCN624 - Hospital ABN Number                     *
.  *     V11.03.09  12/09/2023  Thanh T          TSK 0914053                  *
.  *                Added PATCN622/PTCNVSRO - Visit Search redirect for Outp  *
.  *                      PATCN623/PTCNVSRR - Visit Search redirect for Ref   *
.  *     V11.03.08  30/08/2023  Nikitha B        TSK 0896442                  *
.  *                Added PATCN621 - Send A37 after U/R unmerge               *
.  *     V11.03.07  20/07/2023  Davin            TSK 0930147                  *
.  *                Added PATCN620 - Send A08 for CodingComplete status change*
.  *     V11.03.06  15/06/2023  Nikitha B       TSK 0907196                   *
.  *                Added PATCN619 - Include Patient Time of Birth            *
.  *     V11.03.05  29/05/2023  Nikitha B       TSK 0932121                   *
.  *                Added IBACN016 -  Next HL7 Message Id                     *
.  *     V11.03.04  07/03/2023  Bella Turco      TSK 0919538                  *
.  *                Added PATCN618 - Patient Banner Current IP hyperlink      *
.  *     V11.03.03  19/01/2023  Davin            TSK 0922254                  *
.  *                Added PATCN617 - Send A08 after Invoice on Hold change    *
.  *     V11.03.02  06/01/2023  Davin            TSK 0916627                  *
.  *                Added PATCN616 - Send A08 after A22 (Return from leave)   *
.  *     V11.03.01  22/12/2022  Thanh T          TSK 0924385                  *
.  *                Added PATCN611/PTCNWDTH - Auto Cancel for WL on Death     *
.  *                      PATCN612/PTCNIDTH - Auto Cancel for pre-adm         *
.  *                      PATCN613/PTCNBDTH - Auto Cancel for booking         *
.  *                      PATCN614/PTCNODTH - Auto Cancel for outpatient      *
.  *                      PATCN615/PTCNTDTH - Auto Cancel for theatre Book    *
.  ****************************************************************************
.  *     V11.02.14  27/10/2022  Davin            TSK 0923862                  *
.  *                Added PATCN610 - Send A08 from IBABIL60:Amt to be Invoiced*
.  *     V11.02.13  18/10/2022  Jacob Jackson    TSK 0867531                  *
.  *                Added PATCN609 - Validation for Pension Card PID.3        *
.  *     V11.02.12  02/09/2022  Peter Vela       TSK 0923308                  *
.  *                Added PATCN608 - Using FHIR Patient Inbound               *
.  *                Added PATCN607 - Using FHIR                               *
.  *     V11.02.11  11/08/2022  Thanh T            TSK 0908346                *
.  *                Added PATCN603 - Check Linked Doc for Inpatient Invoice   *
.  *                Added PATCN604 - Check Linked Doc for Emergency Invoice   *
.  *                Added PATCN605 - Check Linked Doc for Outpatient Invoice  *
.  *                Added PATCN606 - Check Linked Doc for Pr Practice Invoice *
.  *     V11.02.10  02/08/2022  Sunny             TSK 0814566                 *
.  *                Added PATCN602/PTCNHFED - Enhanced Health Fund End Date   *
.  *     V11.02.09  28/07/2022  Peter Vela            0918312                 *
.  *                Added PATCN601 - PTCNAPCP - Automate Webservices PCIW     *
.  *                Pendable resub                                            *
.  *                Added PATCN601 - PTCNAPCP - Automate Webservices PCIW     *
.  *                Pendable resub                                            *
.  *     V11.02.08  11/07/2022  Bella Turco       TSK 0921957                 *
.  *                Added PATCN600 - Number of Records to Display Per Page    *
.  *     V11.02.07  24/05/2022  Thanh T            TSK 0893159                *
.  *                Added PATCN599 - Recurring Care previous admission to use *
.  *     V11.02.06  18/05/2022  Alina Bhari       TSK 0917539                 *
.  *                Added PATCN590 - Default Anaesthetic code for Day         *
.  *                                 Procedure                                *
.  *                Added PATCN591 - Auto Day case Band 1                     *
.  *                Added PATCN592 - Auto Day case Band 2                     *
.  *                Added PATCN593 - Auto Day case Band 3                     *
.  *                Added PATCN594 - Auto Day case Band 4                     *
.  *                Added PATCN595 - Doing auto stepdown                      *
.  *                Added PATCN596 - Doing Discount/Allow Stepdown            *
.  *                Added PATCN597 - Auto change to daycase                   *
.  *                Added PATCN598 - Auto warning of Admission Type           *
.  *     V11.02.05  19/04/2022  Davin             TSK 0917793                 *
.  *                Added PATCN588 and PATCN589 for DRG 11.0                  *
.  *     V11.02.04  24/03/2022  Davin             TSK 0917793 ICD10v12        *
.  *                Added PATCN587 - ICD10 Ed.12 Go-live date (PTCNGDX2)      *
.  *     V11.02.03  21/03/2022  Alina Bhari       TSK 0912792                 *
.  *                Added PATCN586 - Show External Visit ID in                *
.  *                Patient Search, Banner and Selected Visit Lists           *
.  *     V11.02.02  07/02/2022  Davin             TSK 0885553                 *
.  *                Added option 2 to PATCN390                                *
.  *     V11.02.01  03.02.2022  DA Sarkies        TSK 0903891                 *
.  *                Added PATCN585 - Site Specific field selection            *
.  ****************************************************************************
.  *     V11.01.19  21/01/2022  Ebon Clements     TSK 0888071                 *
.  *                Added PATCN571 to PATCN584 - Adm user defined fields      *
.  *     V11.01.18  17/01/2022  Davin             TSK 0910220                 *
.  *                Added PATCN570 - Use External Visit ID as Incoming PV1.19 *
.  *     V11.01.17  17.01.2022  DA Sarkies        TSK 0845955                 *
.  *                Added PATCN569 - Display phone/email icon                 *
.  *     V11.01.16  12/01/2022  Jacob Jackson     TSK 0864505                 *
.  *                Added PATCN568 - Display preferred name option            *
.  *     V11.01.15  22/11/2021  Davin             TSK 0864505                 *
.  *                Added PATCN566 - Send Name Type in HL7 PID.9              *
.  *                Added PATCN567 - Receive Name Type in HL7 PID.9           *
.  *     V11.01.14  09/11/2021  Thanh T           TSK 0903848                 *
.  *                Added PATCN565/PTCNEXDD - Using Expected Discharge Date   *
.  *                Change Reason                                             *
.  *     V11.01.13  05/10/2021  Peter Vela        TSK 0898361                 *
.  *                Added PATCN563/PTCNIMSD - Date Range IMCW STSW switch     *
.  *                Added PATCN564/PTCNIHSD - Date Range IHCW STSW switch     *
.  *     V11.01.12  01/10/2021  Peter Vela        TSK 0898361                 *
.  *                Added PATCN558/PTCNIMST - Multiple IMCW STSW switch       *
.  *                Added PATCN559/PTCNIMRT - Multiple IMCW RTVW switch       *
.  *                Added PATCN560/PTCNIHST - Multiple IHCW STSW switch       *
.  *                Added PATCN561/PTCNIHRT - Multiple IHCW RTVW switch       *
.  *                Added PATCN562/PTCNERRT - Multiple ERAW RTVW switch       *
.  *     V11.01.11  26/08/2021  Peter Vela        TSK 0910800                 *
.  *                Added PATCN557/PTCNPCIP - PCIW Printer ID                 *
.  *     V11.01.10  17/08/2021  Don Nguyen        TSK 0875549                 *
.  *                Added PATCN556/PTCNACAK - ACC API Key (ACC45 Claim)       *
.  *     V11.01.09  23/06/2021  Sunny             TSK 0893817                 *
.  *                Added PATCN554 - System Type for Letters                  *
.  *                21/07/2021  Peter Vela        TSK 0909175                 *
.  *                Added PATCN555 - Switch on WebServices BBSW               *
.  *     V11.01.08  11/06/2021  Davin             TSK 0900673                 *
.  *                Added PATCN553 - Create Program Referral from REF^I12     *
.  *     V11.01.06  11/06/2021  Don Nguyen        TSK 0875549                 *
.  *                Added PATCN551/PTCNACTM - ACC Transmission Method         *
.  *                Added PATCN552/PTCNACAE - ACC API Endpoint (ACC45 Claim)  *
.  *     V11.01.05  21/05/2021  Ebon Clements     TSK 0906162                 *
.  *                Added PATCN549 - Overdue leave register polling minutes   *
.  *                21/05/2021  Peter Vela        TSK 0906538                 *
.  *                Added PTCNPCIW/PATCN550 - Switch on Webservices PCIW      *
.  *     V11.01.04  13/05/2021  Thanh T           TSK 0886023                 *
.  *                Added PATCN548 - Collect Extra Container Information for  *
.  *                EDWARD                                                    *
.  *     V11.01.03  03/03/2021  J.Tan             TSK 0863287                 *
.  *                  Added PTCNPPIN - Using new Patient Portion Invoice      *
.  *                  Added PTCNADEB - Automatic reassign debt for Patient Inv*
.  *     V11.01.01  22/02/2021  Peter Vela        TSK 0902857                 *
.  *                Added PTCNIHCW/PATCN545 - Switch on Webservices IHCW      *
.  *     V11.00.13  04/01/2021  Peter Vela        TSK 0898361                 *
.  *                Added PTCNTZNW/PATCN544 - WebServices Time Zones          *
.  *     V11.00.12  19/10/2020  Peter Vela        TSK 0898361                 *
.  *                Added PTCNIMCW/PATCN543 - Switch on Webservices IMCW      *
.  *     V11.00.11  13/10/2020  Tracey Nguyen     TSK 0888079                 *
.  *                Added PTCNBDEF/PATCN542 - Using Billing Defaults file     *
.  *                for Admissions                                            *
.  *     V11.00.10  31/08/2020  Don Nguyen        TSK 0889111                 *
.  *                Added PTCNRMDM/PATCN541 - Receive MDM^T02 Messages        *
.  *     V11.00.09  23/08/2020  Peter Vela        TSK 0895969                 *
.  *                Added PTCNOECW/PATCN539 - Switch on WebServices OECW      *
.  *                functionality                                             *
.  *                Added PTCNOECE/PATCN540 - Switch off Eclipse OEC          *
.  *                functionality                                             *
.  *     V11.00.08  21/08/2020  Davin             TSK 0890602                 *
.  *                Added PATCN527 to PATCN538 - MOSAIQ inbound HL7 parameters*
.  *     V11.00.07  28/07/2020  Peter Vela        TSK 0884414                 *
.  *                Added PTCNOECT/PATCN526 - Using OEC on Theatre Booking    *
.  *                page                                                      *
.  *     V11.00.06  13/07/2020  Peter Vela        TSK 0892408                 *
.  *                Added PTCNRKDY/PATCN524 - Number of Days before PRODA Key *
.  *                Expiry to Refresh Device Key                              *
.  *                Added PTCNTKMN/PATCN525 - Number of minutes before each   *
.  *                PRODA Token refresh                                       *
.  *     V11.00.05  24/06/2020  Peter Vela        TSK 0892408                 *
.  *                Added PTCNWSIN/PATCN523 - Using Medicare WebServices      *
.  *     V11.00.04  25/05/2020  Peter Vela        TSK 0892408                 *
.  *                Added the following fields in new sector 129              *
.  *                PTCNWSDR/PATCN522 - Medicare WebServices directory        *
.  *     V11.00.03  16/04/2020  Tracey Nguyen     TSK 0889111                 *
.  *                Added the following fields in sector 128                  *
.  *                1)PTCNSSMD/PATCN519 - Send SMD from webPas                *
.  *                2)PTCNSRAD/PATCN520 - Generate & Send REF^|12 with an     *
.  *                  attached document                                       *
.  *                3)PTCNOHCS/PATCN521 - Location of OHC-SM Server, IP or    *
.  *                  fixed address                                           *
.  *     V11.00.02  07/04/2020  Davin             TSK 0887136                 *
.  *                Added PATCN518 - Update PMI fields as A31 for Incoming A08*
.  *     V11.00.01  02/04/2020  Don Nguyen        TSK 0881876                 *
.  *                Added PATCN517 - Using Address Validation                 *
.  ****************************************************************************
.  *     V10.15.03  11/12/2019  Davin             TSK 0882837                 *
.  *                Added PATCN515 - Broadcast HL7 A31 from HL7RECVR          *
.  *                Added PATCN516 - Code to populate ADT^A31 EVN.4 field     *
.  *     V10.15.02  26/11/2019  Don Nguyen        TSK 0880715                 *
.  *                Added PATCN514 - User Validation on Diagnostic Service    *
.  *                Requests.                                                 *
.  *     V10.15.01  01/11/2019  Thanh T           TSK 0879283                 *
.  *                Added PATCN513 - HCP Provider Number mandatory for        *
.  *                'Attending' providers                                     *
.  ****************************************************************************
.  *     V10.14.11  23/09/2019  Davin             TSK 0861257                 *
.  *                Added PATCN512 - Receive S02/S03/S04 HL7 messages         *
.  *     V10.14.10  19/09/2019  Ebon Clements     TSK 0871855                 *
.  *                Added PATCN511 - SMS selection list display order         *
.  *     V10.14.09  22/07/2019  Davin             TSK 0876749                 *
.  *                Added PATCN510 - Default 'Upload MyHR' on ADM/EMR screens *
.  *     V10.14.08  09/07/2019  Davin             TSK 0871079                 *
.  *                Added IBACN015 - Message Header ID (Receiving)            *
.  *     V10.14.07  08/05/2019  Ebon Clements     TSK 0874051                 *
.  *                Added PATCN509 - NSW EDWARD Health Service Building ID    *
.  *     V10.14.06  08/04/2019  Davin             TSK 0869574                 *
.  *                Added PATCN508 - Waiting List Referral Status for RF1 HL7 *
.  *     V10.14.05  01/04/2019  Davin             TSK 0854837                 *
.  *                Added PATCN506 - Include F/L in Clin.Master Status for ZCM*
.  *                Added PATCN507 - Use Outpatient Clinic Description for ZCM*
.  *     V10.14.04  26/03/2019  J.Tan             TSK 0857392                 *
.  *                Added PATCN505 - Using Activity Based Funding             *
.  *     V10.14.03  14/03/2019  Peter Vela        TSK 0868836                 *
.  *                Added PATCN504 - Do not generate hospital calculated      *
.  *                statistics for the Trailer Records                        *
.  *     V10.14.02  14/03/2019  Don Nguyen        TSK 0869412                 *
.  *                Added PATCN501 - ICD10 Ed.11 Go-live Date (PTCNGDX1)      *
.  *                27/02/2019  Richa Phogat      TSK 0870439                 *
.  *                Added PATCN499/PTCNE100 and PATCN500/PTCN100C for DRG 10.0*
.  *                08/03/2019  Davin             TSK 0833548                 *
.  *                Added PATCN502 - Send ZNT (note type 4) in HL7 broadcasts *
.  *                Added PATCN503 - Send ZNT (note type 5) in HL7 broadcasts *
.  *     V10.14.01  21/02/2019  Davin             TSK 0866465                 *
.  *                Added PATCN498 - Send DG1 segment for mental health diags *
.  ****************************************************************************
.  *     V10.13.12  29/01/2019  Ebon Clements     TSK 0862494                 *
.  *                Added PATCN497 - Don't default linked practice            *
.  *     V10.13.11  09/01/2019  Ania P            TSK 0865039                 *
.  *                Added IBCNMHPI                                            *
.  *     V10.13.10  29/10/2018  J.Tan             TSK 0864701                 *
.  *                Added PTCNBAUD/PTCNBEML - Ward Bed Audit functionality    *
.  *     V10.13.09  23/10/2018  Davin             TSK 0863512                 *
.  *                Added PATCN494/PTCNBMYH - Send Blank value in ZXV.89 as   *
.  *     V10.13.08  19/10/2018  Thanh T           TSK 0859743                 *
.  *                Added PATCN491/PTCNDBBN - Eclipse DBS PMSClaimID Batch No *
.  *                Added PATCN492/PTCNDBBC - Eclipse DBS Batch Count         *
.  *                Added PATCN493/PTCNPCBC - Eclipse PCS Batch Count         * 
.  *     V10.13.07  21/09/2018  Tracey Nguyen     TSK 0859743                 *
.  *                Added PATCN487/PTCNUEBB - Using Eclipse Bulk Billing      *
.  *                Added PATCN488/PTCNEDBO - Eclipse DBS Outbound Path       *
.  *                Added PATCN489/PTCNEDBI - Eclipse DBS Sent Path           *
.  *                Added PATCN490/PTCNUTPB - Using Test/Prod for Eclipse DBS *
.  *     V10.13.06  31/08/2018  Peter Vela        TSK 0859742                 *
.  *                Added PATCN484 - Eclipse STF Outbound Path                *
.  *                Added PATCN485 - Eclipse STF Sent Path                    *
.  *                Added PATCN486 - Using Test or Prod for Eclipse STF       *
.  *     V10.13.05  27/08/2018  Ebon Clements     TSK 0858988                 *
.  *                Added PATCN483 - Default ACC Treatment Provider           *
.  *     V10.13.04  20/08/2018  Jill Parkinson TASK 0861535                   *
.  *                Added PATCN481 and PATCN482                               *
.  *     V10.13.03  15/08/2018  Ebon Clements     TSK 0859742                 *
.  *                Added PATCN480 - Using Eclipse Patient Store and Forward  *
.  *     V10.13.02  10/08/2018  Davin             TSK 0857732                 *
.  *                Added PATCN478 - Receive PID.26 in A28 and A31 messages   *
.  *                Added PATCN479 - Use HDP Deflt on Cat D/Cat DD for PV1.36 *
.  *     V10.13.01  07/08/2018  Davin             TSK 0849641                 *
.  *                Added PATCN477 - Use of Quantity in P03 HL7 messages      *
.  ****************************************************************************
.  *     V10.12.17  09/07/2018  Peter Vela        TSK 0845218                 *
.  *                Added PATCN476 - Additional validation on Confirm Demo    *
.  *                on PMI Update                                             *
.  *     V10.12.16  27/06/2018  Richa Phogat      TSK 0856874                 *
.  *                Added PATCN475 - Using Quick Reg in A31                   *
.  *     V10.12.15  26/06/2018  Don Nguyen        TSK 0854115                 *
.  *                Added PATCN473/PATCN474 - Send additional A11/A01 on      *
.  *                Claim Type change from/to Public.                         *
.  *     V10.12.14  18/06/2018  Richa Phogat      TSK 0854259                 *
.  *                Added PATCN472 - Send ZBR segment in HL7 broadcasts       *
.  *     V10.12.13  25/05/2018  J.Tan             TSK 0848921                 *
.  *                Added PTCNRJNL - Enable restricted Jounals on Invoice     *
.  *     V10.12.12  17/05/2018  Davin             TSK 0851377                 *
.  *                Added PTCNA08E/PATCN470 - Receive A08 (EMR Visit Update)  *
.  *     V10.12.11  15/05/2018  Thanh T.          TSK 0851528                 *
.  *                Added PTCNTRRS/PATCN469 - Reason for Transfer on          *
.  *                Discharge                                                 *
.  *     V10.12.10  02/05/2018  Tracey Nguyen     TSK 0837181                 *
.  *                1)Added PTCNBTRE/PATCN466 - Collect a Transfer reason on  *
.  *                  Ward/Bed Transfer                                       *
.  *                2)Added PTCNBTOD/PATCN467 - Overflow Description          *
.  *                07/05/2018  Davin             TSK 0848311                 *
.  *                Added PTCNQA28/PATCN468 - Using Quick Registration in A28 *
.  *     V10.12.09  10/04/2018  Tracey Nguyen     TSK 0841644                 *
.  *                Added PTCNFIMW/PATCN465 - Utilising Weighted FIMs for     *
.  *                Program Details and Extracts                              *
.  *     V10.12.08  09/04/2018  Thanh T.          TSK 0848444                 *
.  *                Added PATCN464/PTCNDHCU - Display Duplicate Warning on    *
.  *                UPDHCU                                                    *
.  *     V10.12.07  04/04/2018  Peter Vela        TSK 0853121                 *
.  *                Added PATCN463 - Added PTCNUDF1 - Do not display PMVXUDF1 *
.  *                in Booking List
.  *     V10.12.06  20/03/2018  Tracey Nguyen     TSK 0852793                 *
.  *                Added PATCN461/PTCNED90 and PATCN461/PTCNC90C for DRG 9.0 *
.  *     V10.12.05  08/03/2018  Richa Phogat      TSK 0850854                 *
.  *                Added PATCN458 - Receive A08(I/P Visit Update) Message    *
.  *                PATCN459 - Receive A21(On-Leave) Message                  *
.  *                PATCN460 - Receive A22(Return From Leave) Message         *
.  *     V10.12.04  05.02.2018  B.G.Ackland       TSK 0837357                 *
.  *                Added PATCN457 - Send ZEC segment in HL7 broadcasts       *
.  *     V10.12.03  23/01/2018  Richa Phogat      TSK 0846167                 *
.  *                Added PATCN453, PATCN454, PATCN455, PATCN456              *
.  *     V10.12.02  23/01/2018  Richa Phogat      TSK 0844685                 *
.  *                Added PATCN451, PATCN452                                  *
.  *     V10.12.01  10/01/2018  Richa Phogat      TSK 0848310                 *
.  *                Added PATCN447 - Using Default Unknown Post Code for      *
.  *                Incoming Messages                                         *
.  *                Added PATCN448,PATCN449,PATCN450 - Postcode, State, Suburb*
.  ****************************************************************************
.  *     V10.11.15  19/12/2017  Ebon Clements     TSK 0843363                 *
.  *                Added PATCN446 - Using visit based interpreter required   *
.  *     V10.11.14  12/12/2017  Richa Phogat      TSK 0847828                 *
.  *                Added PATCN445 - Allow Surname Mismatch for A34 (Merge)   *
.  *                Message                                                   *
.  *     V10.11.13  07/12/2017  Richa Phogat      TSK 0822683                 *
.  *                Added PATCN444 - Exclude Referrals from Results Linking   *
.  *     V10.11.12  14/11/2017  Davin             TSK 0846231                 *
.  *                Added PATCN443 - Do not generate AE for a failed HL7 P03  *
.  *     V10.11.11  25/10/2017  Peter Vela        TSK 0843396                 *
.  *                Added PATCN442 - ACC XML Treatement Provider Source       *
.  *     V10.11.10  02/10/2017  Richa Phogat      TSK 0816814                 *
.  *                Added PATCN440/PTCNDSID - ACC Default Diagnosis Value Set *
.  *                ID                                                        *
.  *                11/11/2017  J.Tan             TSK 0839794                 *
.  *                Added PATCN441 - Display invoice raised by                *
.  *     V10.11.09  27/09/2017  Richa Phogat      TSK 0314910                 *
.  *                Added PATCN439 - Current Coding Complete Date             *
.  *     V10.11.08  18/09/2017  Richa Phogat      TSK 0844555                 *
.  *                Added PATCN438 - Time to run current patient update       *
.  *     V10.11.07  14/09/2017  Davin             TSK 0840094                 *
.  *                Added PATCN437 - Send DRG segment in HL7 broadcasts       *
.  *     V10.11.06  13/09/2017  Richa Phogat      TSK 0839897                 *
.  *                Added PATCN436 - Use EMR Diagnosis HDP Code & Coding      *
.  *                System for ACC45 XML                                      *
.  *     V10.11.05  02/08/2017  Ebon Clements     TSK 0841134                 *
.  *                Added PTCN435 - Mins between OEC Received Reports check   *
.  *     V10.11.04  02/08/2017  Richa Phogat      TSK 0837479                 *
.  *                Added PATCN431/PTCNRS14 - Receive S14 Message             *
.  *     V10.11.03  02/08/2017  Ania P            TSK 0843179                 *
.  *                Added PATCN434                                            *
.  *     V10.11.02  20/07/2017  Davin             TSK 0838315                 *
.  *                Added PATCN433 - Send ZLS segment in HL7 broadcasts       *
.  *     V10.11.01  11/07/2017  Peter Vela        TSK 0294177/0837619         *
.  *                Added PTCNMTID - Batch Eclipse Multiple Transaction IDs   *
.  *     V10.10.14  14/06/2017  J.Tan             TSK 0820199                 *
.  *                Added PATCN429 - Update PMI HF if differs from Visit      *
.  *                Added PATCN430 - Update Un-Inv.Disch.HF if updated on PMI *
.  *     V10.10.13  08/06/2017  Ebon Clements     TSK 0839856                 *
.  *                Changed PATCN403, PATCN404, PATCN406, PATCN407, PATCN409  *
.  *                PATCN410 and PATCN411 from FORM to DIM                    *
.  *     V10.10.12  06/06/2017  Richa Phogat      TSK 0826255                 *
.  *                Added PATCN428 - Display HCP Type/Specialty/Role on HCP   *
.  *                Searches                                                  *
.  *     V10.10.11  02/06/2017  Davin             TSK 0819675                 *
.  *                Added PTCNH7IL - Include line break (HL7 Comments ZXV.13) *
.  *                     (PATCN427)                                           *
.  *     V10.10.10  31/05/2017  Thanh T.          TSK 0826408                 *
.  *                Removed PTCNENDP - eSAM Connection Endpoint (NZ)          * 
.  *                        PTCNMAXR - eSAM Max no. of recs to return (NZ)    *
.  *     V10.10.09  23/05/2017  Peter Vela        TSK 832454                  *
.  *                Added PTCNSLIN - Stationery Labels indicator              *
.  *                Added PTCNSLTM - Default Station Labels Template          *
.  *     V10.10.08  08/05/2017  Davin             TSK 0321570                 *
.  *                Added PTCNDWDC - Display Ward Diet/Diet Comment on        *
.  *                     (PATCN424)  pre-admission/admission templates        *
.  *     V10.10.07  03/05/2017  Thanh T.          TSK 0826408                 *
.  *                Added PTCNENDP - eSAM Connection Endpoint (NZ)            *
.  *                      PTCNMAXR - eSAM Maximum no. of recs to return (NZ)  * 
.  *     V10.10.06  02/05/2017  Ebon Clements     TSK 0832472                 *
.  *                Added PATCN421 - Using web user id for application        *
.  *                authentication                                            *
.  *     V10.10.05  19/04/2017  Thanh T.          TSK 0834346                 *
.  *                Added PTCNH7LN - Indicator to Use Security Login Name     *
.  *                instead of User Id in ZAL.12 or not                       * 
.  *     V10.10.04  11/04/2017  Richa Phogat      TSK 0834391                 *
.  *                Added PATCN419 - Indicator for 'Not Showing Bed Requests  *
.  *                in Ward/Bed Search'                                       *
.  *     V10.10.03  06/04/2017  Thanh T.          TSK 0314910                 *
.  *                Added CHCSST/CHCSED - Start and end dates for current HCS *
.  *                run, PTCNEFLG - Flag to indicate errors in HCS data Run   *
.  *     V10.10.02  16/03/2017  J.Tan             TSK 0315207                 *
.  *                Added PTCNELOS - Default Expected LOS based on            *
.  *     V10.10.01  03/03/2017  Tracey Nguyen     TSK 0826808                 *
.  *                Added PATCN413 - Service Category for PHISCo              *
.  *                07/03/2017  Davin             TSK 0833093 ICD10v10        *
.  *                Added PATCN414 - ICD10 Ed.10 Go-live date (PTCNGDVX)      *
.  *     V10.09.02  01/21/2016  Ken Bell          TSK 0813230                 *
.  *                Added: PATCN412 - Default Health Purchaser Code           *
.  *     V10.09.01  28/11/2016  Ken Bell          TSK 0813228                 *
.  *                Added: PATCN403 - UDF for Adm Source                      *
.  *                       PATCN404 - UDF for Occupation                      *
.  *                       PATCN405 - Default Link Reason                     *
.  *                       PATCN406 - UDF for Gestation Period                *
.  *                       PATCN407 - UDF for Epis of Care ACC                *
.  *                       PATCN408 - Default Health Agency Code              *
.  *                       PATCN409 - ACC No and W/R for NMDS (INFOS)         *
.  *                       PATCN410 - Variable used for Separation Mode       *
.  *                       PaTCN411 - Variable used for Hospital Transfer     *
.  *     V10.08.11  20/10/2016  Don Nguyen        TSK 0817948                 *
.  *                Added PATCN402 - eAccreditation Format                    *
.  *     V10.08.10  19/10/2016  Ania P            TSK 0808403                 *
.  *                Added PATCN401 - Hide patient admission button            *
.  *     V10.08.09  04/10/2016  Peter Vela        TSK 0820943                 *
.  *                Added PATCN400 - User Defined Stationery Code for MR10's  *
.  *                03/10/2016  Peter Vela        TSK 0294177                 *
.  *                Added PATCN399 - Eclipse IMC Billing Agent ID             *
.  *     V10.08.08  19/09/2016  Peter Vela        TSK 0808920                 *
.  *                Added PATCN398 - Use Health Fund Step Down on Bed Board   *
.  *     V10.08.07  13/09/2016  J.Tan             TSK 0298257                 *
.  *                Added PATCN397 - Use Eligibility Misc.Amount on Disc.Bill.*
.  *     V10.08.06  07/09/2016  Don Nguyen        TSK 0816287                 *
.  *                Added PATCN396 - Default Inform GP on Admission templates *
.  *                07/09/2016  Peter Vela        TSK 0821597                 *
.  *                Added PATCN395  - Added Medical Records Alert Description *
.  *     V10.08.05  26/08/2016  Don Nguyen        TSK 0312570                 *
.  *                Added PATCN394  - Enable DRG Effective Dates Functionality*
.  *     V10.08.04  30/06/2016  J.Tan             TSK 0819914                 *
.  *                Added PATCN393  - Use MV details for Non ICU MV HCP       *
.  *     V10.08.03  16/06/2016  Peter Vela        TSK 0294177                 *
.  *                Added PATCN392 Eclipse IMC Batch Number                   *
.  *     V10.08.02  30/05/2016  Peter Vela        TSK 0294177                 *
.  *                Added PATCN391 Using Eclipse IMC Module                   *
.  *     V10.08.01  05/04/2016  Nicole Torrisi    TSK 0814510                 *
.  *                Added PATCN390 A19 HL7 Inbound message                    *
.  *     V10.07.09  04/03/2016  Ebon Clements     TSK 0294154                 *
.  *                Added PATCN389 - SMS Printer ID                           *
.  *                Added PATCN388 - Poll for SMS responses every X minutes   *
.  *     V10.07.08  01/03/2016  Nicole Torrisi    TSK 0814510                 *
.  *                Added PATCN377 - PATCN387 HL7 Inbound messages            *
.  *     V10.07.07  22/02/2016  Steve Armstrong   TSK 0809109 & 0809786       *
.  *                Added PATCN375 - Title (PID.5.5) non-mandatory for Inbound*
.  *                                 PMI Messages                             *
.  *                      PATCN376 - Sending MHSW Identifier in PID.3         *
.  *     V10.07.06  16/02/2016  Don Nguyen        TSK 0303887                 *
.  *                Added PATCN373 & PATCN374 - NMDS/NBRS extracts directory  * 
.  *     V10.07.05  04/01/2016  J.Tan             CAR 0313842                 *
.  *                Added PATCN372 - Claim code for Commonwealth Default Rate *
.  *     V10.07.04  29/12/2015  Steve Armstrong   CAR 0322741                 *
.  *                Added PATCN371 - Sending gender (for HL7 Messages) as     *
.  *                stored                                                    *
.  *     V10.07.03  15/12/2015  Ebon Clements     CAR 294154                  *
.  *                Added PATCN370 - Using SMS Notifications                  *
.  *     V10.07.02  17/11/2015  Davin             CAR 310749                  *
.  *                Added PATCN368 - Using Type of Meal for Diet Template     *
.  *                Added PATCN369 - Using External Supplements for Diet temp *
.  *     V10.07.01  19/10/2015  Ebon Clements     CAR 295175                  *
.  *                Added PATCN367 - Display OP chart only appointments on    *
.  *                the current patient search                                *
.  ****************************************************************************
.  *     V10.06.11  17/08/2015  Peter Vela        CAR 316636                  *
.  *                Added PATCN366 - Warning and redirect on undischarge      * 
.  *     V10.06.10  13/08/2015  Don Nguyen        CAR 308621                  *
.  *                Added PATCN365 - Inpatient Discharge Fax Func Template    *
.  *     V10.06.09  01/07/2015  Ania P            CAR 306161                  *
.  *                Added IBCNRESA                                            *
.  *     V10.06.08  28/05/2015  Ebon Clements     CAR 317094                  *
.  *                Added PATCN363 and PATCN364 for DRG 8.0                   *
.  *     V10.06.07  01/06/2015  Ania P            CAR 313313                  *
.  *                Added PTCNRERD/PATCN362                                   *
.  *     V10.06.06  21/05/2015  Patrick Adair     CAR 313318                  *
.  *                Added PATCN361 - NZ - Blank existing Pre-Admit Date/Time  *
.  *                on Admit templates                                        *
.  *     V10.06.05  15/05/2015   Davin            CAR 310155                  *
.  *                Added PATCN360 - Use MOD10V05 for BPAY check digit        *
.  *     V10.06.04  Ania P                        CAR 315212                  *
.  *                Added PTCNPCEH/PATCN359                                   *
.  *     V10.06.03  30/04/2015  Don Nguyen        CAR 307991                  *
.  *                Added PATCN358 - Update Doctor Load eAccreditation        *
.  *     V10.06.02  12/03/2015  J.Tan             CAR 291492                  *
.  *                Added PATCN357 - Display Leave Type in header             *
.  *     V10.06.01  06/03/2015  Davin             CAR 311669  ICD10v9         *
.  *                Added PATCN356 - ICD10 Ed.9 Go-live  (PTCNGDV9)           *
.  *     V10.05.08  04/02/2015   Ebon Clements    CAR 298488                  *
.  *                Added PATCN355 - HSS Extract Method                       *
.  *     V10.05.07  30/12/2014   Davin            CAR 308386                  *
.  *                Added PATCN354 - PAS-HL7 Send A08 instead of A31          *
.  *     V10.05.06  17/12/2014   Ebon Clements    CAR 309975                  *
.  *                Added PATCN353 - Default Ward to Admitting Ward           *
.  *     V10.05.05  12/12/2014   Ebon Clements    CAR 309896                  *
.  *                Added PATCN351 - Hospital state for HDP extracts          *
.  *                Added PATCN352 - Hospital File Number                     *
.  *     V10.05.04  17/11/2014  Peter Vela        CAR 294157                  *
.  *                Added PATCN347 - Eclipse OPV Batch Date                   *
.  *                Added PATCN348 - Eclipse OPV Batch Count                  *
.  *                Added PATCN349 - Eclipse OVV Batch Date                   *
.  *                Added PATCN350 - Eclipse OVV Batch Count                  *
.  *     V10.05.03  13/10/2014  Don Nguyen        CAR 276546                  *
.  *                Added PATCN337-PATCN346                                   *
.  *     V10.05.02  19/08/2014  Don Nguyen        CAR 303882                  *
.  *                Added PATCN335 - Next NMDS Extract Batch Number           *
.  *                Added PATCN336 - Next NBRS Extract Batch Number           *
.  *     V10.05.01  30/07/2014  Davin             CAR 253233                  *
.  *                Added PATCN334 - Informed Financial Consent form layout   *
.  *     V10.04.04  12/06/2014  Peter Vela        CAR 294157                  *
.  *                Added PATCN330 - Using Eclipse 2012 update                *
.  *                Added PTCNO331 - Eclipse OVV Outbound Path                *
.  *                Added PTCNO332 - Eclipse OVV Sent Path                    *
.  *                Added PTCNO333 - Test or Production OVV                   *
.  *     V10.04.03  16/04/2014  Jill Parkinson CAR 292687                     *
.  *                Added PATCN329 - Include days of hosp. on 3B Certificate  *
.  *     V10.04.02  25/03/2014  Ebon Clements     CAR 297388                  *
.  *                Added PATCN328 - Display food allergy on ward list        *
.  *     V10.04.01  30/01/2014  Don Nguyen        CAR 291879                  *
.  *                Added PATCN327 - Using NEHTA Identifiers                  *
.  *                30/01/2014  Don Nguyen        CAR 295027                  *
.  *                Added PATCN326 - Display Visit Dates in header            *
.  *     V10.03.23  02/12/2013  Peter Vela        CAR 286158                  *
.  *                Added PATCN321 - Underweight BMI (Pink)                   *
.  *                Added PATCN322 - Healthy Range From (Black)               *
.  *                Added PATCN323 - Healthy Range To (Black)                 *
.  *                Added PATCN324 - Overweight (Red)                         *
.  *                Added PATCN325 - Obese (Red)                              *
.  *     V10.03.22  15/11/2013  Davin             CAR 275205                  *
.  *                Added PATCN320 - Set HL7 messgs with "T-" URs to rejected *
.  *     V10.03.21  18/10/2013  Ania P            CAR 288249                  *
.  *                Added PATCN308-PATCN319                                   *
.  *     V10.03.20  29/08/2013  Ebon Clements     CAR 275205                  *
.  *                Added PATCN307 - Next admission request number            *
.  *     V10.03.19  13/08/2013  Davin             CAR 289278                  *
.  *                Added PATCN306 - Using Gap/Other Services on Fees Estimate*
.  *     V10.03.18  05/08/2013  Ania P            CAR 288890                  *
.  *                Added PATCN305                                            *
.  *     V10.03.17  01/05/2013  Davin             CAR 284669  DRG 7.0         *
.  *                Added 8 grouper effective dates & V7.0 code for 3M        *
.  *                (patcn296-patcn304)                                       *
.  *     V10.03.16  23/04/2013  Davin             CAR 284420  HDP 2013/2014   *
.  *                Added PATCN295 - ICD10 Ed.8 Go-live  (PTCNGDV8)           *
.  *     V10.03.15  05/04/2013  Davin             CAR 280425                  *
.  *                Added patcn293 - Destination path for EDI messages        *
.  *                Added patcn294 - Interface to Episoft                     *
.  *     V10.03.14  26/03/2013  Don Nguyen        CAR 282342                  *
.  *                Added patcn292 - Use UR as BPAY Invoice Number            *
.  *     V10.03.13  22/03/2013  Davin             CAR 270648                  *
.  *                Added patcn291 - Send ZSD segment with PMI based messages *
.  *     V10.03.12  04/03/2013  Davin             CAR 268971                  *
.  *                Added patcn290 - Send visit based messages for PMI changes*
.  *     V10.03.11  06/12/2012  J.Tan          CAR 237130                     *
.  *                Added patcn289 - Group Pharmacy Items on Discharge Billing*
.  *     V10.03.10  02/10/2012  Davin             CAR 265550                  *
.  *                Added patcn288 - Send extra diet codes in ZXV-31          *
.  *     V10.03.09  28/03/2012  Patrick Adair     CAR 257776                  *
.  *                Added patcn282 - warn if no fim details                   *
.  *                Added patcn283 - Program in progress                      *
.  *     V10.03.08  04/07/2012  Don Nguyen     CAR 264561                     *
.  *                Added PATCN287 (PTCNHBPI)                                 *
.  *     V10.03.07  02/07/2012  Jill Parkinson CAR 268273                     *
.  *                Added PATCN286(PTCNMEMR)                                  *
.  *     V10.03.06  25/06/2012  Mike Laming   CAR 267797  2012 DRG 6.2        *
.  *                Added PATCN284(PTCNU62G) and PATCN285(PTCNU62C) - DRG 6.2 *
.  *     V10.03.05  08/03/2012  Patrick Adair     CAR 260226                  *
.  *                Added PTCNH7RA - Replace A08 with A38/A05 for rescheduled *
.  *                O/P Appointments Messages                                 *
.  *     V10.03.04  24/02/2012  Mike Laming       CAR 252065                  *
.  *                PATCN280 - MediBank Extracts Path (Mi Health) (PTCNPMPL)  *
.  *     V10.03.03  13/02/2012  Mike Laming       CAR 259708                  *
.  *                PATCN279 - HL7 Using ED Discharge Doctor (emviur02)       *
.  *     V10.03.02  07/12/2011  Ebon Clements     CAR 248529                  *
.  *                PATCN277 - New contacts webPAS unique id                  *
.  *                PATCN278 - HL7 ignore delete segment for NK1/ZAL segments *
.  *     V10.03.01  07/11/2011  Ebon Clements     CAR 248529                  *
.  *                PATCN276 - Using New Contacts Audit File (pmsaudce)       *
.  *                28/10/2011  J.Tan          CAR 235425                     *
.  *                PTCNPPRC - Print NZ Private Procedure Code in Inv.body    *
.  *                PTCNPITM - Print Full Item Description in Invoice body    *
.  *     V10.02.17  17/10/2011  Jill Parkinson  CAR 251645                    *
.  *                Added PATCN273 - Default code for organ procurement       *
.  *     V10.02.16  30/09/2011  Saroeun Soeur  CAR 208854                     *
.  *                Added PATCN272 - Category to use for Disability Alert     *
.  *     V10.02.15  11/09/2011  J.Tan          CAR 251460                     *
.  *                Added PATCN271 - EMR Revenue breakdown on G/L Extract     *
.  *     V10.02.14  20/09/2011  Ebon Clements  CAR 248650                     *
.  *                PATCN270 - HL7 sending short ward/bed description         *
.  *     V10.02.13  14/09/2011  Jill Parkinson CAR 248486                     *
.  *                PATCN269 - Using hospital security                        *
.  *     V10.02.12  10/09/2011  J.Tan             CAR 249949                  *
.  *                PATCN268 - GST breakdown on Fees Invoice report           *
.  *     V10.02.11  05/08/2011  Peter Vela     CAR 239559                     *
.  *                PATCN260 not used anymore                                 *
.  *     V10.02.10  26/07/2011  Peter Vela     CAR 239559                     *
.  *                Added PATCN267 - Using Disaster Patient Detail            *
.  *     V10.02.09  14/07/2011  Peter McMullen CAR 241813                     *
.  *                Added PATCN266 - search rec count (PTCNSRCT) for pw90     *
.  *     V10.02.08  12/07/2011  Davin          CAR 240723                     *
.  *                Added PATCN265 - Using Divisions                          *
.  *     V10.02.07  01/07/2011  J.Tan             CAR 239592                  *
.  *                Added PATCN264 - Using Extra Compensable table            *
.  *     V10.02.06  27/06/2011 Peter Vela      CAR 245199                     *
.  *                Added PATCN263 - HL7 sending NOK from pmscexaf            *
.  *     V10.02.05  06/06/2011 Jill Parkinson  CAR                            *
.  *                Added PATCN262 - Alternate ID without leading character   *
.  *     V10.02.04  02/06/2011 Jill Parkinson  CAR 242416                     *
.  *                Added PATCN261 - Using new contact table                  *
.  *     V10.02.03  11/05/2011  Peter Vela     CAR 239585                     *
.  *                Added PATCN260 - Alternate Id for Disaster Patient Cat AI *
.  *     V10.02.02  05/05/2011  J.Tan          CAR 239593                     *
.  *                Added PATCN259 - Using Multiple Financial Elections       *
.  *     V10.02.01  20/04/2011  Jill Parkinson   CAR 240721                   *
.  *                Added PATCN257 - Enterprise Master Patient Index          *
.  *                and PATCN258 - CTYPEUR UR Number Format                   *
.  *     V10.01.08  27/01/2011  J.Tan            CAR 233205                   *
.  *                Added PATCN256 - Hold invoice until Prosthetics complete  *
.  *     V10.01.07  25/01/2011  Jill Parkinson CAR 222655                     *
.  *                Added PATCN254 and PATCN255                               *
.  *     V10.01.06  20/12/2010  Davin          CAR 230955                     *
.  *                Added PATCN253 - Sending linked practice details in PV1-08*
.  *                17/12/2010  Davin          CAR 235587                     *
.  *                Added IBACN012 - Query Solicited Socket Alias             *
.  *     V10.01.05  14/12/2010  Ebon Clements  CAR 233900                     *
.  *                Added PATCN251 - Next bulk journal batch number           *
.  *                Added PATCN252 - Next bulk misc batch number              *
.  *     V10.01.04  24/11/2010  J.Tan          CAR 233043                     *
.  *                Added PTCNINVN - No of lines on Invoice body              *
.  *     V10.01.03  18/11/2010  Jill Parkinson CAR 233199                     *
.  *                Added PATCN241 - Discharge Summary after Coding           *
.  *                Added PATCN242 - 249 Hospital Details                     *
.  *     V10.01.02  11/11/2010  Mike Laming    CAR 233237                     *
.  *                Added PATCN240 - Prevent Receipt of Debt Collection Visits*
.  *     V10.01.01  10/11/2010  Jill Parkinson CAR 233259                     *
.  *                Added PATCN239 - Hospital Type - Public/Private           *
.  *     V10.00.08  22/10/2010  Davin          CAR 231481                     *
.  *                Added PATCN238 - Using Ward Provider Number               *
.  *     V10.00.07  06/09/2010  Davin          CAR 226974                     *
.  *                Added PATCN235 - Eclipse OPV Outbound Path                *
.  *                Added PATCN236 - Eclipse OPV Sent Path                    *
.  *                Added PATCN237 - Eclipse Using Test/Prod for OPV          *
.  *     V10.00.06  02/09/2010  Davin          CAR 229654                     *
.  *                Added PATCN232 - Eclipse IMC Outbound Path                *
.  *                Added PATCN233 - Eclipse IMC Sent Path                    *
.  *                Added PATCN234 - Eclipse Using Test/Prod for IMC claims   *
.  *     V10.00.05  23/06/2010  Peter Vela        CAR 216356                  *
.  *                Added PATCN231 - Default Admissino Time and               *
.  *                Discharge Time to Day Oncology Usage                      *
.  *     V10.00.04  16/06/2010  Jill Parkinson   CAR 222551                   *
.  *                Added PATCN230 -PTCNPUNQ - Pregnancy Unique Id            *
.  *     V10.00.03  21/05/2010  Mike Laming      CAR 222404                   *
.  *                Added PATCN229 -PTCNVDUC - Using VIADUCT ? (Y/N)          *
.  *     V10.00.02  14/05/2010  Mike Laming      CAR 219039                   *
.  *                Added PATCN228 -PTCNPATY - PaTTY Pharmacy Interface Path  *
.  *     V10.00.01  01/04/2010  Mike Laming   CAR 219246  HDP 2010      *
.  *                Added PATCN227 - ICD10 Ed.6 Go-live  (PTCNGDV7)     *
.  *      V9.12.13  10/03/2010  J.Tan            CAR 216044             *
.  *                Added PTCNCLEV - Claim code to include Leave days   *
.  *                in Stepdown count                                   *
.  *      V9.12.11  21/12/2009  J.Tan            CAR 203578             *
.  *                Added PTCNUCMX - Use Prov.Casemix code for reports  *
.  *      V9.12.10  05/11/2009  J.Tan             CAR 174079            *
.  *                Added Debtor Follow-up                              *
.  *      V9.12.09  28/09/2009  Peter McMullen    CAR 206704            *
.  *                Added PATCN223 - Eclipse SA Console URL             *
.  *      V9.12.08  23/09/2009  Ebon Clements     CAR 202769            *
.  *                Added PATCN222 - Alternate Address Category Code    *
.  *      V9.12.07  01/09/2009  Saroeun Soeur     CAR 201216            *
.  *                PATCN221  -  Result Display Year                    *
.  *      V9.12.06  27/08/2009  Ebon Clements     CAR 202965            *
.  *                Added PATCN220 - Display Event Level CDM Icons      *
.  *      V9.12.05  27/07/2009  Ebon Clements     CAR 191023            *
.  *                Added PATCN219 - Aged trial balance layout          *
.  *      V9.12.05  22/07/2009  WeeLee Koo        CAR 188324            *
.  *                Added PATCN218 for New Discharge Summary Layout     *
.  *      V9.12.04  20/07/2009  J.Tan             CAR 199603            *
.  *                Added PTCNPICD - Print ICD codes on WC and TAC inv. *
.  *      V9.12.03  18/06/2009  Mike Laming   CAR 195877                *
.  *                Added PATCN215 and PATCN216 for TAC Extract         *
.  *      ........  01/06/2009  Mike Laming   CAR 197814  2009 DRG 6.0  *
.  *                Added PATCN213 and PATCN214 for DRG Ver 6.0         *
.  *      V9.12.02  18/05/2009  Ebon Clements     CAR 195390            *
.  *                Added PATCN212 - Child/Adult Age Cut Off            *
.  *      V9.12.01  11/05/2009  J.Tan             CAR 125842            *
.  *                Added PATCN211 - PTCNCALM - Recal.zero amt Misc.item*
.  *      V9.11.16  08/05/2009  Mike Laming       CAR 195875            *
.  *                Added PATCN210 - for PTCNTACP TAC Provider No.      *
.  *      V9.11.15  21/04/2009  Jill Habasque     CAR 145706            *
.  *                Added PATCN209 - Using GP Access                    *
.  *      V9.11.14  07/04/2009  S.Soeur           CAR 194079            *
.  *                Added IBA control parameter PATCN208                *
.  *      V9.11.13  01/04/2009  S.Soeur           CAR 183976            *
.  *                Added Eclipse Parameter PATCN206,PATCN207           *
.  *      V9.11.12  30/03/2009  J.Tan             CAR 190946            *
.  *                Added PTCNGLPF - G/L Interface Prefix               *
.  *      V9.11.11  16/03/2009  J.Tan             CAR 188110            *
.  *                Added PTCNICLS - Prompt for ICD10 Suggeste Class.   *
.  *      V9.11.10  12/03/2009  J.Tan             CAR 188102            *
.  *                Added PTCNADEP - Apply Deposits to Patient Invoice  *
.  *      V9.11.09  20/02/2009  Peter Vela     CAR 183976               *
.  *                Added PATCN200 - Eclipse OEC Outbound Path          *
.  *                Added PATCN201 - Eclipse OEC Sent Path              *
.  *                Added PATCN202 - Eclipse OEC Filename Parameter     *
.  *      V9.11.08  10/02/2009  Jill Habasque  CAR 186302               *
.  *                Added PATCN199 - Category for SOR Transport         *
.  *      V9.11.07  02/02/2009  Peter Vela        CAR 183976            *
.  *                Added Eclipse Parameters                            *
.  *                PTCNSCPN - Sender Name                              *
.  *                PTCNSCPP - Sender Phone                             *
.  *                PTCNSCPP - Sender Email                             *
.  *      V9.11.06  28/11/2008  Peter Vela        CAR 183976            *
.  *                Added Eclipse Parameter and cgi variable            *
.  *                PTCNECLI PATCN195 - Eclipse Extract Sent Path       *
.  *                Parameter                                           *
.  *                Added Eclipse Parameter and cgi variable            *
.  *                PTCNDCOP PATCN194 - Days before closing claim with  *
.  *                outstanding processing reports                      *
.  *      V9.11.05  19/11/2008  Peter Vela        CAR 183976            *
.  *                Added Eclipse Parameters cgi variables              *
.  *      V9.11.04  21/10/2008  Ebon Clements     CAR 174077            *
.  *                Added PATCN183 - Refresh bed board minutes          *
.  *      V9.11.03  20/10/2008  Davin             CAR 175736            *
.  *                Added PATCN182 - Send location status in HL7 PV1-003*
.  *      V9.11.02  10/10/2008  J.Tan            CAR 180656             *
.  *                Added PATCN181 - Transmit Palliative care for PRS2  *
.  *      V9.11.01  24/09/2008  Ebon Clements     CAR 174052            *
.  *                Added PATCN178 - Using Both Admission & Post Op Beds*
.  *                Added PATCN179 - Capture HouseKeeping on Transfer   *
.  *                Added PATCN180 - Capture HouseKeeping on Discharge  *
.  *      V9.10.03  18/09/2007  J.Tan            CAR 172904             *
.  *                Added PATCN177 - GST Journal Code for SX split GST  *
.  *      V9.10.02  23/07/2008  Jill Habasque     CAR 174243            *
.  *                Added PATCN171-76
.  *      V9.10.01  15/07/2008  Jill Habasque     CAR 164652            *
.  *                Added PATCN170 - Update booking/preadmit details    *
.  *      V9.09.18  03/04/2008  Peter Vela        CAR 163822            *
.  *                Added PATCN169 - Day Onc view max number of         *
.  *                patients                                            *
.  *      V9.09.17  02/04/2008  Mike Laming       CAR 163918            *
.  *                Added PATCN152 - Using Grouper 4.1   (PTCNU41G)     *
.  *                Added PATCN153 - Grouper 4.1 3M code (PTCNC41C)     *
.  *                Added PATCN154 - Using Grouper 4.2   (PTCNU42G)     *
.  *                Added PATCN155 - Grouper 4.2 3M code (PTCNC42C)     *
.  *                Added PATCN156 - Using Grouper 5.0   (PTCNU50G)     *
.  *                Added PATCN157 - Grouper 5.0 3M code (PTCNC50C)     *
.  *                Added PATCN158 - Using Grouper 5.2   (PTCNU51G)     *
.  *                Added PATCN159 - Grouper 5.1 3M code (PTCNC51C)     *
.  *                Added PATCN160 - Using Grouper 5.2   (PTCNU52G)     *
.  *                Added PATCN161 - Grouper 5.2 3M code (PTCNC52C)     *
.  *                Added PATCN162 - ICD10 Ed.1 Go-live  (PTCNI10D)     *
.  *                Added PATCN163 - ICD10 Ed.2 Go-live  (PTCNGDV2)     *
.  *                Added PATCN164 - ICD10 Ed.3 Go-live  (PTCNGDV3)     *
.  *                Added PATCN165 - ICD10 Ed.4 Go-live  (PTCNGDV4)     *
.  *                Added PATCN166 - ICD10 Ed.5 Go-live  (PTCNGDV5)     *
.  *                Added PATCN167 - ICD10 Ed.6 Go-live  (PTCNGDV6)     *
.  *                Added PATCN168 - Default Grouper Ver (PTCNDGPV)     *
.  *      V9.09.16  27/03/2008  Ebon Clements     CAR 160860            *
.  *                Added PATCN151 - Use Sent Description/Amount in P03 *
.  *      V9.09.15  29/02/2008  Mike Laming       CAR 153670            *
.  *                Added PATCN148 - ACC XML Message Path    (PTCNACPT) *
.  *                Added PATCN149 - ACC XML Document Sender (PTCNACSN) *
.  *                Added PATCN150 - ACC XML Document Version (PTCNACVR)*
.  *      V9.09.14  24/01/2008  Peter Vela        CAR 155334            *
.  *                Added PATCN146 - Tracking Prosthetics?              *
.  *                Added PATCN147 - JDE Prosthetic Extract Pathname    *
.  *      V9.09.13  07/01/2008  Peter Vela        CAR 158768            *
.  *                Added PATCN144 - Start Display Time for Inp Sched   *
.  *                Added PATCN145 - End Display Time for Inp Sched     *
.  *      V9.09.12  02/01/2008  J.Tan             CAR 136785            *
.  *                Added PATCN143 - Exclude Days Hosp. for daycase     *
.  *      V9.09.11  02/01/2008  Davin            CAR 153382             *
.  *                Added PATCN142 - Autolink Fee Information to Preadm *
.  *      V9.09.10  14/12/2007  Ebon Clements    CAR 157600             *
.  *                Added PATCN141 - Don't Display unit on current      *
.  *                patient search                                      *
.  *      V9.09.08  26/11/2007  Steve Armstrong  CAR 155887             *
.  *                Added PATCN139 - Sending CMBS Items                 *
.  *      V9.09.07  19/11/2007  Jill Habasque    CAR 148954             *
.  *                Added PATCN138 - Use Ward/Bed Management            *
.  *      V9.09.06  14/11/2007  Ebon Clements    CAR 151894             *
.  *                Added PATCN137 - Use Ward/Bed Request               *
.  *      V9.09.05  31/10/2007  Peter Vela       CAR 151949             *
.  *                Added PATCN136 - Use Moruge Management              *
.  *      V9.09.04  12/10/2007  Davin            CAR 151896             *
.  *                Added PATCN135 - Display ward/bed description       *
.  *      V9.09.03  24/09/2007  Jill Habasque    CAR 150322             *
.  *                Added PATCN133 - Hold invoice until cmbs coding     *
.  *                Added PATCN134 - Hold invoice until coding complete *
.  *      V9.09.02  14/09/2007  Ebon Clements    CAR 150226             *
.  *                Added PATCN132 - Using frame friendly               *
.  *                12/09/2007  Steve Armstrong  CAR 148394             *
.  *                Added PATCN129 - Send Attending Doctor in PV1-07    *
.  *                Added PATCN130 - Send A05 for Pre-admissions        *
.  *                12/09/2007  Jill Habasque    CAR 150317             *
.  *                Added PATCN131 - Mandatory to preadmit before       *
.  *                booking                                             *
.  *      V9.09.01  11/07/2007  Mike Laming      CAR 140395             *
.  *                Added PATCN125 & PATCN126 Statement Header & Tail   *
.  *                Added PATCN127 & PATCN128 Inpatient Invoice H & Tail*
.  **********************************************************************
.  *      V9.08.13  10/05/2007  Steve Armstrong  CAR 135721             *
.  *                Added PATCN121 - Send Mobile Phone & Email in PID-13*
.  *                Added PATCN122 - Send Interpr. Req'd flag in PID-15 *
.  *                Added PATCN123 - Send ACC data in PV1-20            *
.  *                Added PATCN124 - Send Health Specialty in PV1-10    *
.  *      V9.08.12  07/05/2007  J.Tan    CAR 140282                     *
.  *                Added PATCN120 - G/L Extract directory path         *
.  *      V9.08.11  24/04/2007  J.Tan            CAR 130467             *
.  *                Added PATCN116 - Journal code for transfer overpaym.*
.  *      V9.08.10  01.02.2007  Ebon Clements     CAR 120001            *
.  *                Added PATCN114 and PATCN115 - loss/win journal code *
.  *      V9.08.09  08/12/2006  Ebon Clements     CAR 126779            *
.  *                Added PATCN113 - Related provider invoice sequence  *
.  *      V9.08.08  06/12/2006  Steve Armstrong  CAR 125110             *
.  *                Added PATCN112 - WA HDP Using Contracting           *
.  *      V9.08.07  30/11/2006  Ebon Clements    CAR 120003             *
.  *                Added PATCN110 - MBS Item description               *
.  *      V9.08.06  28/11/2006  Steve Armstrong  CAR 126191             *
.  *                Added PATCN107 - Send Claim Code in PV1-20 (HL7)    *
.  *                Added PATCN108 - Log HL7 Broadcast Messages         *
.  *                Added PATCN109 - Send Admitting/Presenting Diag. in *
.  *                                 DG1 segment                        *
.  *                Added PATCN111 - Send Non-Compliant NK1 Segment     *
.  *      V9.08.05  14/11/2006  Peter Vela       CAR 124547             *
.  *                Added PATCN105 - Change PRFA when Patient Deceased  *
.  *                Added PATCN106 - Description of Deceased Estate     *
.  *      V9.08.04  03/11/2006  J.Tan            CAR 123584             *
.  *                Added PATCN104 - Using System based G/L Interface   *
.  *      V9.08.03  03/11/2006  Mike Laming      CAR 103368             *
.  *                Added PATCN103 - Using CCPS EDI Module (PTCNUCCP)   *
.  *      V9.08.02  02/11/2006  Steve Armstrong  CAR 109687             *
.  *                Added PATCN102 - Send U/R Check Digit in PID-03     *
.  *      V9.08.01  13/10/2006  Davin          CAR 113730               *
.  *                Added PATCN101 - Send DG1 segment in A02            *
.  **********************************************************************
.  *      V9.07.07  19/09/2006  Jill Habasque  CAR 109852               *
.  *                Added PATCN099 - Health fund in header              *
.  *                Added PATCN100 - Claim code in header               *
.  *      V9.07.06  07/09/2006  Peter Vela     CAR 118225               *
.  *                Added PATCN097 - Preferred Surname                  *
.  *                Added PATCN098 - Preferred Given Name               *
.  *      V9.07.05  06/09/2006  Jill Habasque  CAR 109852               *
.  *                Added PATCN096 - Display alternate ID in name format*
.  *                08/08/2006  J.Tan          CAR 103365               *
.  *                Added PATCN094 - Category FI for discount           *
.  *                Added PATCN095 - Category FI for rounding           *
.  *      V9.07.04  20/07/2006  Ebon Clements  CAR 103365               *
.  *                Added round invoice total down to nearest cents     *
.  *                PATCN093                                            *
.  *      V9.07.03  19/07/2006  Ebon Clements  CAR 107633               *
.  *                Added charge bed fee when patient is on leave       *
.  *                PATCN092                                            *
.  *      V9.07.02  19/07/2006  Ebon Clements  CAR 107625               *
.  *                Added bed fee for day discharge PATCN089            *
.  *                PATCN090,PATCN091                                   *
.  *      V9.07.01  17/07/2006  J.Tan            CAR 103365             *
.  *                Added PATCN087 - Invoice Layout                     *
.  *                Added PATCN088 - Automatic doctor's att.fee code    *
.  *      V9.07.04  13/07/2006  Jill Habasque    CAR 107632             *
.  *                Added PATCN086 - Which category for allergies       *
.  *      V9.07.03  11/07/2006  J.Tan            CAR 112128             *
.  *                Added PTCNMLEG - Using Mental Health Legal status   *
.  *      V9.07.02  06/07/2006  Ebon Clements    CAR 103365             *
.  *                Added PTCNEPAY - Using Expected Payors              *
.  *      V9.07.01  05/07/2006  J.Tan            CAR 103365             *
.  *                Added PATCN083 - Using daily inpatient charge       *
.  *      V9.06.01  14/06/2006  Davin S          CAR 104165             *
.  *                Added PATCN082 - QLD Category for Contract Details  *
.  *      V9.05.04  06/04/2006  Mike Laming      CAR 99475              *
.  *                Added PATCN077 to PATCN081 - HL7 Misc. Parameters   *
.  *      V9.05.03  05/04/2006  Jill Habasque    CAR                    *
.  *                Added PATCN076 - Multi Hospital PRS2 extract        *
.  *      V9.05.02  18/03/2006  Ebon Clements    CAR 78533              *
.  *                Added PATCN075 - Multi Hospital HCP Search Display  *
.  *      V9.05.01  08/03/2006  Mike Laming      CAR 79281              *
.  *                Added PATCN073/PTCN3BFA - 3B Future Action (Cat.FA) *
.  *                Added PATCN074/PTCN3BDY - No.days expiry notice FA  *
.  *      V9.05.B07 23/02/2006  Mike Laming      CAR 93425              *
.  *                Added PATCN072/PTCNA31X - Alt 'A' code for A31      *
.  *      V9.05.B06 23/02/2006  Mike Laming      CAR 81335              *
.  *                Added PATCN071/PTCNM02M                             *
.  *      V9.05.B05 16/02/2006  Ebon Clements    CAR 81335              *
.  *                Added PATCN068 to PATCN070                          *
.  *      V9.05.B04 16/02/2006  Mike Laming      CAR 92179              *
.  *                Added PTCNLEGB/PATCN067                             *
.  *      V9.05.B03 06/01/2006  Mike Laming      CAR 76341              *
.  *                Added IBACN010 & IBACN011 (IBCNHSID & IBCNHCEN)     *
.  *      V9.05.B02 20/12/2005  J.Tan            CAR 89226              *
.  *                Added PTCNRCAL                                      *
.  *      V9.05.B01 12.12.2005 Davin             CAR 64087              *
.  *                Changed IBACN006,IBACN007,IBACN008 to form fields   *
.  *      V9.04.19  01/12/2005  J.Tan            CAR 84059              *
.  *                  Added PTCNDISI                                    *
.  *      V9.04.18  25.11.2005 Davin             CAR 64087              *
.  *                Added IBACN009                                      *
.  *      V9.04.17  23/11/2005  Ebon Clements     CAR 86040             *
.  *                Added parameter PATCN058 - PATCN064                .*
.  *      V9.04.16  08/11/2005  J.Tan             CAR 58666             *
.  *                Added parameter PTCNCELG - Eligibility check on adm.*
.  *      V9.04.15  18.10.2005 Davin             CAR 64087              *
.  *                Added IBACN003,IBACN004,IBACN005,IBACN006,IBACN007  *
.  *                      IBACN008                                      *
.  *                Added PATCN042 - PATCN056 for HL7 Triggers          *
.  *      V9.04.14  30.09.2005 Ebon Clements     CAR 60374              *
.  *                Added PATCN041 -  Do only supplied ward in scan     *
.  *      V9.04.13  12.09.2005 Ebon Clements     CAR 61061              *
.  *                Added PATCN040 - Using compensable detail patient   *
.  *                folders                                             *
.  *      V9.04.12  02.09.2005 J.Tan             CAR 74612              *
.  *                Added PATCN039                                      *
.  *      V9.04.11  23.08.2005 Jill Habasque     CAR 73119              *
.  *                Added PATCN038                                      *
.  *      V9.04.10  18.07.2005 Davin             CAR 22680              *
.  *                Added PATCN037                                      *
.  *      V9.04.09  12.05.2005 J.Tan             CAR 56699              *
.  *                Added PATCN035 PATCN036                             *
.  *      V9.04.08  17.03.2005 J.Tan             CAR 56698              *
.  *                Added PATCN031 PATCN032,PATCN033,PATCN034-HIC Claims*
.  *      V9.04.07  08.05.2005 J.Tan             CAR 55961              *
.  *                Added PATCN030.                                     *
.  *      V9.04.06  24.01.2005 Davin         CAR 56663                  *
.  *                Added IBACN002                                      *
.  *      V9.04.05  10.12.2004 Jill Habasque CAR 52833                  *
.  *                Added PATCN029                                      *
.  *      V9.04.04  16.11.2004 Peter Vela        CAR 54520              *
.  *                Added PATCN028                                      *
.  *      V9.04.03  12.10.2004 J.Tan             CAR 54242              *
.  *                Added PATCN015                                      *
.  *      V9.04.02  01.10.2004 Peter Vela CAR 53150                     *
.  *                Added Report Code Parameters for PRS2               *
.  *      V9.04.01  19.08.2004 J.Tan  CAR                               *
.  *                Added IBACN001 - Multi hospital                     *
.  *      V9.03.02  30.07.2003 Lina Vo           CAR 52050              *
.  *                Added PATCN005 to PATCN014                          *
.  *      V9.03.01  20.05.2003 Pat Dirito        CAR 50035              *
.  *                Added PATCN002 & PATCN003                           *
.  *      V9.03.00  04.05.2003 J.Tan             CAR 49531              *
.  *                Created include                                     *
.  **********************************************************************
.
.Name     Type   Length   Description
.----     ----   ------   -----------
PATCN001  DIM       1     * Allow Backdate Invoice 0-No, 1-Yes
PATCN002  DIM       1     * Using Mech. Vent. in Casepayement Billing
PATCN003  DIM       9     * Mechanical Ventilation Billing Code
PATCN004  DIM       1     * Using Alternate ID table (pmsaidaf)
PATCN005  DIM       2     * Patient Day Mix Range 1
PATCN006  DIM       2     * Patient Day Mix Range 2
PATCN007  DIM       2     * Patient Day Mix Range 3
PATCN008  DIM       2     * Patient Day Mix Range 4
PATCN009  DIM       2     * Patient Day Mix Range 5
PATCN010  DIM       2     * Patient Day Mix Range 6
PATCN011  DIM       2     * Patient Day Mix Range 7
PATCN012  DIM       2     * Patient Day Mix Range 8
PATCN013  DIM       2     * Patient Day Mix Range 9
PATCN014  DIM       2     * Patient Day Mix Range 10
PATCN015  DIM       2     * PRS2 Report Code for 1st Request           *I-53150
PATCN016  DIM      12     * PRS2 1st Report Request Date Range         *I-53150
PATCN017  DIM       2     * PRS2 Report Code for 2nd Request           *I-53150
PATCN018  DIM      12     * PRS2 2nd Report Request Date Range         *I-53150
PATCN019  DIM       2     * PRS2 Report Code for 3rd Request           *I-53150
PATCN020  DIM      12     * PRS2 3rd Report Request Date               *I-53150
PATCN021  DIM       2     * PRS2 Report Code for 4th Request           *I-53150
PATCN022  DIM      12     * PRS2 4th Report Request Date Range         *I-53150
PATCN023  DIM       2     * PRS2 Report Code for 5th Request           *I-53150
PATCN024  DIM      12     * PRS2 5th Report Request Date Range         *I-53150
PATCN025  DIM       2     * PRS2 Report Code for 6th Request           *I-53150
PATCN026  DIM      12     * PRS2 6th Report Request Date               *I-53150
PATCN027  DIM       1     * Print ward/bed on invoices
PATCN028  DIM       1     * Day Facility Indicator 0 = Not Day Facility
.                                                  1 = Day Facility    *I-54520
PATCN029  DIM       1     * Display Alternate ID in search
.
PATCN030  DIM       1     * Print Transactions with a zero total invoice
PATCN031  DIM       8     * Next Claim number for HIC Claims
PATCN032  DIM       5     * Next Batch number for HIC Claims
PATCN033  DIM       3     * Maximum number of claims in a batch
PATCN034  DIM       3     * Patient Indicator for Outpatient
PATCN035  DIM      60     * HIC Extract Outbound Path
PATCN036  DIM      60     * HIC Extract Inbound Path
PATCN037  DIM       1     * Only display active GPs in search
PATCN038  DIM       4     * ESIS Campus code
PATCN039  DIM       1     * Print Billing Comments on ATB
PATCN040  DIM       1     * Using compensable detail patient folders
PATCN041  DIM       1     * Do only supplied ward in scan
PATCN042  DIM       1     * PAS-HL7 Sending A01 (Admission)        (0=No/1=Yes)
PATCN043  DIM       1     * PAS-HL7 Sending A02 (Transfer)         (0=No/1=Yes)
PATCN044  DIM       1     * PAS-HL7 Sending A03 (Discharge)        (0=No/1=Yes)
PATCN045  DIM       1     * PAS-HL7 Sending A08 (Admission Update) (0=No/1=Yes)
PATCN046  DIM       1     * PAS-HL7 Sending A11 (Cancel Admit)     (0=No/1=Yes)
PATCN047  DIM       1     * PAS-HL7 Sending A12 (Cancel Transfer)  (0=No/1=Yes)
PATCN048  DIM       1     * PAS-HL7 Sending A13 (Cancel Discharge) (0=No/1=Yes)
PATCN049  DIM       1     * PAS-HL7 Sending A14 (Preadmit)         (0=No/1=Yes)
PATCN050  DIM       1     * PAS-HL7 Sending A21 (On-Leave)         (0=No/1=Yes)
PATCN051  DIM       1     * PAS-HL7 Sending A22 (Return from Leave)(0=No/1=Yes)
PATCN052  DIM       1     * PAS-HL7 Sending A27 (Cancel Preadmit)  (0=No/1=Yes)
PATCN053  DIM       1     * PAS-HL7 Sending A28 (PMI register)     (0=No/1=Yes)
PATCN054  DIM       1     * PAS-HL7 Sending A31 (PMI Update)       (0=No/1=Yes)
PATCN055  DIM       1     * PAS-HL7 Sending A34 (U/R Merge)        (0=No/1=Yes)
PATCN056  DIM       1     * PAS-HL7 Sending A44 (Change U/R for IP)(0=No/1=Yes)
PATCN057  DIM       1     * Eligibility check on Admission

PATCN058  DIM       2     * EDI Hospital Code Parameter
PATCN059  DIM       60    * EDI Extract Outbound Path Parameter
PATCN060  DIM       50    * HosClaims Originator (ADT10)
PATCN061  DIM       1     * HosClaims Critical Care Flag (ADT10)
.                              0 = Using Adm. Type (Cat A) for ICU
.                              1 = Using Bed Type (Cat BT) for ICU
PATCN062  DIM       1     * Source of Mother/Baby relationship (EDI)
.                              0 = Using unqualified status
.                              1 = Using baby's DOB/mothers visit date
PATCN063  DIM       1     * Use EDI module Yes or No
.                              1=Yes 0=No
PATCN064  DIM       8     * EDI Batch no
PATCN065  DIM       1     * Allow discharge/change disc.date after invoiced
PATCN066  DIM       1     * Recalculate Theatre fees
PATCN067  DIM       1     * Using Alternate Legacy system
PATCN068  DIM       1     * Auto Generate Doctor/HCP Codes 0=No 1=Yes
PATCN069  DIM       10    * Next Doctor/HCP Code
PATCN070  DIM       1     * Skip Every 10th Doctor/HCP Code
PATCN071  DIM       1     * send HL7 message M02 on change Doctor Details
PATCN072  DIM       2     * alternate 'A' code for A31
PATCN073  DIM       3     * Action Type Code for 3B Future Action
PATCN074  DIM       3     * No.of days notice for 3B Certificate expiry
PATCN075  DIM       1     * Multi Hospital HCP Search Display
PATCN076  DIM       1     * Multi Hospital PRS2 Extract
PATCN077  DIM       1     * HL7 PV1-39 O/P Clinic Loc'n Code
PATCN078  DIM       1     * HL7 PV1-04 Use Cat CC (instead of Cat P)
PATCN079  DIM       1     * HL7 PV1-18 Use Cat P (instead of Cat CC)
PATCN080  DIM       1     * HL7 PV1-36 Use Cat D (instead of Cat DD)
PATCN081  DIM       1     * HL7 PV1-36 Use Cat EW (for EMR Equiv)
PATCN082  DIM       2     * QLD Category for Contract Details (Cat S or Cat CL)
PATCN083  DIM       1     * Type of inpatient daily charge
PATCN084  DIM       1     * Using Expected Payors
PATCN085  DIM       1     * Using Mental Health Legal status
PATCN086  DIM       2     * Which alert category for allergies in messages H1-H9
PATCN087  FORM      2     * Invoice Layout
PATCN088  DIM       8     * Automatic Doctor's Attendance Fee Code
PATCN089  DIM       1     * Bed fee for day discharge
PATCN090  DIM       5     * No bed fee for discharges before (partial)
PATCN091  DIM       5     * 50% discount for discharges after(partial)
PATCN092  DIM       1     * Charge bed fee when patient is on leave
PATCN093  DIM       2     * Round invoice total down to nearest cents
PATCN094  DIM       3     * Category FI for Discount
PATCN095  DIM       3     * Category FI for Rounding
PATCN096  DIM       1     * Display Alternate ID in patient name format
PATCN097  DIM       1     * Using Preferred Surname
PATCN098  DIM       1     * Using Preferred Given Name
PATCN099  DIM       1     * Health fund/table in header
PATCN100  DIM       1     * Claim code in header
PATCN101  DIM       1     * Send DG1 segment in A02
PATCN102  DIM       1     * Send U/R Check Digit in PID-03
PATCN103  DIM       1     * Using CCPS EDI Module
PATCN104  DIM       1     * Using System based G/L Interface
PATCN105  DIM       1     * Change PRFA when Patient Deceased?
PATCN106  DIM       20    * Description of Deceased Estates
PATCN107  DIM       1     * Send Claim Code in PV1-20 (HL7)
PATCN108  DIM       1     * Log HL7 broadcast messages
PATCN109  DIM       1     * Send Admitting/Presenting Diag. in DG1 segment
PATCN110  DIM       10    * MBS Item description
PATCN111  DIM       1     * Send Non-Compliant NK1 segment
PATCN112  DIM       1     * WA HDP Using Contracting
PATCN113  DIM       8     * Related Provider Invoice sequence
PATCN114  DIM       2     * Loss Journal Code
PATCN115  DIM       2     * Win Journal Code
PATCN116  DIM       3     * Journal code for Transfer overpayment
PATCN117  DIM       1     * Using ACC E-Lodgement  Y/N
PATCN118  DIM       7     * Last Valid ACC Claim Number
PATCN119  DIM       7     * Next ACC number to be Assigned
PATCN120  DIM      60     * G/L Extract directory path
PATCN121  DIM       1     * Send Mobile Phone & Email in PID-13
PATCN122  DIM       1     * Send Interpr. Req'd flag in PID-15
PATCN123  DIM       1     * Send ACC data in PV1-20
PATCN124  DIM       1     * Send Health Specialty in PV1-10
PATCN125  DIM       6     * Pat.Billing Statement Header (template)
PATCN126  DIM       6     * Pat.Billing Statement Tail (template)
PATCN127  DIM       6     * Inpatient Invoice Header Code (Stationery template)
PATCN128  DIM       6     * Inpatient Invoice Tail Code (Stationery template)
PATCN129  DIM       1     * Send Attending Doctor in PV1-07
PATCN130  DIM       1     * Send A05 for Pre-admissions
PATCN131  DIM       1     * Mandatory preadmit before booking
PATCN132  DIM       1     * Using Frame Friendly
PATCN133  DIM       1     * Hold invoice until theatre complete
PATCN134  DIM       1     * Hold invoice until coding complete
PATCN135  DIM       1     * Display ward/bed description rather than code
PATCN136  DIM       1     * Use Morgue Management
PATCN137  DIM       1     * Use Ward/Bed Request
PATCN138  DIM       1     * Use Ward/Bed Management
PATCN139  DIM       1     * Sending CMBS Items
PATCN141  DIM       1     * Don't Display Unit on Current Patient Search
PATCN142  DIM       1     * Autolink Fee Information to Pre-Admission
PATCN143  DIM       1     * Exclude Days Hospitalisation for Daycase billing
PATCN144  DIM       2     * Start Display Time for Inpatient Scheduling
PATCN145  DIM       2     * End Display Time for Inpatient Scheduling
PATCN146  DIM       1     * Tracking Prosthetics?
PATCN147  DIM       60    * JDE Prosthetic Extract Pathname
PATCN148  DIM       60    * ACC XML Message Path    (PTCNACPT)
PATCN149  DIM       60    * ACC XML Document Sender (PTCNACSN)
PATCN150  DIM       20    * ACC XML Document Version (PTCNACVR)
PATCN151  DIM       1     * Use Sent Description/Amount in P03
PATCN152  DIM       1     * Using 4.1 Grouper   (PTCNU41G)
PATCN153  DIM       3     * 4.1 Grouper 3M Code (PTCNC41C)
PATCN154  DIM       1     * Using 4.1 Grouper   (PTCNU42G)
PATCN155  DIM       3     * 4.1 Grouper 3M Code (PTCNC42C)
PATCN156  DIM       1     * Using 4.1 Grouper   (PTCNU50G)
PATCN157  DIM       3     * 4.1 Grouper 3M Code (PTCNC50C)
PATCN158  DIM       1     * Using 5.1 Grouper   (PTCNU51G)
PATCN159  DIM       3     * 5.1 Grouper 3M Code (PTCNC51C)
PATCN160  DIM       1     * Using 5.2 Grouper   (PTCNU52G)
PATCN161  DIM       3     * 5.2 Grouper 3M Code (PTCNC52C)
PATCN162  DIM       8     * ICD10 Ed.1 Go-live  (PTCNI10D)
PATCN163  DIM       8     * ICD10 Ed.2 Go-live  (PTCNGDV2)
PATCN164  DIM       8     * ICD10 Ed.3 Go-live  (PTCNGDV3)
PATCN165  DIM       8     * ICD10 Ed.4 Go-live  (PTCNGDV4)
PATCN166  DIM       8     * ICD10 Ed.5 Go-live  (PTCNGDV5)
PATCN167  DIM       8     * ICD10 Ed.6 Go-live  (PTCNGDV6)
PATCN168  DIM       3     * Default Grouper Version (PTCNDGPV)
PATCN169  DIM       5     * Day Oncology view max no of patients (PTCNDONP)
PATCN170  DIM       1     * Update booking/preadmit details
PATCN171  DIM       8     * Result Sending Application
PATCN172  DIM       8     * Result Sending Facility
PATCN173  DIM       8     * Result Receiving Application
PATCN174  DIM       8     * Result Receiving Facility
PATCN175  DIM      12     * Result Next Message ID Counter
PATCN176  DIM       6     * Result HL7 Version
PATCN177  DIM       2     * GST Journal code for SX split GST
PATCN178  DIM       1     * Using Both Admission & Post Op Beds on Bed Board
PATCN179  DIM       1     * Capture HouseKeeping on Transfer
PATCN180  DIM       1     * Capture HouseKeeping on Discharge
PATCN181  DIM       1     * Transmit Palliative Care for Priv.Hosp.PRS2 Trailer
PATCN182  DIM       1     * Send location status in HL7 PV1-003
PATCN183  DIM       3     * Refresh Bed Board Minutes
PATCN184  DIM       8     * Current Location Identifier
PATCN185  DIM      60     * Eclipse Extract Outbound Path Parameter
PATCN186  DIM       1     * Using Eclipse for DVA claims (1=Yes/0=No)
PATCN187  DIM       1     * Using Test or Production for DVA claims
PATCN188  DIM       2     * First Escalation Days for No remittance
PATCN189  DIM      80     * First Escalation Email for No remittance
PATCN190  DIM       2     * Second Escalation Days for No remittance
PATCN191  DIM      80     * Second Escalation Email for No remittance
PATCN192  DIM       2     * Third Escalation Days for No remittance
PATCN193  DIM      80     * Third Escalation Email for No remittance
PATCN194  DIM       3     * Days before closing claims with outstanding
.                           processing reports
PATCN195  DIM      60     * Eclipse Extract Sent Path Parameter
PATCN196  DIM      80     * Sender Contact Email
PATCN197  DIM      40     * Sender Contact Person Name
PATCN198  DIM      20     * Sender Contact Person Phone
PATCN199  DIM       1     * Category for SOR Transport - 0=SG 1=S
PATCN200  DIM      60     * Eclipse OEC Outbound Path Parameter
PATCN201  DIM      60     * Eclipse OEC Sent Path Parameter
PATCN202  DIM      12     * Eclipse OEC Filename Parameter
PATCN203  DIM       1     * Select Deposits to Apply to Patient Only Invoice
PATCN204  DIM       1     * Prompt for ICD10 Suggested Classification
PATCN205  DIM       3     * G/L Interface Prefix
.
PATCN206  DIM       8     * Eclipse OEC Batch Date Parameter
PATCN207  DIM       4     * Eclipse OEC Batch Count Parameter
PATCN208  DIM       1     * Use Second Given Name
PATCN209  DIM       1     * Using GP Access
PATCN210  DIM       20    * TAC allocated Provider Number
PATCN211  DIM       1     * Recalculate zero amount of Misc.items
PATCN212  DIM       2     * Child/Adult Age Cut Off
PATCN213  DIM       1     * Using 6.0 Grouper   (PTCNU60G
PATCN214  DIM       3     * 6.0 Grouper 3M Code (PTCNC60C)
PATCN215  DIM       8     * TAC Transmitter No.
PATCN216  DIM       8     * TAC Payee No. (default "10049990")
PATCN217  DIM       1     * Print ICD10 on WC and TAC Invoice
PATCN218  DIM       1     * New Discharge Summary Layout
PATCN219  DIM       1     * Aged trial balance layout
PATCN220  DIM       1     * Display Event Level CDM Icons
PATCN221  DIM       1     * Result Display Year
PATCN222  DIM       3     * Alternate Address Category Code (Cat tc)
PATCN223  DIM      60     * Eclipse SA Console URL
PATCN224  DIM       1     * Use Debtor Follow-up
PATCN225  DIM       1     * Use Prov.Casemix code for Reports(PMS82,PMS83,BIL83)
PATCN226  DIM       3     * TAC Claim code to incl.Leave days in stepdown count
PATCN227  DIM       8     * ICD10 Ed.7 Go-live date (PTCNGDV7)        *I-219246
PATCN228  DIM      60     * PaTTY Pharmacy Interface Path PTCNPATY    *I-219039
PATCN229  DIM       1     * Using VIADUCT ? (Y/N)                     *I-222404
PATCN230  DIM      10     * Next Pregnancy Unique Id
PATCN231  DIM       1     * Default Admission Time and Discharge Time to Day
.                           Oncology Usage 0=No 1=Yes
PATCN232  DIM      60     * Eclipse IMC Outbound Path Parameter
PATCN233  DIM      60     * Eclipse IMC Sent Path Parameter
PATCN234  DIM       1     * Using Test or Production for IMC claims
PATCN235  DIM      60     * Eclipse OPV Outbound Path Parameter
PATCN236  DIM      60     * Eclipse OPV Sent Path Parameter
PATCN237  DIM       1     * Using Test or Production for OPV
PATCN238  DIM       1     * Using Ward Provider Number (0=No/1=Yes)
PATCN239  DIM       1     * Hospital Type 0=Private 1=Public
PATCN240  DIM       1     * Prevent Receipt of Debt Collection Visits
PATCN241  DIM       1     * Discharge Summary after Coding(0=No/1=Yes)
PATCN242  DIM      30     * Hospital Address 1
PATCN243  DIM      30     * Hospital Address 2
PATCN244  DIM       4     * Hospital Post Code
PATCN245  DIM      30     * Hospital Address 1
PATCN246  DIM      30     * Hospital Postal Address 2
PATCN247  DIM       4     * Hospital Postal Post Code
PATCN248  DIM      12     * Hospital Phone
PATCN249  DIM      12     * Hospital Fax
PATCN250  DIM       2     * No of lines on Invoice body
PATCN251  DIM       8     * Next bulk journal batch number
PATCN252  DIM       8     * Next bulk misc charge batch number
PATCN253  DIM       1     * Sending linked practice details in PV1-08
PATCN254  DIM       1     * Dont allow invoice until discharge
PATCN255  DIM       1     * Dont allow invoice until Primary/Performed/Duration
PATCN256  DIM       1     * Hold invoice until Prosthetics complete
PATCN257  DIM       1     * Enterprise Master Patient Index
PATCN258  DIM       1     * CYTPEUR - UR Generation Format
PATCN259  DIM       1     * Using Mutliple Financial Elections
PATCN260  DIM       3     * Not used
PATCN261  DIM       1     * Using new contacts (pmscexaf)
PATCN262  DIM       1     * Alternate ID without leading character
PATCN263  DIM       1     * HL7 sending NOK from pmscexaf
PATCN264  DIM       1     * Using Extra Compensable table
PATCN265  DIM       1     * Using Divisions?
PATCN266  DIM       2     * Search record count for PATWEB90 (PTCNSRCT)
PATCN267  DIM       1     * Using Disaster Patient Detail
PATCN268  DIM       1     * GST breakdown on FI report
PATCN269  DIM       1     * Using Hospital security on visits
PATCN270  DIM       1     * HL7 sending short ward/bed description
PATCN271  DIM       1     * EMR Revenue breakdown on G/L extract
PATCN272  DIM       1     * Category to use for Disiblity Alert
PATCN273  DIM       9     * Default ICD Code for organ procurement
PATCN274  DIM       1     * Print/Include NZ Private Procedure Code in Inv.body
PATCN275  DIM       1     * Print/Include Full Item Desc. in Invoice body
PATCN276  DIM       1     * Using New Contacts Audit File (pmsaudce)
PATCN277  DIM      10     * New contacts webPAS unique id (pmscexaf)
PATCN278  DIM       1     * HL7 ignore delete segment for NK1/ZAL segments
PATCN279  DIM       1     * HL7 using ED Discharge Doctor (emviur02)
PATCN280  DIM      60     * Path for MediBank Extracts (Mi Health) (ptcnpmpl)
PATCN281  DIM       1     * Rep A08 with A38/A05 resched O/P Appntmnts (ptcnh7ra)
PATCN282  DIM       1     * Warn in No FIM details (ptcnwfim)
PATCN283  DIM       1     * Auto set Program in Progress Adm/Dis (ptcnprip)
PATCN284  DIM       1     * Using 6.2 Grouper   (PTCNU62G)            *I-267797
PATCN285  DIM       3     * 6.2 Grouper 3M Code (PTCNC62C)            *I-267797
PATCN286  DIM       1     * Allow multiple current emr in merge (ptcnmemr)
PATCN287  DIM       4     * Hospital BPAY Identifier (1-4) digits
PATCN288  DIM       1     * Send extra diet codes in ZXV-31 (ptcnh7ed)
PATCN289  DIM       1     * Group Pharmacy items on Discharge Billing statement
PATCN290  DIM       1     * Send visit based messages when PMI Local GP changes
PATCN291  DIM       1     * Send ZSD segment with PMI based messages
PATCN292  DIM       1     * Use UR as BPAY Invoice Number
PATCN293  DIM      60     * Destination path for EDI messages
PATCN294  DIM       1     * Interface to Episoft
PATCN295  DIM       8     * ICD10 Ed.8 Go-live date (PTCNGDV8)        *I-284669
PATCN296  DIM       3     * 7.0 Grouper 3M Code (PTCNC70C)            *I-284669
PATCN297  DIM       8     * Effective Date for DRG 4.1                *I-284669
PATCN298  DIM       8     * Effective Date for DRG 4.2                *I-284669
PATCN299  DIM       8     * Effective Date for DRG 5.0                *I-284669
PATCN300  DIM       8     * Effective Date for DRG 5.1                *I-284669
PATCN301  DIM       8     * Effective Date for DRG 5.2                *I-284669
PATCN302  DIM       8     * Effective Date for DRG 6.0                *I-284669
PATCN303  DIM       8     * Effective Date for DRG 6.2                *I-284669
PATCN304  DIM       8     * Effective Date for DRG 7.0                *I-284669
PATCN305  DIM       1     * Using Previous Hospitalisation Detail File
PATCN306  DIM       1     * Using Gap/Other Services on Fees Estimate
PATCN307  DIM      10     * Next Admission Request Number
PATCN308  DIM       8     
PATCN309  DIM       1      
PATCN310  DIM      35
PATCN311  DIM       8
PATCN312  DIM       1
PATCN313  DIM      50
PATCN314  FORM      7
PATCN315  DIM       1
PATCN316  FORM      6
PATCN317  DIM      35
PATCN318  DIM       1
PATCN319  FORM      5
PATCN320  DIM       1     * Set HL7 messgs with "T-" URs to rejected
PATCN321  DIM       5     * Underweight BMI (Pink)
PATCN322  DIM       5     * Health Range From (Black)
PATCN323  DIM       5     * Health Range To (Black)
PATCN324  DIM       5     * Overweight (Red)
PATCN325  DIM       5     * Obese (Red)
PATCN326  DIM       1     * Display Visit Dates in header
PATCN327  DIM       1     * Using NEHTA Identifiers
PATCN328  DIM       1     * Display Food Allergy on Hospital Ward List
PATCN329  DIM       1     * Include Days of Hosp. in 3B Certificate (0,1,2)
PATCN330  DIM      60     * Eclipse OVV Outbound Path Parameter 
PATCN331  DIM      60     * Eclipse OVV Sent Path Parameter
PATCN332  DIM       1     * Using Test or Production for OVV
PATCN333  DIM       1     * Using 2012 Eclipse Update
PATCN334  DIM       1     * Informed Financial Consent form layout
PATCN335  DIM       5     * Next NMDS Extract Batch Number
PATCN336  DIM       5     * Next NBRS Extract Batch Number
PATCN337  DIM       1     * Using User Defined Field 1
PATCN338  DIM       1     * Using User Defined Field 2
PATCN339  DIM       1     * Using User Defined Field 3
PATCN340  DIM       1     * Using User Defined Field 4
PATCN341  DIM       1     * Using User Defined Field 5
PATCN342  DIM       1     * User Defined Field 1 mandatory
PATCN343  DIM       1     * User Defined Field 2 mandatory
PATCN344  DIM       1     * User Defined Field 3 mandatory
PATCN345  DIM       1     * User Defined Field 4 mandatory
PATCN346  DIM       1     * User Defined Field 5 mandatory
PATCN347  DIM       8     * Eclipse OPV Batch Date  
PATCN348  DIM       4     * Eclipse OPV Batch Count 
PATCN349  DIM       8     * Eclipse OVV Batch Date  
PATCN350  DIM       4     * Eclipse OVV Batch Count 
PATCN351  DIM       1     * Hospital state for HDP extracts
PATCN352  DIM       6     * Hospital File Number
PATCN353  DIM       1     * Default Ward to Admitting Ward
PATCN354  DIM       1     * PAS-HL7 Send A08 instead of A31 (0=No/1=Yes)
PATCN355  DIM       1     * HSS Extract Method
PATCN356  DIM       8     * ICD10 Ed.9 Go-live date (PTCNGDV9)        *I-311669
PATCN357  DIM       1     * Display Leave type in header
PATCN358  DIM       1     * Update Doctor Load eAccreditation (0=No/1=Yes)
PATCN359  DIM      60     * PCEHR URL
PATCN360  DIM       1     * Use MOD10V05 for BPAY check digit (0=No/1=Yes)
PATCN361  DIM       1  * NZ - Blank existing Pre-Admit Date/Time on Admit tmplts
PATCN362  DIM       1     * NZ - Restrict Editing of Residency Details
PATCN363  DIM       8     * Effective Date for DRG 8.0
PATCN364  DIM       3     * Grouper V8.0 code for 3M
PATCN365  DIM       6     * Inpatient Discharge Fax Functionality Template
PATCN366  DIM       1     * Warning and redirect to coding screen
.                           on undischarge
PATCN367  DIM       1     * Display OP chart only on current patatient search
PATCN368  DIM       1     * Using Type of Meal for Diet Template (0=No/1=Yes)
PATCN369  DIM       1     * Using External Supplements for Diet Template (1=yes)
PATCN370  DIM       1     * Using SMS Notifications
PATCN371  DIM       1     * Sending gender for HL7 messages as stored
.                           (0 = No, 1 = Yes)
PATCN372  DIM       3     * Claim code for Commonwealth Default Rate (Cat CL)
PATCN373  DIM       50    * NMDS Extracts Directory
PATCN374  DIM       50    * NBRS Extracts Directory
PATCN375  DIM       1     * Title (PID.5.5) non-mandatory for Inbound PMI
.                           Messages
.                           (0 = No, 1 = Yes)
PATCN376  DIM       1     * Sending MHSW Identifier in PID.3
.                           (0 = No, 1 = Yes)
PATCN377  DIM       1     * Receive A03 Message
.                           (0 = No, 1 = Yes)
PATCN378  DIM       1     * Receive A04 Message
.                           (0 = No, 1 = Yes)
PATCN379  DIM       1     * Receive A05 Message
.                           (0 = No, 1 = Yes)
PATCN380  DIM       1     * Receive A28 Message
.                           (0 = No, 1 = Yes)
PATCN381  DIM       1     * Receive A31 Message
.                           (0 = No, 1 = Yes)
PATCN382  DIM       1     * Receive A34 Message
.                           (0 = No, 1 = Yes)
PATCN383  DIM       1     * Receive I12 Message
.                           (0 = No, 1 = Yes)
PATCN384  DIM       1     * Receive I13 Message
.                           (0 = No, 1 = Yes)
PATCN385  DIM       1     * Receive I14 Message
.                           (0 = No, 1 = Yes)
PATCN386  DIM       1     * Receive M02 Message
.                           (0 = No, 1 = Yes)
PATCN387  DIM       1     * Receive P03 Message
.                           (0 = No, 1 = Yes)
PATCN388  DIM       4     * Check for SMS notification responses every X min
PATCN389  DIM       6     * SMS Printer ID
PATCN390  DIM       1     * Receive A19 Message
.                            0 = No
.                            1 = Yes - Latest INP visit
.                            2 = Yes - Latest INP, EMR or OUT visit
PATCN391  DIM       1     * Using Eclipse IMC Module
.                           (0 = No, 1 = Yes)
PATCN392  DIM       8     * Eclipse IMC Batch Number
PATCN393  DIM       1     * Use MV details to collect non ICU MV for HCP
.                           (0 = No, 1 = Yes)
PATCN394  DIM       1     * Enable DRG Effective Dates Functionality within webPAS
.                           (0 = No, 1 = Yes)
PATCN395  DIM       9     * Medical Records Alert Description
PATCN396  DIM       1     * Default Inform GP on Admission templates
PATCN397  DIM       1     * Use Eligibility Misc.Amount on Disc.Billing
PATCN398  DIM       1     * Use Health Fund Step Down on Bed Board
PATCN399  DIM       8     * Eclipse IMC Billing Agent ID
PATCN400  DIM       6     * Added PATCN400 - User Defined Stationery Code for 
.                           MR10's
PATCN401  DIM       1     * Hide patient admission button
PATCN402  DIM       1     * eAccreditation Format
.                            0 = Standard (Cabrini)
.                            1 = Extended (SJGHC)
PATCN403  DIM       1     * PTCNEIAS - UDF for Adm SOurce
PATCN404  DIM       1     * PTCNEIOC - UDF for Occupation
PATCN405  DIM       3     * PTCNDLKR - Default Link Reason
PATCN406  DIM       1     * PTCNGEST - UDF for Gestation Period
PATCN407  DIM       1     * PTCNACCF - UDF for Epis of Care ACC
PATCN408  DIM       3     * PTCNHADF - Default Health Agency Code
PATCN409  DIM       1     * PTCNACCD - ACC No and W/R for NMDS (INFOS)
PATCN410  DIM       1     * PTCNDRSM - Variable used for Separation Mode
PATCN411  DIM       1     * PTCNDTRF - Variable used for Hospital Transfer
PATCN412  DIM       3     * PTCNHPCD - Default Health Purchaser Code
PATCN413  DIM       1     * Service Category for PHISCo
.                            0 = Category A        
.                            1 = Category CC      
PATCN414  DIM       8     * ICD10 Ed.10 Go-live date (PTCNGDVX)      *I-0833093
PATCN415  DIM       1     * Default Expected LOS base on
PATCN416  DIM       8     * Start Date Of Current HCS Run
PATCN417  DIM       8     * End Date Of Current HCS Run
PATCN418  DIM       1     * Errors In HCS Data Run
PATCN419  DIM       1     * PTCNBREQ - Not Showing Bed Requests in Ward/Bed
.                           Search
.                            0 or bkank = No
.                            1 = Yes
PATCN420  DIM       1     * PTCNH7LN - Indicator to Use Security Login Name
PATCN421  DIM       1     * Using web user id for application authentication
.
PATCN424  DIM       1     * PTCNDWDC - Display Ward Diet/Diet Comment
PATCN425  DIM       1     * PTCNSLIN - Stationery Labels indicator 
PATCN426  DIM       6     * PTCNSLTM - Default Station Labels Template
PATCN427  DIM       1     * PTCNH7IL - Include line break (HL7 Comments ZXV.13)
PATCN428  DIM       1     * PTCNHCPI - Display HCP Type/Specialty/Role on HCP Searches
PATCN429  DIM       1     * Update PMI HF if differs from Visit
PATCN430  DIM       1     * Update Un-Inv.Disch.HF if updated on PMI
PATCN431  DIM       1     * PTCNRS14 - Receive S14(Theatre Time Details) Message
.                           (0 = No, 1 = Yes)
PATCN432  DIM       1     * PTCNMTID - Batch Eclipse Multiple Transaction IDs
PATCN433  DIM       1     * PTCNSZLS - Send ZLS segment in HL7 broadcasts
PATCN434  DIM      50     * PTCNGAPI - Google Maps API Key
PATCN435  DIM       2     * PTCNOECM - Mins between OEC Received Reports check
PATCN436  DIM       1     * PTCNDIGN - Use EMR Diagnosis HDP Code & Coding System for ACC45 XML
PATCN437  DIM       1     * PTCNSDRG - Send DRG segment in HL7 broadcasts
PATCN438  DIM       5     * PTCNTIMC - Time to run current patient update
PATCN439  DIM       8     * PTCNLDAT - Current Coding Complete Date
PATCN440  DIM       3     * PTCNDSID - ACC Default Diagnosis Value Set ID
.                                                              (pmsvstaf)
PATCN441  DIM       1     * PTCNIRAI - Display Invoice raised by
PATCN442  DIM       1     * PTCNACTP - ACC XML Treatement Provider Source
PATCN443  DIM       1     * PTCNDSAE - Do not generate AE for a failed HL7 P03
PATCN444  DIM       1     * PTCNEREF - Exclude Referrals from Results Linking
.                           (0 = No, 1 = Yes)
PATCN445  DIM       1     * PTCNASNM - Allow Surname Mismatch for A34 Message
PATCN446  DIM       1     * PTCNINTR - Using visit based interpreter required
PATCN447  DIM       1     * PTCNUNPC - Using Default Unknown Post Code for
.                                      Incoming Messages
PATCN448  DIM       4     * PTCNADDR - Postcode (value='9999')
PATCN449  DIM       45    * PTCNADDR - Suburb
PATCN450  DIM       3     * PTCNADDR - State
PATCN451  DIM      20     * HL7 Broadcast Service Name
PATCN452  DIM      20     * HL7 B'dcast Interface Socket Alias
PATCN453  DIM      20     * NSW Source System Indicator (EDWARD)
PATCN454  DIM      20     * NSW Issuing Authority Identifier (EDWARD - HERO)
PATCN455  DIM      20     * NSW EDWARD Campus Identifier
PATCN456  DIM       1     * Send Health Service details to EDWARD
PATCN457  DIM       1     * PTCNSZEC - Send ZEC segment in HL7 broadcasts
PATCN458  DIM       1     * PTCNRA08 - Receive A08(I/P Visit Update) Message
.                           (0 = No, 1 = Yes)
PATCN459  DIM       1     * PTCNRA21 - Receive A21(On-Leave) Message
.                           (0 = No, 1 = Yes)
PATCN460  DIM       1     * PTCNRA22 - Receive A22(Return From Leave) Message
.                           (0 = No, 1 = Yes)
PATCN461  DIM       8     * Effective Date for DRG 9.0
PATCN462  DIM       3     * Grouper V9.0 code for 3M
PATCN463  DIM       1     * PTCNUDF1 - Do not display PMVXUDF1 in Booking List
.                            1 = Do not Display
.                            0 or blank = Display
PATCN464  DIM       1     * PTCNDHCU - Display Duplicate Warning on UPDHCU
.                           (1= Display, 0 or blank = Do not Display)
PATCN465  DIM       1     * PTCNFIMW - Utilising Weighted FIMs for Program
.                           Details and Extracts (1 = Yes, 0 or blank = No) 
PATCN466  DIM       1     * PTCNBTRE - Collect a Transfer reason (Cat RB) on
.                           Ward/Bed Transfe (1 = Yes, 0 or blank = No) 
PATCN467  DIM       8     * PTCNBTOD - Overflow Description               
PATCN468  DIM       1     * PTCNQA28 - Using Quick Registration in A28
PATCN469  DIM       1     * PTCNTRRS - Reason for Transfer on Discharge
.                           0 or blank = No
.                           1 = Yes & Mandatory
.                           2 = Yes & Non Mandatory
PATCN470  DIM       1     * PTCNA08E - Receive A08 (EMR Visit Update) Message
PATCN471  DIM       1     * PTCNRJNL - Enable restricted journals on Invoice
PATCN472  DIM       1     * PTCNSZBR - Send ZBR segment in HL7 broadcasts
PATCN473  DIM       1     * PTCNSA11 - Send additional A11 on Claim Type
.                                      change from Public.
PATCN474  DIM       1     * PTCNSA01 - Send additional A01 on Claim Type
.                                      change to Public.
PATCN475  DIM       1     * PTCNQA31 - Using Quick Reg in A31 
PATCN476  DIM       1     * PTCNAVCD - Additional validation on Confirm Demo
.                                      on PMI Update 
PATCN477  DIM       1     * PTCNQP03 - Use of Quantity in P03 HL7 messages
PATCN478  DIM       1     * PTCNRP26 - Receive PID.26 in A28 and A31 messages
PATCN479  DIM       1     * PTCNUHDD - Use HDP Deflt on Cat D/Cat DD for PV1.36
PATCN480  DIM       1     * PTCNUESF - Using Eclipse Patient Store and Forward
PATCN481  DIM      20     * PTCNNEXT - EDWARD External Identifier             
PATCN482  DIM      20     * PTCNNCCP - EDWARD NBH Contracted Public Pat Service
PATCN483  DIM      10     * PTCNACTR - Default ACC Treatment Provider
PATCN484  DIM      60     * PTCNESFO - Eclipse STF Outbound Path
PATCN485  DIM      60     * PTCNESFI - Eclipse STF Sent Path
PATCN486  DIM       1     * PTCNUTPS - Using Test or Prod for Eclipse STF
PATCN487  DIM       1     * PTCNUEBB - Using Eclipse Bulk Billing
PATCN488  DIM      60     * PTCNEDBO - Eclipse DBS Outbound Path
PATCN489  DIM      60     * PTCNEDBI - Eclipse DBS Sent Path
PATCN490  DIM       1     * PTCNUTPB - Using Test or Prod for Eclipse DBS
PATCN491  DIM       5     * PTCNDBBN - Eclipse DBS PMSClaimID Batch Number
PATCN492  DIM       8     * PTCNDBBC - Eclipse DBS Batch Count
PATCN493  DIM       8     * PTCNPCBC - Eclipse PCS Batch Count
PATCN494  DIM       1     * PTCNBMYH - Send Blank value in ZXV.89 as Blank,0,1
PATCN495  DIM       1     * PTCNBAUD - Using Ward Bed Audit Functionality
PATCN496  DIM      80     * PTCNBEML - Email Address for Ward Bed Audit
PATCN497  DIM       1     * PTCNLPRA - Don't default linked practice
PATCN498  DIM       1     * PTCNMDG1 - Send HL7 DG1 seg for mental health diags
PATCN499  DIM       8     * Effective Date for DRG 10.0
PATCN500  DIM       3     * Grouper V10.0 code for 3M
PATCN501  DIM       8     * ICD10 Ed.11 Go-live date (PTCNGDX1)
PATCN502  DIM       1     * PTCNZNT4 - Send ZNT (note type 4) in HL7 broadcasts
PATCN503  DIM       1     * PTCNZNT5 - Send ZNT (note type 5) in HL7 broadcasts
PATCN504  DIM       1     * PTCNGNTR - Do not generate hospital calculated
.                                      statistics for the Trailer Records 
PATCN505  DIM       1     * PTCNUABF - Using Activity Based Funding
PATCN506  DIM       1     * PTCNCMSZ - Include F/L in Clin.Master Status for ZCM
PATCN507  DIM       1     * PTCNOCDZ - Use Outpatient Clinic Description for ZCM
PATCN508  DIM       1     * PTCNWLRS - Waiting List Referral Status for RF1 HL7
PATCN509  DIM      20     * PTCNNEBI - NSW EDWARD Health Service Building ID
PATCN510  DIM       1     * PTCNXXXX - Default 'Upload MyHR' on ADM/EMR screens
PATCN511  DIM       1     * PTCNSMSO - SMS Selection List Display Order
PATCN512  DIM       1     * PTCNROPD - Receive S02/S03/S04 HL7 messages
PATCN513  DIM       1     * PTCNPRVM - HCP Provider Number mandatory for
.                                      'Attending' providers
PATCN514  DIM       1     * PTCNUVSR - User Validation on Diagnostic Service
.                                      Requests.
PATCN515  DIM       1     * PTCNB31R - Broadcast HL7 A31 from HL7RECVR
PATCN516  DIM       3     * PTCNEVN4 - Code to populate ADT^A31 EVN.4 field
PATCN517  DIM       1     * PTCNUADV - Using Address Validation
PATCN518  DIM       1     * PTCNUP31 - Update PMI fields as A31 for Incoming A08
PATCN519  DIM       1     * PTCNSSMD - Send SMD from webPas                     
PATCN520  DIM       1     * PTCNSRAD - Generate and send REF^|12 with an   
.                                      attached document
PATCN521  DIM      80     * PTCNOHCS - Location of OHC-SM Server, IP or fixed 
.                                      address       
.
PATCN522  DIM      60     * PTCNWSDR - Medicare WebServices directory
PATCN523  DIM       1     * PTCNWSIN - Using Medicare WebServices
PATCN524  DIM       6     * PTCNRKDY - Number of Days before PRODA Key Expiry 
.                                      to Refresh Device Key
PATCN525  DIM       3     * PTCNTKMN - Number of minutes before each PRODA 
.                                      Token refresh
PATCN526  DIM       1     * PTCNOECT - Using OEC on Theatre Booking page?
.                                      1 = Yes
PATCN527  DIM       1     * PTCNOS12 - Receive S12 (Outpatients Booking)
PATCN528  DIM       1     * PTCNOS13 - Receive S13 (Outpatients Reschedule)
PATCN529  DIM       1     * PTCNOS14 - Receive S14 (Outpatients Update)
PATCN530  DIM       1     * PTCNOS15 - Receive S15 (Outpatients Cancellation)
PATCN531  DIM       1     * PTCNOS26 - Receive S26 (Outpatients Did Not Attend)
PATCN532  DIM       1     * PTCNIS12 - Receive S12 (Inpatients Pre-admission)
PATCN533  DIM       1     * PTCNIS14 - Receive S14 (Inpatients Update Pre-admn)
PATCN534  DIM       1     * PTCNIS15 - Receive S15 (Inpatients Cancel Pre-admn)
PATCN535  DIM       1     * PTCNRS25 - Receive SCH.25 for OP Booking Times
PATCN536  DIM       1     * PTCNDCSM - Default codes for Inbound SIU Messages
PATCN537  DIM       1     * PTCNGOSM - Generate outbound HL7 after inbound SIU
PATCN538  DIM       1     * PTCNAILP - Use AIL or AIP for Clinic ID in SIU OUT
PATCN539  DIM       1     * PTCNOECW - Switch on WebServices OECW functionality
PATCN540  DIM       1     * PTCNOECE - Switch off Eclipse OEC functionality
PATCN541  DIM       1     * PTCNRMDM - Receive MDM^T02 Messages (HL7 Inbound)
PATCN542  DIM       1     * PTCNBDEF - Billing Default file for Admissions   
PATCN543  DIM       1     * PTCNIMCW - Switch on WebServices IMCW functionality
PATCN544  DIM       6     * PTCNTZNW - WebServices Time Zones
PATCN545  DIM       1     * PTCNIHCW - Switch on WebServices IHCW functionality
PATCN546  DIM       1     * PTCNPPIN - Using new Patient Portion Invoice
PATCN547  DIM       1     * PTCNADEB - Automatic reassign debt for Patient Inv.
PATCN548  DIM       1     * Collect Extra Container Information for EDWARD
PATCN549  DIM       4     * Overdue leave register polling minutes
PATCN550  DIM       1     * PTCNPCIW - Switch on WebServices PCIW functionality
PATCN551  DIM       1     * PTCNACTM - ACC Transmission Method
PATCN552  DIM     100     * PTCNACAE - ACC API Endpoint (ACC45 Claim)
PATCN553  DIM       1     * PTCNCPRG - Create Program Referral from REF^I12
PATCN554  DIM       1     * PTCNSTYP - System Type
PATCN555  DIM       1     * PTCNBBSW - Switch on WebServices BBSW
PATCN556  DIM      50     * PTCNACAK - ACC API Key (ACC45 Claim)
PATCN557  DIM       6     * PTCNPCIP - PCIW Printer ID
PATCN558  DIM       1     * PTCNIMST - Multiple IMCW STSW switch
PATCN559  DIM       1     * PTCNIMRT - Multiple IMCW RTVW switch
PATCN560  DIM       1     * PTCNIHST - Multiple IHCW STSW switch
PATCN561  DIM       1     * PTCNIHRT - Multiple IHCW RTVW switch
PATCN562  DIM       1     * PTCNERRT - Multiple ERAW RTVW switch
PATCN563  DIM       1     * PTCNIMSD - Date Range IMCW STSW switch
PATCN564  DIM       1     * PTCNIHSD - Date Range IHCW STSW switch
PATCN565  DIM       1     * PTCNEXDD - Using Expected Discharge Date Change
.                         * reason
PATCN566  DIM       1     * Send Preferred Name/Name Type in HL7 PID.9
PATCN567  DIM       1     * Receive Name Type in HL7 PID.9
PATCN568  DIM       1     * PCTNNMPR - Display preferred name option
PATCN569  DIM       1     * PTCNEMPH - Display Email/Phone icon     
PATCN570  DIM       1     * PTCNUEVI - Use External Visit ID as Incoming PV1.19
PATCN571  DIM       1     * Using User Defined Field 1 (Admission file)
PATCN572  DIM       1     * User Defined Field 1 mandatory ? (Admission file)
PATCN573  DIM       1     * Using User Defined Field 2 (Admission file)
PATCN574  DIM       1     * User Defined Field 2 mandatory ? (Admission file)
PATCN575  DIM       1     * Using User Defined Field 3 (Admission file)
PATCN576  DIM       1     * User Defined Field 3 mandatory ? (Admission file)
PATCN577  DIM       1     * Using User Defined Field 4 (Admission file)
PATCN578  DIM       1     * User Defined Field 4 mandatory ? (Admission file)
PATCN579  DIM       1     * Using User Defined Field 5 (Admission file)
PATCN580  DIM       1     * User Defined Field 5 mandatory ? (Admission file)
PATCN581  DIM       1     * Using User Defined Field 6 (Admission file)
PATCN582  DIM       1     * User Defined Field 6 mandatory ? (Admission file)
PATCN583  DIM       1     * Using User Defined Field 7 (Admission file)
PATCN584  DIM       1     * User Defined Field 7 mandatory ? (Admission file)
PATCN585  DIM       1     * Site specific fields to be displayed for CAB
PATCN586  DIM       1     * Show External Visit ID in Patient Search,Banner and
.                         * Selected Visit Lists
PATCN587  DIM       8     * ICD10 Ed.12 Go-live date (PTCNGDX2)
PATCN588  DIM       8     * Effective Date for DRG 11.0
PATCN589  DIM       3     * Grouper V11.0 code for 3M
.
PATCN590  DIM       3     * Default Anaesthetic code for Day Procedure
PATCN591  DIM       3     * Auto Day case Band 1
PATCN592  DIM       3     * Auto Day case Band 2
PATCN593  DIM       3     * Auto Day case Band 3
PATCN594  DIM       3     * Auto Day case Band 4
PATCN595  DIM       1     * Doing auto stepdown 
PATCN596  DIM       1     * Doind Discount/Allow Stepdown
PATCN597  DIM       1     * Auto chnage to daycase
PATCN598  DIM       1     * Auto warning of Admission Type
PATCN599  DIM       1     * Recurring Care previous admission to use
PATCN600  DIM       2     * Number of Records to Display Per Page
PATCN601  DIM       1     * PTCNAPCP - Automate Webservices PCIW
PATCN602  DIM       1     * PTCNHFED - Enhanced Health Fund Field End Date
PATCN603  DIM       1     * PTCNLDII - Check Linked Doc for Emergency Invoice 
PATCN604  DIM       1     * PTCNLDEI - Check Linked Doc for Emergency Invoice 
PATCN605  DIM       1     * PTCNLDOI - Check Linked Doc for Outpatient Invoice 
PATCN606  DIM       1     * PTCNLDPI - Check Linked Doc for Pr Practice Invoice 
PATCN607  DIM       1     * PTCNFHIR - Using FHIR
PATCN608  DIM       1     * PTCNFHPA - Using FHIR Patient Inbound
PATCN609  DIM       1     * PTCNPCVA - Validation for Pension Card PID.3
PATCN610  DIM       1     * PTCNSAMT - Send A08 from IBABIL60:Amt to be Invoiced
PATCN611  DIM       3     * PTCNWDTH - Auto Cancel for WL on Death
PATCN612  DIM       3     * PTCNIDTH - Auto Cancel for pre-adm on Death 
PATCN613  DIM       3     * PTCNBDTH - Auto Cancel for booking on Death
PATCN614  DIM       3     * PTCNODTH - Auto Cancel for outpatient on Death
PATCN615  DIM       3     * PTCNTDTH - Auto Cancel for theatre Booking on Death
PATCN616  DIM       1     * PTCNSRFL - Send A08 after A22 (Return from leave)
PATCN617  DIM       1     * PTCNINVH - Send A08 after Invoice on Hold change
PATCN618  DIM       1     * PTCNIPHY - Patient Banner Current IP hyperlink 
PATCN619  DIM       1     * PTCNTOFB - Include Patient Time of Birth in PID.7
PATCN620  DIM       1     * PTCNCODC - Send A08 for CodingComplete status change
PATCN621  DIM       1     * HL7 Send A37 after U/R unmerge   (0=No/1=Yes)
PATCN622  DIM       1     *    (0=No/1=Yes)
PATCN623  DIM       1     *    (0=No/1=Yes)
PATCN624  DIM      11     * Hospital ABN Number
PATCN625  DIM      10     * Hospital Provider Approval Number
. 
IBACN001  DIM       1     * Multi hospital
IBACN002  DIM       1     * Using Medclaims (0=No/1=Yes)
IBACN003  DIM       1     * Using HL7 Messaging (0=No/1=Yes)
IBACN004  DIM      20     * HL7 Broadcast Service Name
IBACN005  DIM      20     * HL7 B'dcast Interface Socket Alias
IBACN006  FORM      2     * HL7 Retry Interval (secs)
IBACN007  FORM      3     * HL7 Number of Retries
IBACN008  FORM      2     * HL7 Response Timeout (secs)
IBACN009  DIM      20     * HL7 Solicited Socket Alias
IBACN010  DIM       5     * Health Service Identifier
IBACN011  DIM       3     * Health Care Establishment Number
IBACN012  DIM      20     * Query Solicited Socket Alias
IBACN013  DIM      20     * Results Socket Alias
IBACN014  DIM       1     * Message Header ID - Broadcast
IBACN015  DIM       1     * Message Header ID - Receiving
IBACN016  DIM      20     * Next HL7 Message Id 
.
ZERO4     INIT      "0000"
