.******************************************************************************
.*                                                                            *
.*     Include Name : PATCONFD.INC                                            *
.*                                                                            *
.*     Function     : File Definition include for Inpatient CONTROL File      *
.*                                                                            *
.*     File Type    : ASCII                                                   *
.*                                                                            *
.*     File Name    : controlf.txt                                            *
.*                                                                            *
.*     Mods.        :             look for (spare) or (moved) for free space  *
.*                                                                            *
.******************************************************************************
.*       V11.03.08  02/10/2023  Nikitha B        TSK 0927699                  *
.*                  Added a new Sector 130 - Patient Management               *
.*                  Added PTCNHABN - Hospital ABN                             *
.*       V11.03.07  04/09/2023  Peter Vela       TSK 0935874                  *
.*                  Added NIHC IHI Options to PTCNUNET                        *
.*                  12/09/2023  Thanh T          TSK 0914053                  *
.*                  Added PTCNVSRO - Visit Search redirect for Outp           *
.*                        PTCNVSRR - Visit Search redirect for Ref            *
.*       V11.03.06  30/08/2023  Nikitha B        TSK 0896442                  *
.*                  Added PTCNRA37 - Send A37 after U/R unmerge               *
.*       V11.03.05  20/07/2023  Davin            TSK 0930147                  *
.*                  Added PTCNCODC - Send A08 for CodingComplete status change*
.*       V11.03.04  15/06/2023  Nikitha B        TSK 0907196                  *
.*                  Added PTCNTOFB - Include Patient Time of Birth            *
.*       V11.03.03  07/03/2023  Bella Turco      TSK 0919538                  *
.*                  Added PTCNIPHY - Patient Banner Current IP hyperlink      *
.*       V11.03.02  19/01/2023  Davin            TSK 0922254                  *
.*                  Added PTCNINVH - Send A08 after Invoice on Hold change    *
.*       V11.03.01  06/01/2023  Davin            TSK 0916627                  *
.*                  Added PTCNSRFL - Send A08 after A22 (Return from leave)   *
.******************************************************************************
.*       V11.02.14  27/10/2022  Davin            TSK 0923862                  *
.*                  Added PTCNSAMT - Send A08 from IBABIL60:Amt to be Invoiced*
.*       V11.02.13  18/10/2022  Jacob Jackson    TSK 0867531                  *
.*                  Added PTCNPCVA - Validation for Pension Card PID.3        *
.*       V11.02.12  02/09/2022  Peter Vela       TSK 0923308                  *
.*                  Added PTCNFHPA - Using FHIR Patient Inbound               *
.*                  Added PTCNFHIR - Using FHIR                               *
.*                  28/09/2022  Davin            TSK 0919110                  *
.*                  Added option 2 to PTCNZNT4 and PTCNZNT5                   *
.*       V11.02.11  11/08/2022  Thanh T          TSK 0908346                  *
.*                  Added PTCNLDII - Check Linked Doc for Inpatient Invoice   *
.*                        PTCNLDEI - Check Linked Doc for Emergency Invoice   *
.*                        PTCNLDOI - Check Linked Doc for Outpatient Invoice  *
.*                        PTCNLDPI - Check Linked Doc for Pr Practice Invoice *
.*       V11.02.10  02/08/2022  Sunny     TSK 0814566                         *
.*                  Added PTCNHFED - Enhanced Health Fund Field End Date      *
.*       V11.02.09  28/07/2022  Peter Vela            0918312                 *
.*                  Added PTCNAPCP - Automate WebServices PCIW Pendable resub *
.*       V11.02.08  11/07/2022  Bella Turco       TSK 0921957                 *
.*                  Added PTCNNRTD - Number of Records to Display Per Page    *
.*       V11.02.07  24/05/2022   Thanh T          TSK 0893159                 *
.*                  Added PTCNRCAR - Recurring Care previous admission to use *
.*       V11.02.06  19/04/2022  Davin             TSK 0917793                 *
.*                  Added PTCNE110 and PTCN110C for DRG 11.0                  *
.*       V11.02.05  24/03/2022  Davin             TSK 0917793 ICD10v12        *
.*                  Added PTCNGDX2 ICD10 Ed.12 Go-live date (Sec.128 Pos.231) *
.*       V11.02.04  21/03/2022  Alina Bhari       TSK 0912792                 *
.*                  Added PTCNALTV - Show External Visit ID in                *
.*                  Patient Search,Banner and Selected Visit Lists            *
.*       V11.02.03  09/03/2022  Davin             TSK 0908733                 *
.*                  Modified PTCNADIG description and added options 4 and 5   *
.*       V11.02.02  07/02/2022  Davin             TSK 0885553                 *
.*                  Added option 2 to PTCNRA19                                *
.*       V11.02.01  03.02.2022  DA Sarkies        TSK 0903891                 *
.*                  Added PTCNSSPF - Site Specific field for hospitals        *
.******************************************************************************
.*       V11.01.19  17/01/2022  Davin             TSK 0910220                 *
.*                  Added PTCNUEVI - Use External Visit ID as Incoming PV1.19 *
.*       V11.01.18  17.01.2022  DA Sarkies        TSK 0845955                 *
.*                  Added PTCNEMPH - Display email/phone icon
.*       V11.01.17  12/01/2022  Jacob Jackson     TSK 0864505                 *
.*                  Added PTCNNMPR - Display preferred name option            *
.*       V11.01.16  22/11/2021  Davin             TSK 0864505                 *
.*                  Added PTCNSNTY - Send Name Type in HL7 PID.9              *
.*                  Added PTCNRNTY - Receive Name Type in HL7 PID.9           *
.*       V11.01.15  09/11/2021  Thanh T           TSK 0903848                 *
.*                  Added PTCNEXDD/PATCN565 Using Expected Discharge Date     *
.*                  Change Reason                                             *
.*       V11.01.14  05/10/2021  Peter Vela        TSK 0898361                 *
.*                  Added date range IMCW STSW                                *
.*                  Added date range IHCW STSW                                *
.*       V11.01.13  01/10/2021  Peter Vela        TSK 0898361                 *
.*                  Added multiple IMCW STSW switch                           *
.*                  Added multiple IMCW RTVW switch                           *
.*                  Added multiple IHCW STSW switch                           *
.*                  Added multiple IHCW RTVW switch                           *
.*                  Added multiple ERAW RTVW switch                           *
.*       V11.01.12  26/08/2021  Peter Vela        TSK 0910800                 *
.*                  Added PCIW printer                                        *
.*                  26/08/2021  Sunny             TSK 0893817                 *
.*                  Moved PTCNSTYP to Sector 128                              *
.*       V11.01.11  20/08/2021  J.Tan             TSK 0903454                 *
.*                  Added desc.for PTCNJFEE  Accumulation fees for journals   *
.*       V11.01.10  17/08/2021  Don Nguyen        TSK 0875549                 *
.*                  Added PTCNACAK - ACC API Key (ACC45 Claim)                *
.*       V11.01.09  21/07/2021  Peter Vela        TSK 0909175                 *
.*                  Added PTCNBBSW - Switch on WebServices BBSW               *
.*                  23/06/2021  Sunny             TSK 0893817                 *
.*                  Added PTCNSTYP - System Type for Letters                  *
.*       V11.01.08  11/06/2021  Davin             TSK 0900673                 *
.*                  Added PTCNCPRG - Create Program Referral from REF^I12     *
.*       V11.01.07  11/06/2021  Don Nguyen        TSK 0875549                 *
.*                  Added PTCNACTM - ACC Transmission Method                  *
.*                  Added PTCNACAE - ACC API Endpoint (ACC45 Claim)           *
.*       V11.01.06  21/05/2021  Peter Vela        TSK 0906538                 *
.*                  Added PTCNPCIW - Switch on WebServices PCIW functionality *
.*       V11.01.05  21/05/2021  Ebon Clements    TSK 0906162                  *
.*                  Added PTCNOLPM - Overdue leave register polling minutes   *
.*       V11.01.04  13/05/2021  Thanh T          TSK 0886023                  *
.*                  Added PTCNEXED/PATCN548 - Collect Extra Container         *
.*                  Information for EDWARD                                    *
.*       V11.01.03  03/03/2021  J.Tan             TSK 0863287                 *
.*                  Added PTCNPPIN - Using new Patient Portion Invoice        *
.*                  Added PTCNADEB - Automatic reassign debt for Patient Inv. *
.*       V11.01.01  22/02/2021  Peter Vela        TSK 0902857                 *
.*                  Added PTCNIHCW - Switch on WebServices IHCW functionality *
.*       V11.00.13  01/02/2021  Peter Vela        TSK 0898361                 *
.*                  Added PTCNWPKG - WebServices Participants                 *
.*                  Last Keyword generate date.                               *
.*       V11.00.12  04/01/2021  Peter Vela        TSK 0898361                 *
.*                  Added PTCNTZNW - WebServices Time Zones                   *
.*       V11.00.11  19/20/2020  Peter Vela        TSK 0898361                 *
.*                  Added PTCNIMCW - Switch on WebServices IMCW functionality *
.*                  13/10/2020  Tracey Nguyen     TSK 0888079                 *
.*                  Added PTCNBDEF/PATCN542 - Using Billing Defaults file     *
.*                  for Admissions                                            *
.*       V11.00.10  31/08/2020  Don Nguyen        TSK 0889111                 *
.*                  Added PTCNRMDM/PATCN541 - Receive MDM^T02 Messages        *
.*       V11.00.09  23/08/2020  Peter Vela        TSK 0895969                 *
.*                  Added PTCNOECW - Switch on WebServices OECW functionality *
.*                  Added PTCNOECE - Switch off Eclipse OEC functionality     *
.*       V11.00.08  21/08/2020  Davin             TSK 0890602                 *
.*                  Added PTCNOS12 to PTCNAILP - MOSAIQ inbound HL7 parameters*
.*       V11.00.07  28/07/2020  Peter Vela        TSK 0884414                 *
.*                  Added PTCNOECT - Using OEC on Theatre Booking page?       *
.*       V11.00.06  13/07/2020  Peter Vela        TSK 0892408                 *
.*                  Added PTCNRKDY - Number of Days before PRODA Key Expiry   *
.*                  to Refresh Device Key                                     *
.*                  Added PTCNTKMN - Number of minutes before each PRODA      *
.*                  Token refresh                                             *
.*       V11.00.05  24/06/2020  Peter Vela        TSK 0892408                 *
.*                  Added PTCNWSIN - Using Medicare WebServices               *
.*       V11.00.04  25/05/2020  Peter Vela        TSK 0892408                 *
.*                  Added the following fields in new sector 129              *
.*                  PTCNWSDR - Medicare WebServices directory                 * 
.*       V11.00.03  16/04/2020  Tracey Nguyen     TSK 0889111                 *
.*                  Added the following fields in sector 128                  *
.*                  1)PTCNSSMD/PATCN519 - Send SMD from webPas                *
.*                  2)PTCNSRAD/PATCN520 - Generate & Send REF^|12 with an     *
.*                    attached document                                       *
.*                  3)PTCNOHCS/PATCN521 - Location of OHC-SM Server, IP or    *
.*                    fixed address                                           *
.*       V11.00.02  07/04/2020  Davin             TSK 0887136                 *
.*                  Added PTCNUP31 - Update PMI fields as A31 for Incoming A08*
.*       V11.00.01  02/04/2020  Don Nguyen        TSK 0881876                 *
.*                  Added PTCNUADV (Sector 123) - Using Address Validation    *
.******************************************************************************
.*       V10.15.06  12/02/2020  Davin             TSK 0886572                 *
.*                  Added PTCNH7DA value 3                                    *
.*       V10.15.05  10/02/2020  J.Tan             TSK 0887341                 *
.*                  Added PTCNSIGL = 3                                        *
.*       V10.15.04  11/12/2019  Davin             TSK 0882837                 *
.*                  Added PTCNB31R - Broadcast HL7 A31 from HL7RECVR          *
.*                  Added PTCNEVN4 - Code to populate ADT^A31 EVN.4 field     *
.*       V10.15.03  26/11/2019  Don Nguyen        TSK 0880715                 *
.*                  Added PTCNUVSR (Sector 120) - User Validation on          *
.*                  Diagnostic Service Requests.                              *
.*       V10.15.02  01/11/2019  Thanh T           TSK 0879283                 *
.*                  Added PTCNPRVM - HCP Provider Number mandatory for        *
.*                  'Attending' providers                                     *
.*       V10.15.01  10/10/2019  Ebon Clements     TSK 0880973                 *
.*                  Added additional option descriptions to PTCNUBAP          *
.******************************************************************************
.*       V10.14.10  23/09/2019  Davin             TSK 0861257                 *
.*                  Added PTCNROPD - Receive S02/S03/S04 HL7 messages         *
.*       V10.14.09  19/09/2019  Ebon Clements     TSK 0871855                 *
.*                  Added PTCNSMSO - SMS selection list display order         *
.*       V10.14.08  22/07/2019  Davin             TSK 0876749                 *
.*                  Added PTCNDUMH - Default 'Upload MyHR' on ADM/EMR screens *
.*       V10.14.07  07/05/2019  Ebon Clements     TSK 0874051                 *
.*                  Added PTCNNEBI - NSW EDWARD Health Service Building ID    *
.*       V10.14.06  08/04/2019  Davin             TSK 0869574                 *
.*                  Added PTCNWLRS - Waiting List Referral Status for RF1 HL7 *
.*       V10.14.05  01/04/2019  Davin             TSK 0854837                 *
.*                  Added PTCNCMSZ - Include F/L in Clin.Master Status for ZCM*
.*                  Added PTCNOCDZ - Use Outpatient Clinic Description for ZCM*
.*       V10.14.04  26/03/2019  J.Tan             TSK 0857392                 *
.*                  Added PTCNUABF - Using Activity Based Funding             *
.*       V10.14.03  14/03/2019  Peter Vela        TSK 0868836                 *
.*                  Added PTCNGNTR - Do not generate hospital calculated      *
.*                  statistics for the Trailer Records                        *
.*       V10.14.02  14/03/2019  Don Nguyen        TSK 0869412                 *
.*                  Added PTCNGDX1 - ICD10 Edition 11 Go-live Date (Sec.117)  *
.*                  08/03/2019  Davin             TSK 0833548                 *
.*                  Added PTCNZNT4 - Send ZNT (note type 4) in HL7 broadcasts *
.*                  Added PTCNZNT5 - Send ZNT (note type 5) in HL7 broadcasts *
.*                  27/02/2019  Richa Phogat      TSK 0870439                 *
.*                  Added PTCNE100/PATCN499 and PTCN100C/PATCN500 for DRG 10.0*
.*                  27/02/2019  J.Tan             TSK 0870576                 *
.*                  Moved PTCNQUOT(Next quote number for fees est.)from sector*
.*                  105 pos 85 to sector 95 pos 153 as per Fees Estimate prog.*
.*       V10.14.01  21/02/2019  Davin             TSK 0866465                 *
.*                  Added PTCNMDG1 - Send DG1 segment for mental health diags *
.******************************************************************************
.*       V10.13.11  29/01/2019  Ebon Clements     TSK 0862494                 *
.*                  Added PTCNLPRA - Don't default linked practice            *
.*       V10.13.10  29/10/2018  J.Tan             TSK 0864701                 *
.*                  Added PTCNBAUD/PTCNBEML - Ward Bed Audit functionality    *
.*       V10.13.09  23/10/2018  Steve Armstrong   TSK 0863512                 *
.*                  Added PTCNBMYH.                                           *
.*       V10.13.08  16/10/2018  Steve Armstrong   TSK 0859743                 *
.*                  Added PTCNDBBN, PTCNDBBC and PTCNPCBC.                    *
.*       V10.13.07  21/09/2018  Tracey Nguyen     TSK 0859743                 *
.*                  Added PTCNUEBB/PATCN487 - Using Eclipse Bulk Billing      *
.*                  Added PTCNEDBO/PATCN488 - Eclipse DBS Outbound Path       *
.*                  Added PTCNEDBI/PATCN489 - Eclipse DBS Sent Path           *
.*                  Added PTCNUTPB/PATCN490 - Using Test/Prod for Eclipse DBS *
.*       V10.13.06  30/08/2018  Peter Vela         TSK 0859742                *
.*                  Added PTCNESFO - Eclipse STF Outbound Path                *
.*                  Added PTCNESFI - Eclipse STF Sent Path                    *
.*                  Added PTCNUTPS - Using Test or Production in STF          *
.*       V10.13.05  27/08/2018  Ebon Clements      TSK 0858988                *
.*                  Added PTCNACTR                                            *
.*       V10.13.04  20/08/2018  Jill Parkinson Task 0858752                   *
.*                  Added PTCNNEXT and PTCNNCPP                               *
.*       V10.13.03  15/08/2018  Ebon Clements     TSK 0859742                 *
.*                  Added PTCNUESF - Using Eclipse Patient Store and Forward  *
.*       V10.13.02  10/08/2018  Davin             TSK 0857732                 *
.*                  Added PTCNRP26 - Receive PID.26 in A28 and A31 messages   *
.*                  Added PTCNUHDD - Use HDP Deflt on Cat D/Cat DD for PV1.36 *
.*       V10.13.01  07/08/2018  Davin             TSK 0849641                 *
.*                  Added PTCNQP03 - Use of Quantity in P03 HL7 messages      *
.******************************************************************************
.*       V10.12.17  09/07/2018  Peter Vela        TSK 0845218                 *
.*                  Added PTCNAVCD                                            *
.*                  Added Additional validation on Confirm Demographics on PMI*
.*                  Update                                                    *
.*       V10.12.16  27/06/2018  Richa Phogat      TSK 0856874                 *
.*                  Added PTCNQA31 - Using Quick Reg in A31                   *
.*       V10.12.15  26/06/2018  Don Nguyen        TSK 0854115                 *
.*                  Added PTCNSA11/PTCNSA01; Send additional A11/A01 on       *
.*                  Claim Type change from/to Public.                         *
.*       V10.12.14  18/06/2018  Richa Phogat      TSK 0854259                 *
.*                  Added PTCNSZBR - Send ZBR segment in HL7 broadcasts       *
.*       V10.12.13  25/05/2018  J.Tan             TSK 0848921                 *
.*                  Added PTCNRJNL - Enable restricted Jounals on Invoice     *
.*       V10.12.12  17/05/2018  Davin             TSK 0851377                 *
.*                  Added PTCNA08E/PATCN470 - Receive A08 (EMR Visit Update)  *
.*       V10.12.11  15/05/2018  Thanh T.          TSK 0851528                 *
.*                  Added PTCNTRRS/PATCN469 - Reason for Transfer on          *
.*                  Discharge                                                 *
.*       V10.12.10  02/05/2018  Tracey Nguyen     TSK 0837181                 *
.*                  1)Added PTCNBTRE/PATCN466 - Collect a Transfer reason on  *
.*                    Ward/Bed Transfer                                       *
.*                  2)Added PTCNBTOD/PATCN467 - Overflow Description          *
.*                  03/05/2018  Davin             TSK 0854305                 *
.*                  Added option 2 to PTCNHL7L (HL7 segment logging)          *
.*                  07/05/2018  Davin             TSK 0848311                 *
.*                  Added PTCNQA28 - Using Quick Registration in A28          *
.*       V10.12.09  10/04/2018  Tracey Nguyen     TSK 0841644                 *
.*                  Added PTCNFIMW/PATCN465 - Use Weighted FIMs for Program   *
.*                  Details and Extracts                                      *
.*       V10.12.08  09/04/2018  Thanh T.          TSK 0848444                 *
.*                  Added PTCNDHCU - Display Duplicate Warning on UPDHCU      *
.*       V10.12.07  04/04/2018 Peter Vela         TSK 0853121                 *
.*                  Added PTCNUDF1 - Do not display PMVXUDF1 in               *
.*                  Booking List                                              *
.*       V10.12.06  20/03/2018  Tracey Nguyen     TSK 0852793                 *
.*                  Added PTCNED90/PATCN461 and PTCNC90C/PATCN462 for DRG 9.0 *
.*       V10.12.05  08/03/2018 Richa Phogat       TSK 0850854                 *
.*                  Added PTCNRA08/PATCN458 - Receive A08(I/P Visit Update)   *
.*                  Added PTCNRA21/PATCN459 - Receive A21(On-Leave) Message   *
.*                  Added PTCNRA22/PATCN460 - Receive A22(Return From Leave)  *
.*       V10.12.04  05.02.2018 B.G.Ackland        TSK 0837357                 *
.*                  Added PTCNSZEC - Send ZEC segment in HL7 broadcasts       *
.*       V10.12.03  23/01/2018  Richa Phogat      TSK 0846167                 *
.*                  Added PTCNNSSI/PATCN453, PTCNNIAI/PATCN454,               *
.*                  PTCNNECI/PATCN455, PTCNSHSD/PATCN456                      *
.*                  PTCNEPMI/CONFLD12, PTCNESBT/CONFLD13                      *
.*       V10.12.02  23/01/2018  Richa Phogat      TSK 0844685                 *
.*                  Added PTCNUPIS/PATCN451, PTCNUPIP/PATCN452                *
.*       V10.12.01  10/01/2018  Richa Phogat      TSK 0848310                 *
.*                  Added PTCNUNPC/PATCN447 - Using Default Unknown Post Code *
.*                  for Incoming Messages                                     *
.*                  Added PTCNADDR/PATCN448,PATCN449,PATCN450 - Postcode,     *
.*                  Suburb,State                                              *
.*                  11/01/2018  J.Tan             TSK 0848146                 *
.*                  Added 'Use Claim Type' to CACCFEE (Accumulation for FI)   *
.*       V10.11.14  19/12/2017  Ebon Clements     TSK 0843363                 *
.*                  Added PTCNINTR - Using visit based interpreter required   *
.*       V10.11.13  12/12/2017  Richa Phogat      TSK 0847828                 *
.*                  Added PTCNASNM/PATCN445 - Allow Surname Mismatch for A34  *
.*                  (Merge) Message                                           *
.*       V10.11.12  07/12/2017  Richa Phogat      TSK 0822683                 *
.*                  Added PTCNEREF/PATCN444 - Exclude Referrals from Results  *
.*                  Linking                                                   *
.*       V10.11.11  14/11/2017  Davin             TSK 0846231                 *
.*                  Added PTCNDSAE - Do not generate AE for a failed HL7 P03  *
.*       V10.11.10  25/10/2017  Peter Vela        TSK 0843396                 *
.*                  Added PTCNACTP - ACC XML Treatement Provider Source       *
.*       V10.11.09  02/10/2017  Richa Phogat      TSK 0816814                 *
.*                  Added PTCNDSID - ACC Default Diagnosis Value Set ID       *
.*                  11/11/2017  J.Tan             TSK 0839794                 *
.*                  Added PTCNIRAI - Display invoice raised by                *
.*       V10.11.08  14/09/2017  Davin             TSK 0840094                 *
.*                  Added PTCNSDRG - Send DRG segment in HL7 broadcasts       *
.*       V10.11.07  13/09/2017  Richa Phogat      TSK 0839897                 *
.*                  Added PTCNDIGN - Use EMR Diagnosis HDP Code & Coding      *
.*                  System for ACC45 XML                                      *
.*       V10.11.06  23/08/2017  Steve Armstrong                               *
.*                  Added PTCNH7DA value 2                                    *
.*       V10.11.05  02/08/2017  Tracey Nguyen     TSK 0299206                 *
.*                  Added PTCSXOFF/CONFLD11 - Do not show Soundex in HCP,     *
.*                  Practice and Doctor searches indicator                    *
.*                  02/08/2017  Ebon Clements     TSK 0841134                 *
.*                  Added PTCNOECM - Mins between OEC Received Reports check  *
.*       V10.11.04  02/08/2017  Richa Phogat      TSK 0837479                 *
.*                  Added PTCNRS14/PATCN431 - Receive S14 Message             *
.*       V10.11.03  02/08/2017  Ania P            TSK 0843179                 *
.*                  Added PTCNGAPI                                            *
.*       V10.11.02  20/07/2017  Davin             TSK 0838315                 *
.*                  Added PTCNSZLS - Send ZLS segment in HL7 broadcasts       *
.*       V10.11.01  11/07/2017  Peter Vela        TSK 0294177/0837619         *
.*                  Added PTCNMTID - Batch Eclipse Multiple Transaction IDs   *
.*       V10.10.12  14/06/2017  J.Tan             TSK 0820199                 *
.*                  Added PTCNPMHF - Update PMI HF if differs from Visit      *
.*                  Added PTCNVSHF - Update Un-Inv.Disch.HF if updated on PMI *
.*       V10.10.11  06/06/2017  Richa Phogat      TSK 0826255                 *
.*                  Added PTCNHCPI - Display HCP Type / Specialty / Role on   *
.*                  HCP Searches not in Ward/Bed Search                       *
.*       V10.10.10  02/06/2017  Davin             TSK 0819675                 *
.*                  Added PTCNH7IL - Include line break (HL7 Comments ZXV.13) *
.*       V10.10.09  31/05/2017  Thanh T.          TSK 0826408                 *
.*                  Removed PTCNENDP - eSAM Connection Endpoint (NZ)          *
.*                          PTCNMAXR - eSAM Max no. of recs to return (NZ)    *
.*       V10.10.08  23/05/2017  Peter Vela        TSK 832454                  *
.*                  Added PTCNSLIN - Stationery Labels indicator              *
.*                  Added PTCNSLTM - Default Station Labels Template          *
.*       V10.10.07  08/05/2017  Davin             TSK 0321570                 *
.*                  Added PTCNDWDC - Display Ward Diet/Diet Comment on        *
.*                                   pre-admission/admission templates        *
.*       V10.10.06  03/05/2017  Thanh T.          TSK 0826408                 *
.*                  Added PTCNENDP - eSAM Connection Endpoint (NZ)            *
.*                        PTCNMAXR - eSAM Maximum no. of recs to return (NZ)  *
.*       V10.10.05  02/05/2017  Ebon Clements     TSK 0832472                 *
.*                  Added PTCNSUID - Using web user id for application        *
.*                  authentication                                            *
.*       V10.10.04  19/04/2017  Steve Armstrong   TSK 0834336                 *
.*                  Added PTCNH7LN - Using Security Login Name for HL7 ZAL.12 *
.*                  21/04/2017  J.Tan             TSK 0315207                 *
.*                  Mod value of PTCNELOS - Default Expected LOS              *
.*       V10.10.03  07/04/2017  Richa Phogat      TSK 0834391                 *
.*                  Added PTCNBREQ - Check if Bed Requests is to display or   *
.*                  not in Ward/Bed Search                                    *
.*       V10.10.02  20/03/2017  Don Nguyen        TSK 0818645                 *
.*                  Added PTCNCALR - Check Alerts Last Run Date               *
.*                  16/03/2017  J.Tan             TSK 0315207                 *
.*                  Added PTCNELOS - Default Expected LOS based on            *
.*       V10.10.01  03/03/2017  Tracey Nguyen     TSK 0826808                 *
.*                  Added PTCNPHIS - Service Category for PHISCo              *
.*                  07/03/2017  Davin             TSK 0833093 ICD10v10        *
.*                  Added PTCNGDVX ICD10 Ed.10 Go-live date (Sec.110 Pos.85)  *
.*       V10.08.14  20/10/2016  Don Nguyen        TSK 0817948                 *
.*                  Added PTCNEACF - eAccreditation Format                    *
.*       V10.08.13  19/10/2016  Ania P            TSK 0808403                 *
.*                  Added PTCNHPAB - Hide patient admission button            *
.*       V10.08.12  03/10/2016  Peter Vela        TSK 0294177                 *
.*                  Added PTCNBAID - Eclipse IMC Billing Agent ID             *
.*                  29/09/2016  Don Nguyen        TSK 0816287                 *
.*                  Modified PTCNDIGP with new values as per V1.1 of spec     *
.*       V10.08.11  19/09/2016  Davin             TSK 0307316                 *
.*                  Changed description and added option 2 to PTCNOENC        *
.*       V10.08.10  19/09/2016  Peter Vela        TSK 0808920                 *
.*                  Added PTCNHFSD - Use Health Fund Step Down on Bed Board   *
.*       V10.08.09  13/09/2016  J.Tan             TSK 0298257                 *
.*                  Added PTCNEMDB - Use Eligibility Misc.on Disc.Billing     *
.*       V10.08.08  07/09/2016  Don Nguyen        TSK 0816287                 *
.*                  Added PTCNDIGP - Default Inform GP on Admission templates *
.*       V10.08.07  26/08/2016  Don Nguyen        TSK 0312570                 *
.*                  Added PTCNDGED  - Enable DRG Effective Dates Functionality*
.*       V10.08.06  30/06/2016  J.Tan             TSK 0819914                 *
.*                  Added PTCNMVHC  - Use MV details for Non ICU MV HCP       *
.*       V10.08.05  16/06/2016  Peter Vela        TSK 0294177                 *
.*                  Added PTCNIMBN  - Eclipse IMC Batch Number                *
.*       V10.08.04  30/05/2016  Peter Vela        TSK 0294177                 *
.*                  Added PTCNUIMC  - Using Eclipse IMC Module                *
.*       V10.08.03  22/04/2016  J.Tan             TSK 0313425                 *
.*                  Changed CATBLAY - Export only 90 to Export Only           *
.*       V10.08.02  05/04/2016  Nicole Torrisi    TSK 0814510                 *
.*                  Added Sector 123 -  PTCNRA19                              *
.*       V10.08.01  23/03/2016  J.Tan             TSK 0313425                 *
.*                  Mods to CATBLAY - Export only 90 and No Comments          *
.*       V10.07.10  04/03/2016  Ebon Clements     TSK 0294154                 *
.*                  Added PTCNSMSM - Poll for SMS responses every X minutes   *
.*                  Added PTCNSMSP - Poll for SMS responses every X minutes   *
.*       V10.07.09  29/02/2016  Nicole Torrisi    TSK 0814510                 *
.*                  Added Sector 123 -  PTCNRA03, PTCNRA04, PTCNRA05,         *
.*                  PTCNRA28, PTCNRA31, PTCNRA34, PTCNRI12, PTCNRI13,         *
.*                  PTCNRI14, PTCNRM02, PTCNRP03                              *
.*       V10.07.08  18/02/2016  Steve Armstrong   TSK 0809109 & 0809786       *
.*                  Added Sector 123 - PTCNTITL & PTCNMHSW                    *
.*       V10.07.07  16/02/2016  Don Nguyen        TSK 0303887                 *
.*                  Added Sector 124 - PTCNNMED & PTCNNBED                    *
.*       V10.07.06  15/02/2016  Don Nguyen        CAR 308621                  *
.*                  Moved PTCNIDFT to Sector 120                              *
.*       V10.07.05  04/01/2016  J.Tan             CAR 0313842                 *
.*                  Added new IFC PTCNIFCL for SJGHC                          *
.*                  Added PTCNCWCL - Claim code for Basic Cover Rate          *
.*       V10.07.04  29/12/2015  Steve Armstrong   CAR 0322741                 *
.*                  Added PTCNGNDR - Sending gender (in HL7 Messages) as      *
.*                  stored                                                    *
.*       V10.07.03  15/12/2015  Ebon Clements     CAR 294154                  *
.*                  Added PTCNSMSN - Using SMS Notifications                  *
.*       V10.07.02  17/11/2015  Davin             CAR 310749                  *
.*                  Added PTCNUTOM - Using Type of Meal for Diet template     *
.*                  Added PTCNUESD - Using External Supplements for Diet temp *
.*       V10.07.01  19/10/2015  Ebon Clements     CAR 295175                  *
.*                  Added PTCNCHRT  - Display OP chart only appointments on   * 
.*                  the current patient search                                * 
.******************************************************************************
.*       V10.06.11  17/08/2015  Peter Vela        CAR 302878                  *
.*                  Added PTCNWRUN - Warning and redirect on undischarge      * 
.*       V10.06.10  13/08/2015  Don Nguyen        CAR 308621                  *
.*                  Added PTCNIDFT - Inpatient Discharge Fax Func Template    *
.*       V10.06.09  01/06/2015  Ania P            CAR 313313                  *
.*                  Added PTCNRERD/PATCN362                                   *
.*       V10.06.08  28/05/2015  Ebon Clements     CAR 317094                  *
.*                  Added PTCNED80 and PTCNC80C for DRG 8.0                   *
.*       V10.06.07  21/05/2015  Patrick Adair     CAR 313318                  *
.*                  Added PTCNBEAD - NZ - Blank existing Pre-Admit Date/Time  *
.*       V10.06.06  15/05/2015   Davin            CAR 310155                  *
.*                  Added PTCNBPM5 - Use MOD10V05 for BPAY check digit        *
.*       V10.06.05  07/05/2015  Ania P            CAR 315212                  *
.*                  Added PTCNPCEH                                            *
.*       V10.06.04  05/05/2015  Don Nguyen        CAR 316237                  *
.*                  Moved PTCNREQN to pos 222 as it was read/written to that  *
.*                  pos in PATWEB15 instead of pos 122 (originally defined).  *
.*       V10.06.03  30/04/2015  Don Nguyen        CAR 307991                  *
.*                  Added PTCNUPEA - Update Doctor Load eAccreditation        *
.*       V10.06.02  12/03/2015  J.Tan             CAR 291492                  *
.*                  Added PTCNHLEA - Display Leave type in header             *
.*       V10.06.01  06/03/2015  Davin             CAR 311669  ICD10v9         *
.*                  Added PTCNGDV9 ICD10 Ed.9 Go-live date  (Sec.110 Pos.77)  *
.*       V10.05.05  30/12/2014  Davin             CAR 308386                  *
.*                  Added PTCNA31Y - PAS-HL7 Send A08 instead of A31          *
.*       V10.05.04  17/11/2014  Peter Vela        CAR 294157                  *
.*                  Added PTCNOPBD - Eclipse OPV Batch Date                   *
.*                  Added PTCNOPBC - Eclipse OPV Batch Count                  *
.*                  Added PTCNOVBD - Eclipse OVV Batch Date                   *
.*                  Added PTCNOVBC - Eclipse OVV Batch Count                  *
.*       V10.05.03  19/08/2014  Don Nguyen        CAR 303882                  *
.*                  Added PTCNMDSB - Next NMDS Extract Batch Number           *
.*                  Added PTCNBRSB - Next NBRS Extract Batch Number           *
.*       V10.05.02  17/07/2014  Steve Armstrong   CAR 294204                  *
.*                  Added label layout value "27" for CTYPLAB (SJOG Geelong)  *
.*       V10.05.01  30/07/2014  Davin             CAR 253233                  *
.*                  Added PTCNIFCL - IFC form layout (Sector 120/Field 160)   *
.******************************************************************************
.*       V10.04.03  17/07/2014  Steve Armstrong   CAR 294204                  *
.*                  Added value "27" for CTYPLAB (SJOG Geelong)               *
.*                  12/06/2014  Peter Vela        CAR 294157                  *
.*                  Added PTCNECUP - Using Eclipse 2012 update                *
.*                  Added PTCNOVVO - Eclipse OVV Outbound Path                *
.*                  Added PTCNOVVI - Eclipse OVV Sent Path                    *
.*                  Added PTCNOVTP - Test or Production OVV                   *
.*       V10.04.02  25/03/2014  Ebon Clements     CAR 297388                  *
.*                  Added PTCNDFAL - Display food allergy on ward list        *
.*       V10.04.01  30/01/2014  Don Nguyen        CAR 291879                  *
.*                  Added PTCNUNET - Using NEHTA Identifiers                  *
.*                  30/01/2014  Don Nguyen        CAR 295027                  *
.*                  Added PTCNHDVD - Display Visit Dates in header            *
.******************************************************************************
.*       V10.03.25  02/12/2013  Peter Vela        CAR 286158                  *
.*                  Added PTCNUNDW - Underweight BMI    (Pink)                *
.*                  Added PTCNHEFR - Healthy Range From (Black)               *
.*                  Added PTCNHETO - Healthy Range To   (Black)               *
.*                  Added PTCNOVRW - Overweight         (Red)                 *
.*                  Added PTCNOBES - Obese              (Red)                 *
.*       V10.03.24  15/11/2013  Davin             CAR 275205                  *
.*                  Added PTCNRTUR - Set HL7 messgs with "T-" URs to rejected *
.*       V10.03.23  29/08/2013  Ebon Clements     CAR 275205                  *
.*                  Added PTCNREQN - Next admission request number            *
.*       V10.03.22  13/08/2013  Davin             CAR 289278                  *
.*                  Added PTCNUOFE - Using Gap/Other Services on Fees Estimate*
.*       V10.03.21  06/08/2013  J.Tan             CAR 287534                  *
.*                  Changed description for PTCNXCOM                          *
.*       V10.03.20  05/08/2013  Ania P            CAR 288890                  *
.*                  Added PTCNUNDH (Sector 116)                               *
.*       V10.03.19  01/05/2013  Davin             CAR 284669  DRG 7.0         *
.*                  Added 8 grouper effective dates & V7.0 code for 3M        *
.*                  - PTCNED41/42/50/51/52/60/62/70     (Sec.119 Pos.183-246) *
.*                  - PTCNC70C                          (Sec.10  Pos.157)     *
.*       V10.03.18  23/04/2013  Davin             CAR 284420  HDP 2013/2014   *
.*                  Added PTCNGDV8 ICD10 Ed.8 Go-live date  (Sec.110 Pos.69)  *
.*       V10.03.17  17/04/2013  Don Nguyen        CAR 282342                  *
.*                  Corrected file pos for PTCNURBP                           *
.*       V10.03.16  05/04/2013  Davin             CAR 280425                  *
.*                  Added PTCNDEDI - Destination path for EDI messages        *
.*                  Added PTCNEPIS - Interface to Episoft                     *
.*       V10.03.15  26/03/2013  Don Nguyen        CAR 282342                  *
.*                  Added PTCNURBP - Use UR as BPAY Invoice Number            *
.*                  22/03/2013  Jill Parkinson    CAR 280425                  *
.*                  Added next eAdmission message ID                          *
.*                  22/03/2013  Davin             CAR 270648                  *
.*                  Added PTCNSZSD - Send ZSD segment with PMI based messages *
.*       V10.03.14  04/03/2013  Davin             CAR 268971                  *
.*                  Added PTCNH7VP - Send visit based messages for PMI changes*
.*       V10.03.13  10/01/2013  J.Tan          CAR 271122                     *
.*                  Added new option for CFINAN=3-same Opt.2 for Transfer only*
.*       V10.03.12  06/12/2012  J.Tan          CAR 237130                     *
.*                  Added PTCNGPHR - Group Pharmacy Items on Discharge Billing*
.*       V10.03.11  02/10/2012  Davin             CAR 265550                  *
.*                  Added PTCNH7ED - Send extra diet codes in ZXV-31          *
.*       V10.03.10  04/07/2012  Don Nguyen        CAR 264561                  *
.*                  Added PTCNHBPI                                            *
.*       V10.03.09  02/07/2012  Jill Parkinson    CAR 268273                  *
.*                  Added PTCNMEMR                                            *
.*       V10.03.08  25/06/2012  Mike Laming       CAR 267797 HDP 2012 DRG 6.2 *
.*                  Added PTCNU62G and PTCNC62C for DRG Ver 6.2 (Sect.10 152) *
.*       V10.03.07  28/03/2012  Patrick Adair     CAR 257776                  *
.*                  Added PTCNWFIM (ptcn282) - warn if no fim details         *
.*                  Added PTCNPRIP (ptcn283) - Program in progress            *
.*       V10.03.06  08/03/2012  Patrick Adair     CAR 260226                  *
.*                  Added PTCNH7RA - Replace A08 with A38/A05 for rescheduled *
.*                  O/P Appointments Messages                                 *
.*       V10.03.05  23/02/2012  Mike Laming       CAR 252065                  *
.*                  Added PTCNPMPL - Path for MediBank Extract data ("MPL")   *
.*       V10.03.04  13/02/2012  Mike Laming       CAR 259708                  *
.*                  Added PTCNEDDD - HL7 using ED Discharge Doctor (emviur02) *
.*       V10.03.03  16/01/2011  Ebon Clements     CAR 248529                  *
.*                  Fixed position description of PTCNH7ID                    *
.*       V10.03.02  07/12/2011  Ebon Clements     CAR 248529                  *
.*                  PTCNCONU - New contacts webPAS unique id                  *
.*                  PTCNH7ID - HL7 ignore delete segment for NK1/ZAL          *
.*       V10.03.01  07/11/2011  Ebon Clements     CAR 248529                  *
.*                  PTCNNWCA - Using New Contacts Audit File (pmsaudce)       *
.*                  28/10/2011  J.Tan             CAR 235425                  *
.*                  PTCNPPRC - Include NZ Private Procedure Code in Inv.body  *
.*                  PTCNPITM - Include Print Full Item Desc.in Invoice body   *
.******************************************************************************
.*       V10.02.20  17/10/2011  Jill Parkinson    CAR 251645                  *
.*                  Added PTCNICOP - Default code for organ procurement       *
.*       V10.02.19  30/09/2011  Saroeun Soeur     CAR 208854                  *
.*                  PTCNCUDA - Category to use forDisability Alert            *
.*       V10.02.18  10/09/2012  J.Tan             CAR 251460                  *
.*                  PTCNFEMR - EMR Revenue breakdown on G/L Extract           *
.*       V10.02.17  20/09/2011  Ebon Clements  CAR 248650                     *
.*                  PTCNH7WD - HL7 sending short ward/bed description         *
.*       V10.02.16  14/09/2011  Jill Parkinson CAR 248486                     *
.*                  PTCNUHSC - Using hospital security                        *
.*       V10.02.15  10/09/2011  J.Tan             CAR 249949                  *
.*                  PTCNFGST - GST breakdown on Fees Invoice report           *
.*       V10.02.14  05/08/2011  Peter Vela        CAR 239559                  *
.*                  PTCNDIAI not used anymore                                 *
.*       V10.02.13  26/07/2011  Peter Vela        CAR 239559                  *
.*                  Added PTCNUDPD - Using Disaster Patient Detail            *
.*       V10.02.12  17/07/2011  Steve Armstrong   CAR 246138                  *
.*                  Changed PTCNH7NK (HL7 sending NK1 from pmscexaf) to       *
.*                  PTCNH7AL (HL7 sending ZAL for alerts)                     *
.*       V10.02.11  14/07/2011  Peter McMullen    CAR 241813                  *
.*                  Added PTCNSRCT - Search record count for PATWEB90         *
.*       V10.02.10  12/07/2011  Davin             CAR 240723                  *
.*                  Added PTCNDIVN - Using Divisions (sec.116/posn.223)       *
.*       V10.02.09  01/07/2011  J.Tan             CAR 239592                  *
.*                  Added PTCNXCOM - Using Extra Compensable table            *
.*       V10.02.08  24/06/2011  Steve Armstrong   CAR 245199                  *
.*                  Added PTCNH7NK - HL7 sending NK1 from pmscexaf            *
.*       V10.02.07  14/06/2011  Peter Vela     CAR 240705                     *
.*                  Added PTCNUNBN - Unique Boarder Number                    *
.*       V10.02.06  06/06/2011  Jill Parkinson CAR                            *
.*                  Added PTCNAIWI - Alternate ID with leading character      *
.*       V10.02.05  02/06/2011  Jill Parkinson CAR 242419                     *
.*                  Added PTCNNEWC - Using new contacts (pmscexaf)            *
.*       V10.02.04  11/05/2011  Peter Vela     CAR 239585                     *
.*                  Added PTCNDIAI - Disaster Alternate ID                    *
.*       V10.02.03  05/05/2011  J.Tan          CAR 239593                     *
.*                  Added PTCNMFIN - Using Multiple Financial Elections       *
.*       V10.02.02  03/05/2011  Jill Parkinson CAR 240712                     *
.*                  Added PTCNRCBN - Next Recurring Care Batch Number         *
.*       V10.02.01  20/04/2011  Jill Parkinson CAR 240721                     *
.*                  Added PTCNEMPI - WA Enterprise Master Patient Index       *
.******************************************************************************
.*       V10.01.11  09/03/2011  Peter Vela    CAR 239463                      *
.*                  Added PTCNELGN - Next Eligibility Number                  *
.*                  09/03/2011  J.Tan         CAR 233267                      *
.*                  Mods CFINAN - display financial details for bed type only *
.*       V10.01.10  14/02/2011  Peter Vela     CAR 233034                     *
.*                  Added PTCNMFFL - Mapping file flag for Bed/Theatre Fee    *
.*       V10.01.09  27/01/2011  J.Tan          CAR 233205                     *
.*                  Added PTCNPROS                                            *
.*       V10.01.08  25/01/2011  Jill Parkinson CAR 222655                     *
.*                  Added PTCNDBIN and PTCNPPCD                               *
.*       V10.01.07  24/01/2011  J.Tan          CAR 233200                     *
.*                  Replaced PTCNHCPB with PTCNHCCC                           *
.*       V10.01.06  20/12/2010  Davin          CAR 230955                     *
.*                  Added PTCNSLPD - Sending linked practice details in PV1-08*
.*       V10.01.05  14/12/2010  Ebon Clements  CAR 233900                     *
.*                  Added PTCNNJBN - Next bulk journal batch number           *
.*                  Added PTCNNMBN - Next bulk misc charge batch number       *
.*       V10.01.04  22/09/2010  J.Tan          CAR 233043                     *
.*                  Added PTCNINVN - No of lines on Invoice body              *
.*       V10.01.03  18/11/2010  Jill Parkinson CAR 233199                     *
.*                  Added PTCNDSAC - Discharge Summary after Coding Complete  *
.*                  Added PTCNHFAX - Hospital Fax Number                      *
.*       V10.01.02  11/11/2010  Mike Laming    CAR 233237                     *
.*                  Added PTCNPRDC - Prevent Receipt of Debt Collection Visits*
.*       V10.01.01  04/11/2010  Jill Parkinson CAR 233008                     *
.*                  Removed use of PTCNUUNA - no longer required              *
.******************************************************************************
.*       V10.00.09  22/10/2010  Davin          CAR 231481                     *
.*                  Added PTCNUWPN - Using Ward Provider Number               *
.*       V10.00.08  22/09/2010  J.Tan          CAR 220664                     *
.*                  Added Invoice layout 27 for HEC                           *
.*       V10.00.07  06/09/2010  Davin          CAR 226974                     *
.*                  Added PTCNOPVO - Eclipse OPV Outbound Path                *
.*                  Added PTCNOPVI - Eclipse OPV Sent Path                    *
.*                  Added PTCNUTPO - Eclipse Using Test/Prod for OPV          *
.*       V10.00.06  02/09/2010  Davin          CAR 229654                     *
.*                  Added PTCNIMCO - Eclipse IMC Outbound Path                *
.*                  Added PTCNIMCI - Eclipse IMC Sent Path                    *
.*                  Added PTCNUTPM - Eclipse Using Test/Prod for IMC claims   *
.*       V10.00.05  23/06/2010  Peter Vela       CAR 216356                   *
.*                  Added parameter to default Admission time and Discharge   *
.*                  time to Day Oncology Usage                                *
.*       V10.00.04  16/10/2010  Jill Parkinson    CAR 222551                  *
.*                  Added PTCNPUNQ Pregnancy Unique ID                        *
.*       V10.00.03  21/05/2010  Mike Laming       CAR 222404                  *
.*                  Added PTCNVDUC ("Using VIADUCT Y/N") - (Sec.59 Pos.223)   *
.*       V10.00.02  13/04/2010  Mike Laming       CAR 219039                  *
.*                  Added Sector 118                                          *
.*                  Added PTCNPATY - PaTTYInt Pharmacy Interface Parameter    *
.*       V10.00.01  01/04/2010  Mike Laming       CAR 219246  HDP 2010        *
.*                  Added PTCNGDV7 ICD10 Ed.7 Go-live date  (Sec.110 Pos.61)  *
.******************************************************************************
.*        V9.12.13  10/03/2010  J.Tan            CAR 216044                   *
.*                  Added PTCNCLEV - Claim code to include Leave days in      *
.*                  Stepdown count                                            *
.*        V9.12.12  18/02/2010  Steve Armstrong  CAR 216549                   *
.*                  Mods to make start posn of CHTELEB 129 instead of 127 and *
.*                  removed CTRKPG (posn 139) & CTRKPRT (posn 140) as they    *
.*                  are no longer used.                                       *
.*        V9.12.11  21/12/2009  J.Tan            CAR 203578                   *
.*                  Added PTCNUCMX - Use Prov.Casemix code for reports        *
.*        V9.12.10  05/11/2009  J.Tan            CAR 174079                   *
.*                  Added Debtor Follow-up                                    *
.*        V9.12.09  15/10/2009  Mike Laming      CAR 207222                   *
.*                  Fix descriptions for CMORBDTM & PTMORBDT                  *
.*        V9.12.08  28/09/2009  Peter McMullen    CAR 206704                  *
.*                  PTCNECSA - Eclipse SA Console URL                         *
.*        V9.12.07  23/09/2009  Ebon Clements     CAR 202769                  *
.*                  PTCNAADR - Alternate Address Category Code (Cat tc)       *
.*        V9.12.06  01/09/2009  Saroeun Soeur     CAR 201216                  *
.*                  PTCNYRDF  sector 114 posn 248 -  Result Display Year      *
.*        V9.12.05  27/08/2009  Ebon Clements     CAR 202965                  *
.*                  Added PTCNDCDM - Display Event Level CDM Icons            *
.*        V9.12.04  12/08/2009  Davin             CAR 200023                  *
.*                  Moved CPASSWD from sector 10 to sector 114, posn 240      *
.*        V9.12.03  22/07/2009  WeeLee Koo        CAR 188324                  *
.*                  Added Hospital Controlled 2 parameter- PTCNDSCL           *
.*        V9.12.02  20/07/2009  J.Tan             CAR 199603                  *
.*                  Added PTCNPICD - Print ICD codes on WC and TAC invoice    *
.*        V9.12.01  19/06/2009  Mike Laming      CAR 195877                   *
.*                  Added PTCNTACT & PTCNTACE (Sect.114 Pos.222 +)            *
.*        ........  19/06/2009  Mike Laming      CAR 197814 HDP 2009 DRG 6.0  *
.*                  Added PTCNU60G and PTCNC60C for DRG Ver 6.0 (Sect.10 132) *
.*        V9.12.01  11/05/2009  J.Tan             CAR 125842                  *
.*                  Added PTCNCALM - Recalculate zero amount Misc.items       *
.******************************************************************************
.*        V9.11.18  21/04/2009  Jill Habasque CAR 145706                      *
.*                  Added PTCNUSGP - Using GP Access                          *
.*        V9.11.17  07/04/2009  S.Soeur     CAR 194079                        *
.*                  Added IBA controlled 1 parameter PTCNUSGN                 *
.*        V9.11.16  03/04/2009  J.Tan             CAR 192295                  *
.*                  Added CATBLAY =5 for Healthscope                          *
.*        V9.11.15  01/04/2009  S.Soeur           CAR 183976                  *
.*                  Added Eclipse Parameter  PTCNBCNT, PTCNBDAT               *
.*        V9.11.14  30/03/2009  J.Tan             CAR 190946                  *
.*                  Added PTCNGLPF - G/L Interface Prefix                     *
.*        V9.11.13  16/03/2009  J.Tan             CAR 188110                  *
.*                  Added PTCNICLS - Prompt for ICD10 Suggested Classification*
.*        V9.11.12  12/03/2009  J.Tan             CAR 188102                  *
.*                  Added PTCNADEP - Select Deposits to apply to Patient Inv. *
.*        V9.11.11  20/02/2009  Peter Vela        CAR 183976                  *
.*                  Added Sector 117                                          *
.*                  Added PTCNOECF - Eclipse OEC Filename Parameter           *
.*                  Added PTCNOECO - Eclipse OEC Outbound Parameter           *
.*                  Added PTCNOECI - Eclipse OEC Sent Parameter               *
.*        V9.11.10  10/02/2009  Jill Habasque     CAR 186302                  *
.*                  Added PTCNSORL - Category to use for SOR Location         *
.*        V9.11.09  02/02/2009  Peter Vela        CAR 183976                  *
.*                  Added Eclipce Parameter PTCNSCPN - Sender Name            *
.*                  Added Eclipse Parameter PTCNSCEM - Sender Email           *
.*                  Sdded Eclipse Parameter PTCNSCPP - Sender Phone           *
.*        V9.11.08  13/01/2009  Peter Vela        CAR 183976                  *
.*                  Added Eclipse parameter PTCNPRKG - Eclipse Participants   *
.*                  Last Keyword generate date.                               *
.*        V9.11.07  13/01/2009  Peter Vela        CAR 183976                  *
.*                  Added Eclipse parameter PTCNECLI - Eclipse Extract        *
.*                  Sent Path parameter                                       *
.*        V9.11.06  28/11/2008  Peter Vela        CAR 183976                  *
.*                  Added Eclipse parameter PTCNDCOP - Days before closing    *
.*                  claims with outstanding processing reports                *
.*        V9.11.05  19/11/2008  Peter Vela        CAR 183976                  *
.*                  Added Eclipse Parameters                                  *
.*        V9.11.04  21/10/2008  Ebon Clements     CAR 174077                  *
.*                  Added PTCNBEDR - Refresh bed board minutes                *
.*        V9.11.03  20/10/2008  Davin             CAR 175736                  *
.*                  Added PTCNH7LS - Send location status in HL7 PV1-003      *
.*        V9.11.02  10/10/2008  J.Tan            CAR 180656                   *
.*                  Added PTCNTPAL - Transmit Palliative care for PRS2        *
.*        V9.11.01  24/09/2008  Ebon Clements     CAR 174052 174055           *
.*                  Added PTCNBBAP - Using Both Admission & Post Op Beds      *
.*                  Added PTCNCHOT - Capture HouseKeeping on Transfer         *
.*                  Added PTCNCHOD - Capture HouseKeeping on Discharge        *
.******************************************************************************
.*        V9.10.05  18/09/2008  J.Tan             CAR 172904                  *
.*                  Added PTCNGJRN - GST Journal code for SX split GST        *
.*        V9.10.04  16/09/2008  J.Tan             CAR 170967                  *
.*                  Changed CACCFEE definition                                *
.*        V9.10.03  23/07/2008  Jill Habasque     CAR 174243                  *
.*                  Added PTCNRSAP, PTCNRRAP, PTCNRSFC, PTCNRRFC, PTCNRMIC    *
.*        V9.10.02  15/07/2008  Jill Habasque     CAR 164652                  *
.*                  Added PTCNUBAP - Update booking/preadmission details      *
.*        V9.10.01  20/05/2008  J.Tan             CAR 167702                  *
.*                  Added Cabrini invoice layout                              *
.******************************************************************************
.*        V9.09.18  03/04/2008  Peter Vela        CAR 163822                  *
.*                  Added PTCNDONP - Day Oncology view maximum number of      *
.*                  patients                                                  *
.*        V9.09.17  27/03/2008  Ebon Clements     CAR 160860                  *
.*                  Added PTCNH7DA - Use Sent Description/Amount in P03       *
.*        V9.09.16  18/03/2008  Mike Laming       CAR 163918  HDP 2008        *
.*                  Added PTCNGDV6 ICD10 Ed.6 Go-live date    (Sec.112 P.239) *
.*        V9.09.15  29/02/2008  Mike Laming       CAR 153670                  *
.*                  Added Sector 114                                          *
.*                  Added PTCNACPT - ACC XML Message Path     (Sec.112 P.179) *
.*                  Added PTCNACSN - ACC XML Document Sender  (Sec.114 P.1)   *
.*                  Added PTCNACVR - ACC XML Document Version (Sec.114 P.61)  *
.*        V9.09.14  24/01/2008  Peter Vela        CAR 155334                  *
.*                  Added PTCNTRPR - Tracking Prosthetics?                    *
.*                  Added PTCNJPEP - JDE Prosthetic Extract Pathname          *
.*        V9.09.13  07/01/2008  Peter Vela        CAR 158768                  *
.*                  Added PTCNDOST - Day Oncology Inpatient Scheduling        *
.*                  Start Time                                                *
.*                  Added PTCNDOET - Day Oncology Inpatient Scheduling        *
.*                  End TIme                                                  *
.*        V9.09.12  02/01/2008  J.Tan             CAR 136785                  *
.*                  Added PTCNNHOS - Exclude Days Hosp. for daycase patients  *
.*        V9.09.11  02/01/2008  Davin             CAR 153382                  *
.*                  Added PTCNAFIP - Autolink Fee Information to Preadmission *
.*        V9.09.10  14/12/2007  Ebon Clements     CAR 157600                  *
.*                  Added PTCNDUNT - Don't Display unit on current patient    *
.*                  search                                                    *
.*        V9.09.08  27/11/2007  Steve Armstrong   CAR 155887                  *
.*                  Added PTCNH7IT                                            *
.*        V9.09.07  19/11/2007  Jill Habasque     CAR 148954                  *
.*                  Added PTCNBMAN                                            *
.*        V9.09.06  14/11/2007  Ebon Clements     CAR 151894                  *
.*                  Added PTCNBEDM                                            *
.*        V9.09.05  31/10/2007  Peter Vela        CAR 151159                  *
.*                  Added PTCNMORG                                            *
.*        V9.09.04  12/10/2007  Davin             CAR 151896                  *
.*                  Added PTCNWBDS                                            *
.*        V9.09.03  04/10/2007  Jill Habasque     CAR 150322                  *
.*                  Added PTCNHITC and PTCNHICC                               *
.*        V9.09.02  14/09/2007  Ebon Clements     CAR 150226                  *
.*                  Added PTCNUFFR - Using frame friendly                     *
.*                  12/09/2007  Steve Armstrong   CAR 148394                  *
.*                  Added PTCNH7AD & PTCNH7A5                                 *
.*                  12/09/2007  Jill Habasque   CAR 150317                    *
.*                  Added PTCNMPBK                                            *
.*        V9.09.01  10/07/2007  Mike Laming   CAR 140395                      *
.*                  Added PTCNSMTH & PTCNSMTT Pat.Billing Statement Header &  *
.*                  Tail Template name/s                                      *
.******************************************************************************
.*        V9.08.18  01/06/2007  Janet George                                  *
.*                  Added three controlf variables for ACC E-Lodgement        *
.*                  Added PTCNACCE - Using ACC E-Logdement Y/N                *
.*                  Added PTCNACCL - Last Valid ACC Claim Number              *
.*                  Added PTCNACCN - Next ACC Number to be assigned           *
.*        V9.08.17  15/05/2007  J.Tan            CAR 140282                   *
.*                  Added PTCNUFMS=2 for Using Other FMS                      *
.*        V9.08.16  10/05/2007  Steve Armstrong  CAR 135721                   *
.*                  Added PTCNH7ME - Sending Mobile Phone & Email in PID-13   *
.*                  Added PTCNH7IN - Sending Interpreter Req'd flag in PID-15 *
.*                  Added PTCNH7AC - Sending ACC data in PV1-20               *
.*                  Added PTCNH7HS - Sending Health Specialty in PV1-10       *
.*        V9.08.15  07.05.2007  J.Tan    CAR 140282                           *
.*                  Added PTCNGLEX - G/L Extract Directory Path               *
.*        V9.08.14  24.04.2007  J.Tan             CAR 130467                  *
.*                  Added PTCNCJRN - Journal code for Cash trans overpayment  *
.*        V9.08.13  12/04/2007  Mike Laming      CAR 137125 HDP 2007 DRG 5.2  * 
.*                  Added PTCNU52G and PTCNC52C for DRG Ver 5.2 (Sect.10 144) *
.*        V9.08.12  07.02.2007  Peter Vela        CAR sjog-vic                *
.*                  Added PTCNINVL=24 St. John of God layout 33               *
.*        V9.08.11  01.02.2007  Ebon Clements     CAR 120001                  *
.*                  Added PTCNLJCD and PTCNWJCD loss and win journal code     *
.*        V9.08.10  08/12/2006  Ebon Clements     CAR 126779                  *
.*                  Added PTCNRPIS - Related provider invoice sequence id     *
.*        V9.08.09  06/12/2006  Steve Armstrong   CAR 125110                  *
.*                  Added PTCNWAUD (WA HDP Using Contracting)                 *
.*        V9.08.08  30/11/2006  Ebon Clements     CAR 120003                  *
.*                  Added Sector 112 and PTCNMBSD - MBS item description      *
.*        V9.08.07  28/11/2006  Steve Armstrong   CAR 126191                  *
.*                  Added PTCNCLCD (Send Claim Code in PV1-20)                *
.*                  Added PTCNHL7L (Log HL7 Broadcast Messages)               *
.*                  Added PTCNADIG (Send Admitting/Presenting Diag. in DG1)   *
.*                  Added PTCNNNK1 (Send Non-compliant NK1 Segment)           *
.*        V9.08.06  14/11/2006  Peter Vela        CAR 124547                  *
.*                  Added PTCNDEES Change PRFA when patient deceased?         *
.*                  Added PTCNDDES Description of Deceased Estate             *
.*        V9.08.05  03/11/2006  J.Tan             CAR 123584                  *
.*                  Added PTCNSIGL - Using System Based Interface G/L         *
.*        V9.08.04  03/11/2006  Mike Laming       CAR 103368                  *
.*                  Added PTCNUCCP - Using CCPS EDI module (Sec 103, Pos 218) *
.*        V9.08.03  01/11/2006  Steve Armstrong   CAR 109687                  *
.*                  Added PTCNCKDG - Send check digit for U/R in PID-03       *
.*        V9.08.02  13/10/2006  Davin          CAR 113730                     *
.*                  Added PTCNDGA2 - Send DG1 segment in A02                  *
.*        V9.08.01  22/09/2006  Steve Armstrong  CAR 119971                   *
.*                  Added ED function for PTCNOLOC.                           *
.******************************************************************************
.*        V9.07.11  19/09/2006  Jill Habasque  CAR 109852                     *
.*                  Added PTCNHHFT - Output Health fund/table in patient header*
.*                  Added PTCNHCLM - Output Claim code in patient header      *
.*        V9.07.10  07/09/2006  Peter Vela     CAR 118225                     *
.*                  Added PTCNPFSN - Using Preferred Surname                  *
.*                  Added PTCNPFGN - Using Preferred Given Name               *
.*        V9.07.09  06/09/2006  Jill Habasque  CAR 109852                     *
.*                  Added PTCNDAUR - Display alternate ID instead of UR       *
.*        V9.07.08  08/08/2006  J.Tan          CAR 103365                     *
.*                  Added Catg FI for discount  PTCNCDIS                      *
.*                  Added Catg FI for rounding  PTCNROUN                      *
.*        V9.07.07  20/07/2006  Ebon Clements  CAR 103365                     *
.*                  Added round invoice total down to nearest cents PTCNRDWN  *
.*        V9.07.06  19/07/2006  Ebon Clements  CAR 107633                     *
.*                  Added charge bed fee when patient is on leave PTCNCHGL    *
.*        V9.07.05  19/07/2006  Ebon Clements  CAR 107625                     *
.*                  Added bed fee for day discharge PTCNDAYB,PTCNDAYL,PTCNDAYG*
.*        V9.07.04  17/07/2006  J.Tan          CAR 103365                     *
.*                  Added Johns Hopkins Invoice layout                        *
.*        V9.07.03  13/07/2006  Jill Habasque  CAR 107632                     *
.*                  Added PTCNCATA - Which alert category to send in messages *
.*        V9.07.02  11/07/2006  J.Tan            CAR 112128                   *
.*                  Added PTCNMLEG - Using Mental Health Legal status         *
.*        V9.07.01  06/07/2006  Ebon Clements    CAR 103365                   *
.*                  Added PTCNEPAY - Using Expected Payors                    *
.*        V9.06.02  14/06/2006  Davin S          CAR 104165                   *
.*                  Added PTCNQCCT - QLD Contract Category - Sect.105 Pos.235 *
.*        V9.06.01  04/05/2006  Mike Laming      CAR 105244                   *
.*                  Added PTCNGDV5 - ICD10 Ed.5 - Sect.105 Pos.227            *
.*        V9.05.04  06/04/2006  Mike Laming      CAR 99475                    *
.*                  Added PTCNOLOC - HL7 PV1-39 O/P Clinic Loc'n Code         *
.*                  and   PTCNPV04 - HL7 PV1-04 Use Cat CC (instead of Cat P) *
.*                  and   PTCNPV18 - HL7 PV1-18 Use Cat P (instead of Cat CC) *
.*                  and   PTCNPV36 - HL7 PV1-36 Use Cat D (instead of Cat DD) *
.*                  and   PTCNPW36 - HL7 PV1-36 Use Cat EW (for EMR Equiv)    *
.*        V9.05.03  05/04/2006  Jill Habasque    CAR                          *
.*                  Added PTCNPRSM - Multi Hospital PRS2 extracts             *
.*        V9.05.02  18/03/2006  Ebon Clements    CAR 78533                    *
.*                  Added PTCNMHCP - Multi Hospital HCP Search Display        *
.*        V9.05.01  08/03/2006  Mike Laming      CAR 79281                    *
.*                  Added PTCN3BFA (3B Future Action (Cat.FA)) Sec.59 Pos.8   *
.*                  and PTCN3BDY (No.days notice for 3B Cert. expiry)         *
.*        V9.05.B05 23/02/2006  Mike Laming      CAR 93425                    *
.*                  Added PTCNA31X - Alternate 'A' code for A31               *
.*        V9.05.B04 23/02/2006  Mike Laming      CAR 81335                    *
.*                  Added PTCNM02M                                            *
.*        V9.05.B03 16/02/2006  Ebon Clements    CAR 81335                    *
.*                  Added PTCNGHCP,PTCNNHCP and PTCNSHCP                      *
.*                  for auto generate Doctor/HCP codes                        *
.*        V9.05.B02 16/02/2006  Mike Laming      CAR 92179                    *
.*                  Added PTCNLEGB - Using Alternate Legacy system            *
.*        V9.05.B01 20/12/2005  J.Tan            CAR 89226                    *
.*                  Added PTCNRCAL                                            *
.*        V9.04.17  01/12/2005  J.Tan            CAR 84059                    *
.*                  Added PTCNDISI                                            *
.*        V9.04.16  25/11/2005  Davin S          CAR 64087                    *
.*                  Removed PTCNSOLS                                          *
.*        V9.04.15  08/11/2005  J.Tan             CAR 58666                   *
.*                  Added parameter PTCNCELG - Eligibility check on admission *
.*        V9.04.14  12/10/2005  Steve Armstrong  CAR 64087                    *
.*                  Removed PTCNMACH and PTCNSOCK.                            *
.*                  Added PTCNA44M.                                           *
.*        V9.04.13  12/09/2005  Ebon Clements     CAR 61061                   *
.*                  Added PTCNCOMF - using compensable detail patient folders *
.*        V9.04.12  02/09/2005  J.Tan             CAR 74612                   *
.*                  Added parameter to print billing comments                 *
.*        V9.04.11  23/08/2005  Jill Habasque     CAR 73119                   *
.*                  Added PTCNHHDP - ESIS Campus code                         *
.*        V9.04.10  21/07/2005  Steve Armstrong  CAR 65071                    *
.*                  Added PTCNMBRL - Mother/Baby relationship for HosClaims   *
.*        V9.04.09  19/07/2005  Davin         CAR 22680                       *
.*                  Added PTCNACGP - only display active GP/Practice combos   *
.*                                   in GP/Practice search                    *
.*        V9.04.08  23/02/2005  Mike Laming   CAR 61562                       *
.*                  Added PTCNU51G and PTCNC51C for DRG Ver 5.1 (Sect.10 140) *
.*        V9.04.07  03/05/2005  Steve Armstrong   CAR 61331                   *
.*                  Added PTCNHICO - Outbound path for HIC (Messenger)        *
.*                  Added PTCNHICI - Inbound path for HIC (Messenger)         *
.*        V9.04.06  16/03/2005  J.Tan   CAR 56698                             *
.*                  Added PTCNCLMN - Next claim number for HIC                *
.*                  Added PTCNBTCH - Next batch number for HIC                *
.*                  Added PTCNMCLM - Maximum number of claims in a batch      *
.*                  Added PTCNOPND - Patient Indicator code for Outpatient    *
.*        V9.04.05  08/03/2005  J.Tan   CAR 55961                             *
.*                  Added PTCNPRIN - Print zero amnt of invoice with trans.   *
.*        V9.04.04  13/12/2004  Henry Son        CAR 55406                    *
.*                  Added PTCNC41C, PTCNC42C,PTCNC50C                         *
.*                  for 3M encoder codes.                                     *
.*        V9.04.03  09/12/2004 Jill Habasque CAR 52833                        *
.*                  Added PTCNDISA - Display all alternate id's in search     *
.*        V9.04.02  26/10/2004  Steve Armstrong  CAR 54520                    *
.*                  Added PTCNDFIN - Day Facility Indicator                   *
.*                  Also added type "9" to CHOSTYP                            *
.*        V9.04.01  12/10/2004  J.Tan   CAR 54242                             *
.*                  Added PTCNPRWD                                            *
.*        V9.03.15  09/08/2004  Peter Vela        CAR 53150                   *
.*                  Added PTCNPR3A - PRS report code for 3rd request          *
.*                  Added PTCNRNG3 - PRS 3rd report request date range        *
.*        V9.03.14  05/08/2004  Steve Armstrong  CAR 34707  & 48877           *
.*                  Added PTCNDGHA & PTCNDGHD                                 *
.*                  30/07/2004  Jill Habasque CAR 50611                       *
.*                  Add PTCNACCD - EOC or ACC for NMDS                        *
.*        V9.03.13  13/07/2004  Steve Armstrong   CAR                         *
.*                  Added PTCNSOLS (Solicited socket for PAS-CIS Interface)   *
.*                  30/07/2004  Lina Vo           CAR 52050                   *
.*                  Added PTCNDMX1 to PTCNDX10  (Patient Day Mix Range 1-10)  *
.*        V9.03.12  31/05/2004  Peter Vela       CAR 49016                    *
.*                  Added PTCNRTCN - for PRS2 2004 Stat Changes               *
.*                  Added PTCNRTRQ - for PRS2 2004 Stat Changes               *
.*                  Added PTCNPRS6 - for PRS2 2004 Stat Changes               *
.*                  Added PTCNRNG6 - for PRS2 2004 Stat Changes               *
.*                  27/05/2004  Steve Armstrong  CAR 48778                    *
.*                  Added PTCNDGCP - Broadcast Pre-admission change           *
.*                  20/05/2004  Pat Dirito       (CAR 50035)                  *
.*                  Added PTCNMVCP - Mechanical Ventilation in Casepayment &  *
.*                  added PTCNMVBC - Mechanical Ventilation Billing Code      *
.*                  19/05/2004  Henry Son        CAR 49037                    *
.*                  Add PTCNGDV4 for ICD4 Go Live Date.                       *
.*                  Add PTCNU50G Using 5.0 Grouper.                           *
.*        V9.03.11  12/05/2004   Guomin Fu        (CAR 39616)                 *
.*                  Added PTCNDWAW - Default Ward to Admitting Ward           *
.*        V9.03.10  04/05/04 J.Tan   CAR 49531                                *
.*                  Added Backdate Invoice                                    *
.*        V9.03.09  Porting over BPAY enhancement from 6.11                   *
.*                  Added PTCNBPAY - Generate BPAY Customer Reference Number  *
.*                  Added PTCNHBID - Hospital BPAY Identifier                 *
.*        V9.03.08  06/04/2004  Peter Vela       (CAR ?????)                  *
.*                  Added comments for PTCNHDPS - State Indicators            *
.*                  15/03/2004  Steve Armstrong  HosClaims Phase 1 (48280)    *
.*                  Added PTCNHCCC, PTCNUEDI, PTCNEDIO, PTCNEDIH & PTCNORIG.  *
.*        V9.03.07  02/02/2004  Peter Vela    CAR 38290                       *
.*                  Added PTCNRSYR - Results Display Start Year               *
.*        V9.03.06  04/03/2004  Steve Armstrong   Product Integration         *
.*                  Added PTCNMACH, PTCNSOCK, PTCNA01, PTNCA02M, PTCNA03M,    *
.*                  PTCNA08M, PTCNA11M, PTCNA12M, PTCNA13M, PTCNA14M,         *
.*                  PTCNA21M, PTCNA22M, PTCNA27M, PTCNA28M, PTCNA31M,         *
.*                  PTCNA34M for PAS-CIS Interface message parameters         *
.*        V9.03.05  12/02/2004  Henry Son        (CAR 47385)                  *
.*                  Added PTCNMBSF                                            *
.*        V9.03.04  21/01/2004  Ebon Clements CAR 44720                       *
.*                  Removed PTCN40WD as it was no longer required in V9.03    *
.*        V9.03.03  05/11/2003  J.Tan   (CAR 44160)                           *
.*                  Added Next credit note number                             *
.*        V9.03.02  27/06/2003  Lina Vo          (CAR 36485)                  *
.*                  Added New Sector 110 - New Fields PTCNWTFE, PTCNWBFE,     *
.*                  PTCNWDRG, PTCNWMCH, PTCNWRAT & PTCNWITM.                  *
.*        V9.03.01  30/05/2003  Jill Habasque    (CAR 38102)                  *
.*                  Added PTCNACAS - Which UDF for Aged Care Assessment       *
.*        V9.02.25  04/04/2003  Steve Armstrong  (CAR 13395) Merlin Interface *
.*                  Added PTCNDMCC & PTCNDMJC                                 *
.*                  02/04/2003  Davin  CAR 23297                              *
.*                  Added PTCNNFPU - Using new fields for prosth. upload(Y/N) *
.*        V9.02.24  20/03/2003 Jill Habasque                                  *
.*                  Added PTCNNHTM - NHI Reply FIFO timeout                   *
.*        V9.02.23  06/02/2003 J.Tan                                          *
.*                  Added PTCNLCLM                                            *
.*        V9.02.22  04/12/2002  Greg Horvat                                   *
.*                  Added PTCNFPST & PTCNSORP                                 *
.*        V9.02.21  11/11/2002  J.Tan                                         *
.*                  Added parameters from r6.10                               *
.*        V9.02.20  21/10/2002  Jill Habasque                                 *
.*                  Added CFEETYP = 8 Not charging                            *
.*        V9.02.19  10/09/2002  Davin  SRF 13395                              *
.*                  Added PTCNBNUM - auto batch number for misc. charges      *
.*                  23/09/2002  Jill Habasque SRF 21990                       *
.*                  Move PTCNLDAT to sector 109                               *
.*        V9.02.18  26/08/2002  J.Habasque                                    *
.*                  Added PTCNSTGV - using strict given name in soundex       *
.*        V9.02.17  01/08/2002  J.Tan                                         *
.*                  Mods to default contract fields to DIM                    *
.*        V9.02.16  02/07/2002  Jill Habasque SRF 18879                       *
.*                  Added PTCNCPAH - write AH to current patient search       *
.*           ~~     05/07/2002  Mike Laming   SRF 18067                       *
.*                  Added PTCNUICF - Interim H/F Claim  Sec.109-Pos.159       *
.*        V9.02.15  05/06/2002  Pat Dirito       SRF 18489                    *
.*                  Added PTCNGDV3 - Go live date for ICD10 version 3         *
.*        V9.02.14  02/05/2002  Dean Cramer                                   *
.*                  Added PTCNVETR, PTCNELPS, PTCNPPAL                        *
.*                  29/04/2002  J.Tan                                         *
.*                  Added variables from r6.09                                *
.*                  24/04/2002  Jill Habasque                                 *
.*                  Added PTCNTIMN                                            *
.*        V9.02.13  09/04/2002  Dean Cramer                                   *
.*                  Added PTCNQUM1 & PTCNQUM2 in new sector 109               *
.*        V9.02.12  07/03/2002  Tonii St Vincent's                            *
.*                  Added PTCNNULB - Type of Nutrition Label being used       *
.*        V9.02.11  15/01/2002  Jill Habasque                                 *
.*                  Added PTCNIOEV - Include Outpatient events in VACS        *
.*        V9.02.10  04/01/2002  Pat Dirito                                    *
.*                  Added PTCNICUT - Checking for an ICU/NCU Bed Type?        *
.*        V9.02.09  13/12/2001  Jill Habasque                                 *
.*                  Added PTCNPRCC and PTCNTIMC                               *
.*        V9.02.08  06/12/2001  Tonii                                         *
.*                  Added PTCNCMXF - Casemix funded at admission (Y/N)        *
.*        V9.02.07  20/11/2001  J.Tan                                         *
.*                  Changed CVIEWIP to view outstanding amount only           *
.*        V9.02.06  16/11/2001  Steve Armstrong                               *
.*                  Added PTCNDGPE                                            *
.*        V9.02.05  22/08/2001  Davin  (4.2 Grouper mods)                     *
.*                  Added PTCNDGPV, PTCNU31G, PTCNU41G & PTCNU42G             *
.*                  Removed PTCNUGRP & PTCNVOGU                               *
.*        V9.02.04  26/10/2001  Pat Dirito                                    *
.*                  Added Extra Description to PTCNADMT                       *
.*        V9.02.03  12/10/2001  Pat Dirito                                    *
.*                  New parameters CMDISM,PTCNDCRM                            *
.*        V9.02.02  24/09/2001  Pat Dirito                                    *
.*                  New parameters PTCNAUAT,PTCNWSPC,PTCNADB1...4,PTCNDFAN    *
.*        V9.02.01  23/08/2001  Tonii                                         *
.*                  New Layout 26 for Royal Children's (CTYPLAB)              *
.*        V9.00.06  13/08/2001  Tonii                                         *
.*                  New Layout 25 for St Vincent's (CTYPLAB)                  *
.*        V9.00.05  02/08/2001  Steve Armstrong     ACT PMI                   *
.*                  Added PTCNCCOD (ACT PMI Country code for Australia)       *
.*        V9.00.B04 20/07/2001  Mike Laming (for 25/04/2001  Steve Armstrong) *
.*                  Removed PTCNWFAC (ACT Health Country Code Field)          *
.*        V9.00.B03 20/07/2001  Mike Laming (for 24/04/2001  Steve Armstrong) *
.*                  Added PTCNACSA & PTCNAPID                                 *
.*        V9.00.B01 06/07/2001  Mike Laming                                   *
.*                  Added PTCNDGPO Write Patient On-Leave to Datagate         *
.*                  Added PTCNDGPR Write Patient Return from Leave to Datagate*
.*                  Added PTCNDGPA Write Cancel Patient Pre-Admiss to Datagate*
.*        V5.10.B13 15/05/2001  Bronko Sosic                                  *
.*                  Added PTNUMAD- number of days prior admission             *
.*        V5.10.B12 10/04/2001  Glenn Saunders                                *
.*                  Removed (commented out) PTCNSNDX                          *
.*        V5.10.B11 02/04/2001  Jill Habasque                                 *
.*                  Added 2 - Cross index to PTCNIDES                         *
.*        V5.10.B10 26/03/2001  Steve Downing                                 *
.*                  Added PTCNDGET - Delete grouper and encoder tempfiles     *
.******************************************************************************
.*        V5.09.B09 21/03/2001  Jill Habasque                                 *
.*                  Added PTCNPX2A - Using 2nd Master file Audit (pmspx2af)   *
.*                  Added PTCNHCPA - Using Health Care Prof Audit (pmshcpaf)  *
.*                  Added PTCNVACA - Using VACS Audit (pmsvacaf)              *
.*        V5.09.B08 26/02/2001  Steve Armstrong                               *
.*                  Added PTCNUDRN - Using date ranges in Date of Birth search*
.*        V5.09.B07 22/02/2001  Jill Habasque                                 *
.*                  Added PTCNCMYN - Default casemix payment to Y or N &      *
.*                        PTCNNWCM - Using Casemix matrix                     *
.*        V5.09.B06 16/02/2001  Pat Dirito                                    *
.*                  Added PTCNONLV - Checking Patient On-Leave indicator      *
.*        V5.09.B05 12/01/2001  Jill Habasque                                 *
.*                  Added PTNCQUOT - Next quote number for fees estimation    *
.*        V5.09.B04 08/01/2001  Dean Cramer                                   *
.*                  Include the variable PTCNAMUI - Next ACT merge unique Id  *
.*        V5.09.B03 03/01/2001  Steve Downing                                 *
.*                  Updated comments for CNSWLNG - values for user def fields *
.*        V5.09.B02 20/12/2000  Greg Horvat                                   *
.*                  Added PTCNWFAC - Which field for ACT country code         *
.*        V5.09.B01 13/12/2000  Ebon Clements 5.09 Mods                       *
.*                  Added PTCNCMAU & PTCNCMDU                                 *
.*        V5.08.15  28/11/2000  Steve Downing                                 *
.*                  Added PTCNSRVY - Participate in survey                    *
.*        V5.08.14  23/11/2000  Caleb Sharman  5.09 Mods                      *
.*                  Added PTCNPLFI                                            *
.*        V5.08.13  25/10/2000  Ebon CLements                                 *
.*                  Added PTCNMBSC - Load MBS items from ascii file IBAPAT14  *
.*        V5.08.12  19/10/2000  Ebon CLements                                 *
.*                  Added PTCNLPRO - Load prosthetics in IBAADT83             *
.*        V5.08.11  19/10/2000  Greg Horvat      SRF 5858                     *
.*                  Removed PTCNUMOR - Sector 59, position 223                *
.*        V5.08.10  28/09/2000  Jill Habasque                                 *
.*                  - Added Using SQL Scripts PTCNUSQL                        *
.*        V5.08.09  25/09/2000  Dean Cramer                                   *
.*                  - Added sector 105 - Using ACT Health Interface - IBA     *
.*                                     - State Base Interface names - IBA
.*                                     - Time out variables - HOSPITAL        * 
.*        V5.08.08  13/08/2000  Greg Horvat      SRF 5452                     *
.*                  Added PTCNLDAT - Last date PRS2 coding date change made   *
.*        V5.08.07  12/07/2000  Tonii                                         *
.*                  - Added PTCNPRS4 & PTCNRNG4 - Report 4 and date range     *
.*                  - Added PTCNPRS5 & PTCNRNG5 - Report 5 and date range     *
.*        V5.08.06  06/07/2000  Greg Horvat                                   *
.*                  - Added PTCNBTHN - EDI batch no                           *
.*                  - Added PTCNAUED - AUS EDI extract directory              *
.*                  - Moved the parameter PTCNEDID to PTCNNZED                *
.*        V5.08.05  27/06/2000  Greg Horvat                                   *
.*                  Added PTCNGDV2 - Go live date for ICD10 version 2         *
.*        V5.08.04  21/06/2000  Tonii                                         *
.*                  Removed CNEXTINV - No longer used                         *
.*        V5.08.03  16/06/2000  Greg Horvat      00/01 PRS2 Mods              *
.*                  Removed PTCNPVET - Sending Veterans Affairs Recs for PRS2 *
.*        V5.08.02  05/06/2000  Greg Horvat      00/01 PRS2 Mods              *
.*                  Removed PTCNWF1E - Use which file if 1 Episode PRS2       *
.*        V5.08.01  15/05/2000  J.Tan                                         *
.*                  Added PTCNINVB - print invoice on Portrait/Landscape      *
.*        V5.08.B05 08/03/2000  J.Tan                                         *
.*                  Moved IBCNUGST to IBACONFD                                *
.*        V5.08.B04 02/03/2000  Davin                                         *
.*                  Added PTCNPAIH & PTCNPAIT for user defined invoice        *
.*                  headers/tails                                             *
.*        V5.08.B03 21/02/2000  Davin                                         *
.*                  Commented out IBCNTMDM & IBCNVARM - moved to IBACONFD     *
.*        V5.08.B02 24/01/2000  Jill Habasque                                 *
.*                  Added PTCNDGST default "is GST applicable to this event"  *
.*                  Added PTCNAGST GST Code for Accommodaton                  *
.*        V5.08.B01 08/01/2000  Steve Armstrong                               *
.*                  Mods to remove CSTRTYR - No longer required               *
.******************************************************************************
.*        V5.07.13  30/11/1999  Davin                                         *
.*                  Added PTCNUGRP - Using 3.1 grouper, 4.1 or mapping        *
.*        V5.07.12  25/11/1999  J Habasque                                    *
.*                  Added PTCNPMIS - Print miscellaneous charges on invoice   *
.*        V5.07.11  27/10/1999  J Habasque                                    *
.*                  Added PTCNRQDF - Default code for Cat RQ in IBAEOC01      *
.*        V5.07.10  06/10/1999  Steve Armstrong                               *
.*                  Added PTCNCPTH - G/L Control File Path                    *
.*        V5.07.09  23/09/1999  J Habasque                                    *
.*                  Added PTCNPSOS - Disch. UDF for Pension Status (ADT55)    *
.*        V5.07.08  22/09/1999  J Habasque                                    *
.*                  Added PTCNCSRL - Cat for Source of Referral (WAT62)       *
.*        V5.07.07  25/08/1999  J.Tan                                         *
.*                  Added Nursing Home charge type                            *
.*        V5.07.06  21/07/1999  J.Tan                                         *
.*                  Added PTCNHCOD - new PRS2 hospital code                   *
.*        V5.07.05  30/06/1999  Davin                                         *
.*                  Added PTCNAFLG & PTCNCLNO (for INP08 quote NZ1172)        *
.*        V5.07.04  29/06/1999  Greg Horvat      99/00 PRS2 Mods              *
.*                  Added PTCNCRAY - Which UDF for carer availability         *
.*        V5.07.03  26/05/1999 J Habasque SRF 631798                          *
.*                  Move CNSWRACE from sector 21 to sector 88 (PNSWRACE)to    *
.*                  make it a form 2 (added ADM User defined fields)          *
.*        V5.07.02  25/05/99 J.Tan                                            *
.*                  Added employment status,occupation & mental health for HDP*
.*        V5.07.01  09/04/1999  Davin                                         *
.*                  Added PTCNADCF & PTCNDSCF - print HFCF from adm./disch.   *
.*                  05/03/1999  J.Tan                                         *
.*                  Added PTCNIDES,PTCNDSDY,PTCNDMSO for casemix              *
.*                  Added PTCNNCFB - Admin type or bed type in NCF extract    *
.*        V5.07.B07 25/02/1999  Steve Armstrong                               *
.*                  Added "No Longer in use" to PTCNUNAK                      *
.*        V5.07.B06 29/01/1999  Davin                                         *
.*                  Added PTCNDCRP,PTCNDCRS,PTCNDCRC,PTCNDCRA,PTCNDCRD,       *
.*                        PTCNDCRO,PTCNDCRL (disease prefix descriptions)     *
.*        V5.07.B05 11/11/1998  Greg Horvat      SRF 628671                   *
.*                  Added PTCNDEBW - Don't display encoder interface birth wgt*
.*        V5.07.B04 22/09/1998  Davin                                         *
.*                  Added PTCNEGLD - Encoder go-live date for ICD10           *
.*        V5.07.B03 08/09/1998  Greg Horvat      SRF 627852                   *
.*                  Added PTCN1ATS - Allow 1st admin type to be statistical   *
.*        V5.07.B02 31/08/1998  Greg Horvat      98/99 PRS2 Mods              *
.*                  Added PTCNCDSC - Collecting duration of stay in CCU       *
.*        V5.07.B01 25/08/1998  Glenn Berry      507 Changes                  *
.******************************************************************************
.*        V5.05.06  25/06/1998  Greg Horvat                                   *
.*                  Added PTCNVOGU - Version of grouper used                  *
.*        V5.05.05  27/05/1998   Nick  506                                    *
.*                  Added PTCNI10D - Go-Live date for ICD10 Coding            *
.*        V5.05.04  19/03/1998  Davin  506                                    *
.*                  Added PTCNHADF - default Health Agency                    *
.*        V5.05.03  24/02/1998  Steve Armstrong                               *
.*                  Added PTCNDGAL, PTCNDGDN & PTCNDGMW                       *
.*        V5.05.02  09/09/1997  Steve Armstrong      SRF 621792   (WGH)       *
.*                  Added PTCNTHAL                                            *
.*        V5.05.01  04/08/1997  Steve Armstrong      505                      *
.*                  Added PTCNACCF                                            *
.*        V5.04.13  13/06/1997  Steve Armstrong      WHL AAE API Mods         *
.*                  Added PTCNDESI & PTCNDESO                                 *
.*        V5.04.12  13/04/97 J.Tan                                            *
.*                  Added PTCNUVTH,PTCNPALC,PTCNFINP for NSW transmissions    *
.*                  13/04/1997  Steve Armstrong                               *
.*                  Added PTCNPELT & PTCNIELT for Eltron printer.             *
.*        V5.04.11  07/05/1997  Howellsy                                      *
.*                  Added PTCNDDSD - Default discharge summary disch diag     *
.*        V5.04.10  06/05/1997  Howellsy                                      *
.*                  Added PTCNDDCD - Default Date for Coding Date             *
.*        V5.04.09  14/03/1997  Greg Horvat                                   *
.*                  Added PTCNHDPS - Hospital state for HDP extracts          *
.*        V5.04.08  16/04/1997  Steve Armstrong                               *
.*                  Added PTCNDPSI, PTCNDPSO, PTCNDGPB, PTCNDASI, PTCNDASO    *
.*                  PTCNDGAD, PTCNDGDS, PTCNDGTR & PTCNDGRG                   *
.*                  14/04/1997  Paul Howells   RHA                            *
.*                  Added PTCNURHA                                            *
.*        V5.04.07  26/03/1997  Greg Horvat                                   *
.*                  Added PTCNBWMR                                            *
.*        V5.04.06  29/01/1996  Paul Howells                                  *
.*                  Added PTCNEEOC                                            *
.*        V5.04.05  30/08/1996  Paul Howells                                  *
.*                  Added PTCNUEOC, PTCNUACC, PTCNLMAN, PTCNLEDT, PTCNPACC    *
.*        V5.04.04  29/07/1996  B.G.Ackland                                   *
.*                  Added PTCNNZCD NZHIS Clear Domicile Code on Address Mod   *
.*        V5.04.03  15/07/1996  Steve Armstrong   SRF 641467                  *
.*                  Added CTYPLAB 24 - Mercy, Dunedin                         *
.*        V5.04.02  01/07/1996  Steve Armstrong   Quote 8678                  *
.*                  Added PTCNSTMT                                            *
.*        V5.04.01  18/06/1996  Greg Horvat      SRF 615716                   *
.*                  Added PTCNEAPD - Allocate principal disease code prefix   *
.*                  for the encoder                                           *
.*        V5.03.B0  22/05/1995  Paul Howells     SRF  133028                  *
.*                  Added PTCNIPEN - Using Invoice Pending File?              *
.*        V5.03.B1  22/05/1995  whirlpool                                     *
.*                  ADDED PTCNEDTE  - Entering dates for every "E" code in    *
.*                  MRT06                                                     *
.*        V5.03.B2  28/04/1995  Greg Horvat      SRF 136165                   *
.*                  Added CTYPLAB 21 - Coast Health Care labels               *
.*        V5.03.B3  07/06/1995  Paul Howells     SRF 136862                   *
.*                  Added PTCNMIC1 - Preserve Micro Film Address (1 field)    *
.*                  Added PTCNMIC2 - Preserve Micro Film Address (both fields)*
.*        V5.03.04  09/06/1995  Whirlpool                                     *
.*                  Added PTCNCAMA - Category A mandatory in IBAHOS73         *
.*        V5.03.05  13/06/1995  Paul Howells     SRF  640308                  *
.*                  Added PTCNPREV - "Using Preadmit with Previous Details"   *
.*        V5.03.06  14/06/1995  Greg Horvat      SRF 136820                   *
.*                  Added CTYPLAB 22 - St. Vincents Bathurst labels           *
.*        V5.03.07  16/06/1995  Greg Horvat                                   *
.*                  Added PTCNQLDB - for which banding or type of episode for *
.*                  QLD health department transmissions                       *
.*        V5.03.08  29/06/1995  Whirlpool                                     *
.*                  Added PTCNGEST - Adm user def field for Gestation Period  *
.*        V5.03.09  30/06/1995  Greg Horvat                                   *
.*                  Added PTCNDSCI - Code used to record discharge intention  *
.*        V5.03.10  02/02/1995  Max White        SRF 441188                   *
.*                  Added PTCNCDAT - Effective Date for ICD-10 Coding.        *
.*        V5.03.11  26/07/1995  Greg Horvat                                   *
.*                  Added PTCNESTB - Establishment number for Tasmanian       *
.*                  Health Department                                         *
.*        V5.03.12  26/07/1995  Greg Horvat                                   *
.*                  Added CTYPLAB 23 - Mersey labels                          *
.*        V5.03.13  03/08/1995  Paul Howells     PRS2 1995                    *
.*                  Added PTCNEDRG - Exclude ICD9CM Procedure Code from DRG.  *
.*        V5.03.14  17/08/1995  Paul Howells     SRF 611251                   *
.*                  Moved PTCNCHSD,PTCNCHAL,PTCNOPHO,PTCNIPEN,PTCNMIC1,PTCNMIC2
.*        V5.03.15  28/08/1995  Whirlpool      Quote 8481                     *
.*                  Added PTCNDATB - default admission type for babies in HOS73
.*        V5.03.16  13/09/1995  Greg Horvat                                   *
.*                  Added PTCNOENC - Using online encoder, &                  *
.*                        PTCNAAPE - Auto Allocation of prefix for the encoder*
.*        V5.03.17  13/09/1995  MATT       SRF 611464                         *
.*                  Added PTCNACAN - Automatic booking cancelation on death ? *
.*        V5.03.18  11/10/1995  MATT                                          *
.*                  Added CAUDA1 - Using ALERTS Audit.                        *
.*        V5.03.19  16/10/1995  Greg Horvat      SRF 611799                   *
.*                  Added PTCNADTT, PTCNDSTT & PTCNHCPC                       *
.*        V5.03.20  25/10/1995    Justin Coates  (SUHT mods)                  *
.*                  Added PTCNULUE,PTCNUVSM,PTCNVSDF,PTCNSVOD                 *
.*        V5.03.21  26/10/1995  Greg Horvat                                   *
.*                  Added PTCNHCPB - Admin type or bed type in HCP extract    *
.*        V5.03.21  03/11/1995  Matt                                          *
.*                  Added PTCNDIRT - Using Directorates.                      *
.*        V5.03.22  03/11/1995  Matt                                          *
.*                  Added CAUDA2 - Using Directorates Audit                   *
.*        V5.03.23  15/11/1995    Justin Coates  (SUHT mods)                  *
.*                  Added PTCNNFAP, PTCNNFAD, PTCNDORO                        *
.*        V5.03.24  21/11/1995    Howellsy       (SUHT mods)                  *
.*                  Added PTCNP68L                                            *
.*        V5.03.25  04/12/1995    Justin Coates  (SUHT mods)                  *
.*                  Added PTCNUILH                                            *
.*        V5.03.26  12/12/1995    Howellsy       (SUHT mods)                  *
.*                  Added PTCNDAYM                                            *
.*        V5.03.27  15/12/1995    Howellsy       (SUHT mods)                  *
.*                  Added PTCNVADM                                            *
.*        V5.03.28  19/12/1995    Justin Coates  (SUHT mods)                  *
.*                  Added PTCNECDF                                            *
.*        V5.03.29  05/01/1996  Greg Horvat                                   *
.*                  Commented out the menu programs, security key & IBA screen*
.*                  password variables                                        *
.*        V5.03.30  05/02/1996    Justin Coates  (SUHT mods)                  *
.*                  Added PTCNFRDA and PTCNNLOC                               *
.*        V5.03.31  23/02/1996    Justin Coates  (SUHT mods)                  *
.*                  Added PTCNACDR and PTCNACPH                               *
.*        V5.03.32  04/03/1996    Howellsy       (SUHT mods)                  *
.*                  Added PTCNDSPC                                            *
.*        V5.03.33  05/03/1996  Greg Horvat      Quote 8635                   *
.*                  Added PTCNPPPT - Which AUSR field for private/public      *
.*                                   patients                                 *
.*        V5.03.34  06/03/1996    ROD            (SUHT mods)                  *
.*                  Added PTCNDGUP to PTCNDGUU                                *
.*        V5.03.35  02/04/1996  Steve Armnstrong                              *
.*                  Added PTCNH82W.                                           *
.*        V5.03.36  14/05/1996  Howellsy     5.04                             *
.*                  Remove PTCNBWMR,PTCNHRMR,PTCNAMBN                         *
.*                                                                            *
.******************************************************************************
.
.******************************************************************************
.*        PATCONFD.PBL : sector 10     (PATIENT MANAGEMENT GENERAL)           *
.******************************************************************************
. NAME    TYPE    LENGTH  START LOC.   DESCRIPTION
. ----    ----    ------  ----------   -----------
.AADMNO   FORM      8          1       Next Admission Number
CNOBEDS   FORM      4          9       Total Number of Beds in Hospital
PTCNTLVE  FORM      1         13       Using type of leave
.                                        0 = No ; 1 = Yes
PTCNP2SC  FORM      1         14       Second PMI screen being used ?
.                                        0 = No 
.                                        1 = Mental health only
.                                        2 = Non-Mental health only
.                                        3 = Yes
PTCNDLVE  DIM       3         15       Default type of leave (Cat TL)
PTCNP31G  FORM      1         18       General inpatatient Pre-Adms in PAT31?
.                                        0 = No ; 1 = Yes
PTCNP31M  FORM      1         19       Mental Health Pre-Adms in PAT31?
.                                        0 = No ; 1 = Yes
PTCNH31G  FORM      1         20       General inpatatient Pre-Adms in HOS31?
.                                        0 = No ; 1 = Yes
PTCNH31M  FORM      1         21       Mental Health Pre-Adms in HOS31?
.                                        0 = No ; 1 = Yes
PTCNMHBK  FORM      1         22       Mental Health Booking option?
.                                        0 = No ; 1 = Yes
PTCNA2SC  FORM      1         23       Second Admission screen being used ?
.                                        0 = No 
.                                        1 = Mental health only
.                                        2 = Non-Mental health only
.                                        3 = Yes
PTCNICAD  FORM      1         24       Input Current address?
.                                        0 = No ; 1 = Yes
PTCNVKCA  FORM      1         25       Audit PATVKCFD file ?
.                                        0 = Used, 1 = Not Used
PTCNHBRD  DIM       6         26       Home board. For other board referrals
PTCNUBRD  FORM      1         32       Inputing board code ?
.                                        0 = No, 1 = Yes
PTCNGSTF  FORM      1         33       Separate GST in IBABIL19 ?
.                                        0 = No, 1 = Yes
PTCNRFFF  FORM      1         34       Free format doctor in referral details ?
.                                        0 = No, 1 = Yes
PTCNATHM  FORM      1         35       Authority mandatory in referral details ?
.                                        0 = No, 1 = Yes
CMDISD    DIM       1         36       Disability disease type
CMOPRT    DIM       1         37       Post-Surgical operation type
PTCNJDRG  FORM      1         38      Include journals in DRG report (INP64)?
.                                        0 = No, 1 = Yes
PTCNACAN  FORM      1         39      Automatic booking cancelation on death?
.                                        0 = No, 1 = Yes
.                                        (NO LONGER USED)
PTCNINRA  FORM      1         40      Using Intention to Re-Admit in IBAINP79? 
.                                               0=No, 1=Yes
PTCNINVQ  FORM      1         41      Using ? option on invoice in Cash Receipt
.                                       1 = Use claim code / journal code
.
PTCNDGAT  FORM      1         42       Check MBS Diagnosis against Adm.type
.                                      for daycases at admissions (Y/N) ?
.                                         0 = No, 1 = Yes
.
PTCNMRBT  FORM      1         43       Move Medical Record at Bed Transfer.
.                                         0 = No, 1 = Yes
PTCNMRBC  FORM      1         44       Move Medical Record at Bed Transfer with
.                                      Barcode.
.                                         0 = No, 1 = Yes
.
CAUDMAMX  FORM      1         45       Audit on patma1af/patmx1af 1=No 
PTCNFRDA  FORM      2         46       First Regular Day/Night Attender field
.                                        0-9 -> admission user defined field
PTCNNLOC  FORM      2         48       Neonatal Level of Care field
.                                        0=ptmiusr0,1-5=dusr1-5,6-9=ptmiusr..
PTCNACDR  FORM      1         50       Automatic check of D.O.R (Y/N)
.                                         0 = No, 1 = Yes
PTCNACPH  FORM      1         51       Automatic check of Post Code to Address
.                                         0 = No, 1 = Yes
PTCNBNOK  FORM      1         52       Default Baby NOK - HOS73
.                                         0 = Mother's NOK, 1 = Mother
CPCONT    FORM      1         53       Person to contact for Next of Kin
.                                         1 = Person Responsible for Account
.                                         2 = Alternate Person to Contact
CFILENO   DIM       6         54       Hospital File Number
..(moved) DIM       6         60     was CSTRTYR -  Start of Year (DDMMYY)
CINVLAY   FORM      1         66       Invoice Layout Indicator (value of 9)
.                                             check value of PTCNINVL
.
..(moved) FORM      6         67     was CGADMNO - Starting Govern Discharge Admission No.
..(moved) DIM       6         73     was CDAILYDT - Last Date Govt Subsidy Rept run (DDMMYY)
CAPPRVNO  DIM       10        79       Approval Number
CGOVCLIM  FORM      5         89       Government Subsidy Report Claim Number
CAGECOFF  FORM      2         94       Child/Adult Age Cut Off
..(moved) DIM       8         96     was CNEXTINV
PTCNMBSF  FORM      1        104       Allow more than 6 MBS items
PTCNU50G  DIM       1        105       Using Grouper V5.0? (1=Yes, 0=No)
PTCNC50C  DIM       3        106       Grouper V5.0 code for 3M
PTCNC42C  DIM       3        109       Grouper V4.2 code for 3M
PTCNC41C  DIM       3        112       Grouper V4.1 code for 3M
.
CDSHSPN   FORM      2        118       Dischge Stats Span(X days before & after)
CLETPLN   FORM      3        120       Paper Length for letters
CLETTAB   FORM      2        123       Default Left Margin for letters
CSECFEE   FORM      1        125       Security Level of Gross Fee
CLABPG    FORM      1        126       No of Labels across page (Admissions)
CLABPRT   FORM      3        127       No of Labels to print
..(moved) DIM       2        130     was CFEEDT - From Date for Fees Inv. Rept
PTCNU60G  DIM       1        132       Grouper V6.0 (0=No, 1=Yes)     *I-197814
PTCNC60C  DIM       3        133       Grouper V6.0 code for 3M       *I-197814
CNUMPRT   FORM      2        136       Number of Printers in System
CNOPORT   FORM      2        138       Maximum Number of Ports
.
PTCNU51G  DIM       1        140       Grouper V5.1 (0=No, 1=Yes)      *I-61562
PTCNC51C  DIM       3        141       Grouper V5.1 code for 3M        *I-61562
PTCNU52G  DIM       1        144       Grouper V5.2 (0=No, 1=Yes)     *I-137125
PTCNC52C  DIM       3        145       Grouper V5.2 code for 3M       *I-137125
.
CDOCLAB   FORM      1        148       No. of Label across page (DOCTOR)
CLETLEN   FORM      3        149       Default printing Page Length for letters
PTCNU62G  DIM       1        152       Grouper V6.2 (0=No, 1=Yes)     *I-267797
PTCNC62C  DIM       3        153       Grouper V6.2 code for 3M       *I-267797
..(spare) DIM       1        156     was CMENUMEL - Meal Menu Program Name
PTCNC70C  DIM       3        157       Grouper V7.0 code for 3M       *I-284669
CMEDSERV  FORM      1        160       Using Medical Services System
.                                         1 = Yes, 2 = No
CMIDWIF   DIM       3        161       Midwifery Admission Type Code
CSPECCO   FORM      1        164       Spec Condition instead of Occupation
.                                         1 = Occupation
.                                         2 = Using Spec Condition
CIDENT    FORM      1        165       Patient Identification Sheet
.                                         1 = Yes, 2 = No  (0 = No also)
CMEMB     FORM      1        166       D.V.C.H. Membership System
.                                         1 = Yes, 2 = No  (0 = No also)
CSECURA   FORM      1        167       Admission Security Level
CSECURD   FORM      1        168       Discharge Security Level
..(moved) DIM       6        169     was CSECUR - Company Security Code
..(moved) DIM       8        175     was CMENUPG - Patient Menu Program Name
CVIEWIP   FORM      1        183       View Invoice before Printing
.                                         1 = Yes (incl.zero o/s amnt),
.                                         0/2 = No viewing
.                                         3 = Yes (o/s amnt only)
CPRIMOP   FORM      1        184       1 = Yes - Primary Operations
.                                      2 = No  - All Operations
CPRIMDS   FORM      1        185       1 = Yes - Primary Diseases
.                                      2 = No  - All Diseases
CDSPDEF   FORM      1        186       1 = Display Default Printer
.                                      2 = No Display
CDSPAVL   FORM      1        187       1 = Display Avaliable Printers
.                                      2 = No Display
CCHKRAT   FORM      1        188       Method of Rate Checking
.                                         0 = Check All Rates regardless of
.                                             Claim Typ
.                                         1 = Check only Specific Claim Rates
CSURGIC   DIM       3        189       Surgical Admission Type Code
CACCFEE   FORM      1        192       Accumulation for Fees Invoiced
.                                      0 = Use Admission Type
.                                      1 = Use Ward/Claim code
.                                      2 = Use Ward/Adm.Type
.                                      3 = Use Ward/Claim code/Adm.type
.                                      4 = Use Ward/Admission Type/Claim
.                                      5 = Use Claim Type
CURGLCK   DIM       1        193       U/R Generation lock.  Used to stop
.                                      any other U/R generation.
.                                      "L" means the generation is locked
CDIETCD   FORM      1        194       1 = Using Diet Code
.                                      2 = No
CMEDCAR   FORM      1        195       1 = Using Medicare on IBAPAT89
.                                      2 = No
CGENRUR   FORM      1        196       U/R Generation Flag
.                                      0 = Do not Generate U/R Numbers
.                                      1 = Generate U/R at Admission Time
.                                      2 = Generate U/R at Preadmission Time
CASSOCD   FORM      1        197       1 = Using Associated Doctor
.                                      2 = No
CDIETDF   DIM       3        198       Default Dietary Category
.
.       Note in the AUDITS : 1 = Not Required
.
CAUDA     FORM      1        201       Maintenance Audit ADMISSIONS
CAUDB     FORM      1        202       Maintenance Audit DISCHARGES
CAUDC     FORM      1        203       Maintenance Audit CODES
CAUDD     FORM      1        204       Maintenance Audit DOCTORS
CAUDE     FORM      1        205       Maintenance Audit TRANSFER RECORDS 
CAUDF     FORM      1        206       Maintenance Audit Bed Availability
CAUDG     FORM      1        207       Maintenance Audit GOVERNMENT
CAUDH     FORM      1        208       Maintenance Audit HEALTH FUND
CAUDI     FORM      1        209       Maintenance Audit ITEM CODES
CAUDJ     FORM      1        210       Maintenance Audit INSURANCE
CAUDK     FORM      1        211       Maintenance Audit PRA
CAUDL     FORM      1        212       Maintenance Audit GROUP CODES
CAUDM     FORM      1        213       Maintenance Audit MASTER INDEX
CAUDN     FORM      1        214       Maintenance Audit Nursing
CAUDO     FORM      1        215       Maintenance Audit OPERATIONS
CAUDP     FORM      1        216       Maintenance Audit Rates Table
CAUDQ     FORM      1        217       Maintenance Audit RATE CHANGE AUDIT
CAUDR     FORM      1        218       Maintenance Audit Misc Charges
CAUDS     FORM      1        219       Maintenance Audit Allowance
CAUDT     FORM      1        220       Maintenance Audit THEATRE FEES
CAUDU     FORM      1        221       Maintenance Audit ENQUIRY SECURITY
CAUDV     FORM      1        222       Maintenance Audit BED FEE
CAUDW     FORM      1        223       Maintenance Audit WARD AUDIT
CAUDX     FORM      1        224       Maintenance Audit EDI
CAUDY     FORM      1        225       Maintenance Audit WARD RATE FILE 
CAUDZ     FORM      1        226       Maintenance Audit DISEASE
.
CLETTOP   FORM      2        227       Default Top Margin for letters
CLETTOA   FORM      2        229       Default Date to Address gap for letters
CLETTOS   FORM      2        231       Def. Address to Salutation gap to letters
CLETTOT   FORM      2        233       Def. Salutation to Text gap for letters
CMDISP    DIM       1        235       Prefix for a Primary Disease
CMDISS    DIM       1        236       Prefix for a Sequela Disease
CMDISC    DIM       1        237       Prefix for a Complication Disease
CMDISA    DIM       1        238       Prefix for a Associated Disease
CAUDA2    FORM      1        239       Directorate Audits.
PTCNINVN  FORM      2        240       No of Lines of Invoice body
PTCNEFLG  FORM      1        243       Flag to indicate errors in HCS Data Run
CHOSPNUM  FORM      2        244       Unique Hosp Index (from Hosp. file)
CSRCHDRG  FORM      2        246       Day Range for D.O.B. in surname searches
CSRCHYRG  FORM      2        248       Year Range for D.O.B. in surname searches
CAUDA1    FORM      1        250       Using Alerts Audit 1 = No
.
.End of Record               251
+
.*******************************************************************************
.*        PATCONFD.INC : Sectors 11-12    (EXTRACTION FILE DATES)              *
.*                       Extractions  1- 9 : Sector 11                         *
.*                       Extractions 10-16 : Sector 12                         *
.*******************************************************************************
ETABPS    FORM      3                  Tab Position of Extraction
.                                         (MULTS OF 30 -29)
.                                      Eg... EXT 4 = TABPOS 4 X 30 - 29 = 91
.                                      Starts again for EXT 9-16
EDATE     DIM       8                  Extraction Creation Date       (CCYYMMDD)
EFDATE    DIM       8                  Extract From Date              (CCYYMMDD)
ETDATE    DIM       8                  Extract To Date                (CCYYMMDD)
EDOPERS   FORM      6                  Number of Operations
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 13     (HOSPITAL ADDRESSES)                    *
.*******************************************************************************
CHADD1    DIM       30         1       Hospital Address 1
CHADD2    DIM       30        31       Hospital Address 2
CHPOST    DIM       4         61       Hospital Postcode
CHPADD1   DIM       30        65       Hospital Postal Address 1
CHPADD2   DIM       30        95       Hospital Postal Address 2
CHPPOST   DIM       4        125       Hospital Postal Postcode
CHTELEB   DIM       12       129       Hospital Telephone Number
..(spare) DIM       2        141       (was CTRKPG F1 & CTRKPRT F3)
CSIZLAB   FORM      1        143       Label Size
.                                         1 = Small (37 characters separation)
.                                         2 = Wide  (42 characters separation)
.       Management Analysis Generation
.
COPRSIZ1  FORM      5        144       Operations less than $X1
COPRSIZ2  FORM      5        149       Operations between $X1 and < $X2
.
.       Medical Records Flags
.
CUSEMBS   FORM      1        154       Recording of MBS Codes
.                                        0 = Do not use at all
.                                        1 = Copy from Invoice - No Maintenance
.                                        2 = Copy from Inv - Maintenance Allowed
.                                        3 = No copy from Inv - Maint. Allowed
..(moved) DIM       8        155     was CMENUREC - Medical Records Program Name
BEDTYP    DIM       3        163       Type of Bed
UROPT     FORM      1        166       Patient Label U/R Option
.                                      0 = With U/R, 1 = Without U/R
BRSTAY1   FORM      5        167       First  Breakup Length of Stay (DAYS)
BRSTAY2   FORM      5        172       Second Breakup
BRSTAY3   FORM      5        177       Third  Breakup
.
.       Operator Error Correction variables
.
CERRSEC   FORM      1        182       Top Security Level
CERRDAY   FORM      1        183       No. of Days for Date Change Range
CERRAUD   FORM      1        184       Audit file Deletion Flag
.                                         0 = Treat as a normal Audit file
CATBLAY   FORM      1        185       Aged Trial Balance Layout
.                                         0 = Normal Full Report
.                                         1 = W.C.H. Full Report
.                                         2 = Mercy  Full Report
.                                         3 = St.Andrews (Ipswich) Full Report
.                                         4 = Melbourne Clinic Full Report
.                                         5 = Healthscope
.                                         6 = Export Only
CMBSOPR   FORM      1        186       MBS/ICD9 Operation Flag
.                                         0 = Use ICD9 in Management Analysis
.                                         1 = Use MBS in Management Analysis
CUSEHCS   FORM      1        187       Using HCS system of sending to H.D.P. ?
.                                         0 = No, 1 = Yes
CMABINS   DIM       6        188       Insurance code for M.A.B.
CVETINS   DIM       6        194       Insurance code for Veteran Affairs
CDOCVMP   FORM      1        200       Use "Doctor" or "V.M.P." in Doctor reps
.                                         0 = Doctor, 1 = V.M.P.
CNDOCLB   FORM      2        201       Number of Doctors Labels to print
CHCSUNIQ  FORM      8        203       Transaction number of HCS Audit files
CINV1ST   FORM      1        211       1st of Month Inv to go in previous mth ?
.                                         0 = No, 1 = Yes
CDOCSLB   FORM      1        212       Doctor Label Size
.                                         1 = Small (32 characters separation)
.                                         2 = Wide  (42 characters separation)
CHCSCOD   DIM       3        213       H.C.S. Hospital Code
.
.       User Defined Fields in Admission Record
.
CUSR1     FORM      1        216       1 = Using User Defined Field 1
.                                      2 = No   (Admission file)
CUSRDS1   DIM       12       217       Description for User Defined Field 1
CUSR2     FORM      1        229       1 = Using User Defined Field 2
.                                      2 = No   (Admission file)
CUSRDS2   DIM       12       230       Description for User Defined Field 2
CCLMCHN   FORM      1        242       1 = Chain to Claim Maint from Admission
.                                      2 = No
CACCLSS   FORM      1        243       1 = Using Account Classification Field
.                                      2 = No
CHCS      FORM      1        244       1 = Collecting H.C.S. Data
.                                      2 = No
CHOSTYP   FORM      1        245       Hospital Type
.                                         0 = Private, 1 = Public, 9 = Other
.                                         Note: "9" added for HosClaims although
.                                               it is not currently used
..(moved) DIM       4        246     was UPMONTH - Next Monthly Update
.
.End of Record               250
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 14     (INVOICE MESSAGES)                      *
.*******************************************************************************
CNOCLMS   DIM       75         1       Invoice Claim Message Line 1
CINMES1   DIM       60        76       Invoice Message 1
CINMES2   DIM       60       136       Invoice Message 2
..(moved) DIM       8        196     was CMENUDOC - Doctors Menu Program
..(moved) DIM       6        204     was CHCSDTE - Starting Date for HCS data (YYMMDD)
CHCSNAM   FORM      1        210       1 = Name include in HCS Transmission
.                                      2 = No
..(moved) DIM       8        211     was CMENUHCS - HCS Menu Program
..(moved) DIM       8        219     was CMENUMRC - Cash Receipts Menu Program
CIDLAY    FORM      1        227       Id Sheet Layout
.                                      0 = W.C.H.
.                                      1 = St. Andrews (M)
.                                      2 = St. Andrews (R)
.                                      3 = H.O.A.
.                                      4 = Modbury
.                                      5 = Melbourne Clinic
.                                      6 = User Defined
.                                      7 = H.C.A.
CINVFF    FORM      1        228       Formfeed after each invoice ?
.                                         1 = Yes, 2 = No
CUSMAN1   FORM      1        229       User Defined Field 1 mandatory ?
.                                         1 = Yes, 2 = No   (Admission file)
CUSMAN2   FORM      1        230       User Defined Field 2 mandatory ?
.                                         1 = Yes, 2 = No   (Admission file)
CATDMAN   FORM      1        231       Attending Doctor mandatory ?
.                                         1 = Yes, 2 = No   (Admission file)
CDOCLLN   FORM      1        232       Number of lines on Doctors labels
..(moved) DIM       6        233    was CHCSST - Start date for current HCS run
..(moved) DIM       6        239    was CHCSED - End date for current HCS run
CMAXINV   FORM      3        245       Max. No. of days allowed on one invoice
CURDEL    FORM      1        248       1 = Keeping PMI Deletions Audit
.                                      0,2 = No
CURCHG    FORM      1        249       1 = Keeping UR Number Change Audit
.                                      0,2 = No
.End of Record               250
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 15    (MEDICAL SERVICES iNVOICE MESSAGES)      *
.*******************************************************************************
CMSINV1   DIM       60        1        Invoice Message Line 1
CMSINV2   DIM       60       61        Invoice Message Line 2
CMSINV3   DIM       60       121       Invoice Message Line 3
..(moved) DIM       6        181     was CFEEMDT - Fee's Invoice Date
CBOOKG    FORM      1        187       Running Booking System ?
.                                         1 = Yes, 2 = No
CMATRN    FORM      1        188       Running Maternity System ?
.                                         1 = Yes, 2 = No
CTHETR    FORM      1        189       Running Theatre System ?
.                                         1 = Yes, 2 = No
CKMBS     FORM      1        190       0 = Free Format Diagnosis
.                                      1 = Keyin MBS Item diagnosis
.                                      2 = Keyin ICD9 diagnosis
CMUSR1    FORM      1        191       1 = Using User Defined Field 1
.                                      2 = No    (Master file)
CMUSDS1   DIM       12       192       Description for User Defined 1
CMUSR2    FORM      1        204       1 = Using User Defined field 2
.                                      2 = No    (Master file)
CMUSDS2   DIM       12       205       Description for User Defined 2
CMUSR3    FORM      1        217       1 = Using User Defined field 3
.                                      2 = No    (Master file)
CMUSDS3   DIM       12       218       Description for User Defined 3
CMUSMAN1  FORM      1        230       User Defined Field 1 mandatory ?
.                                         1 = Yes, 2 = No   (Master file)
CMUSMAN2  FORM      1        231       User Defined Field 2 mandatory ?
.                                         1 = Yes, 2 = No   (Master file)
CMUSMAN3  FORM      1        232       User Defined Field 3 mandatory ?
.                                      1 = Yes, 2 = No      (Master file)
CUSR3     FORM      1        233       1 = Using User Defined Field 3
.                                      2 = No   (Admission file)
CUSRDS3   DIM       12       234       Description for User Defined 3
CUSMAN3   FORM      1        246       User Defined Field 3 mandatory ?
.                                         1 = Yes, 2 = No   (Admission file)
CSTDOWN   FORM      1        247       Automatic stepdown ?
.                                         1 = Yes, 2 = No
CBFXITM   FORM      1        248       Fixed Charge Items in Batch total ?
.                                         1 = Yes, 2 = No
CRDRTYP   FORM      1        249       Referring Doctor free format ?
.                                         1 = Yes, 2 = No
.End of Record               250
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 18     (MEDICAL SERVICES GENERAL)              *
.*                       Medical Services Invoice Messages : Sector 15         *
.*******************************************************************************
..(moved) DIM       8          1     was CMENUMED - Medical Services Prog.Name
CMEXTINV  FORM      8          9       Next Invoice Number
CUSR4     FORM      1         17       1 = Using User Defined Field 4
.                                      2 = No   (Admission file)
CUSRDS4   DIM       12        18       Description for User Defined 4
CUSMAN4   FORM      1         30       User Defined Field 4 mandatory ?
.                                         1 = Yes, 2 = No   (Admission File)
CUSR5     FORM      1         31       1 = Using User Defined Field 5
.                                      2 = No   (Admission file)
CUSRDS5   DIM       12        32       Description for User Defined 5
CUSMAN5   FORM      1         44       User Defined Field 5 mandatory ?
.                                         1 = Yes, 2 = No   (Admission File)
CUSR6     FORM      1         45       1 = Using User Defined Field 6
.                                      2 = No   (Admission file)
CUSRDS6   DIM       12        46       Description for User Defined 6
CUSMAN6   FORM      1         58       User Defined Field 6 mandatory ?
.                                         1 = Yes, 2 = No   (Admission File)
CUSR7     FORM      1         59       1 = Using User Defined Field 7
.                                      2 = No   (Admission file)
CUSRDS7   DIM       12        60       Description for User Defined 7
CUSMAN7   FORM      1         72       User Defined Field 7 mandatory ?
.                                         1 = Yes, 2 = No   (Admission File)
CDUSR1    FORM      1         73       1 = Using User Defined Field 1
.                                      2 = No      (Discharge file)
CDUSDS1   DIM       12        74       Decription for User Defined 1
CDUSMAN1  FORM      1         86       User Defined Field 1 mandatory ?
.                                         1 = Yes, 2 = No   (Discharge File)
CDUSR2    FORM      1         87       1 = Using User Defined Field 2
.                                      2 = No      (Discharge file)
CDUSDS2   DIM       12        88       Decription for User Defined 2
CDUSMAN2  FORM      1        100       User Defined Field 2 mandatory ?
.                                         1 = Yes, 2 = No   (Discharge File)
CDUSR3    FORM      1        101       1 = Using User Defined Field 3
.                                      2 = No      (Discharge file)
CDUSDS3   DIM       12       102       Decription for User Defined 3
CDUSMAN3  FORM      1        114       User Defined Field 3 mandatory ?
.                                         1 = Yes, 2 = No   (Discharge File)
CDUSR4    FORM      1        115       1 = Using User Defined Field 4
.                                      2 = No      (Discharge file)
CDUSDS4   DIM       12       116       Decription for User Defined 4
CDUSMAN4  FORM      1        128       User Defined Field 4 mandatory ?
.                                         1 = Yes, 2 = No   (Discharge File)
CDUSR5    FORM      1        129       1 = Using User Defined Field 5
.                                      2 = No      (Discharge file)
CDUSDS5   DIM       12       130       Decription for User Defined 5
CDUSMAN5  FORM      1        142       User Defined Field 5 mandatory ?
.                                         1 = Yes, 2 = No   (Discharge File)
CLOWMBS   FORM      5        143       Low MBS Fee
CLOWADM   DIM       3        148       Admission type for Low MBS
CHIGHMBS  FORM      5        151       Highest MBS Fee
CHIGHADM  DIM       3        156       Admission Type for highest MBS
CTOPADM   DIM       3        159       Admission Type after highest MBS
.
.         Patient Billing G/L interface parameters
.
CGLIND    FORM      1        162       Running G/L interface ?
.                                         0 = No, 1 = Yes
CGLPATH   DIM       20       163       Path of G/L data directory
CGLDISS   DIM       5        183       Dissection Code
CGLRESP   DIM       4        188       Responsibility Code
CLHFASS   FORM      8        192       Last HF Assessment Inv No (Inpat only)
..(moved) DIM       4        200     was CFRDTE - Year/Mth of earliest change to
..                                     the Fee's Raised Report
CPRINV    FORM      1        205       1 = Print an Invoice at time of Discharge
.                                      2 = No
CFINAN    FORM      1        206       0 = No Display
.                                      1 = Disp.financial (Rates & Bed Type)
.                                          (on Admission & Transfer templates)
.                                      2 = Disp.Bed Type only
.                                         (on Admission & Transfer templates)
.                                      3 = Disp.Bed Type only
.                                         (on Transfer template only)
CNDLAB    FORM      1        207       No. of Labels across page (Discount)
CDISPRT   FORM      3        208       "  "    "    to prinT
CBTLAB    FORM      1        211       No. of Labels across page (Bed Transfer)
CBTRPRT   FORM      3        212       "  "    "    to print
CPRDLB    FORM      1        215       1 = Print Labels at time of Discharge
.                                      2 = No
CPRBTL    FORM      1        216       1 = Print Labels at time of Bed Transfer
.                                      2 = No
CLHBNO    FORM      8        217       Last HB21 Invoice Number
CCHGST1   DIM       3        225       Charge code for prisoner or non-resident
CCHGST2   DIM       3        228       Charge code for unknown or resident
CNBLAB    FORM      1        231       No. of Labels across page (New Born)
CNBPRT    FORM      3        232        "  "    "    to print
CPRNBL    FORM      1        235       1 = Print Labels at time of
.                                            New Born Input
.                                      2 = No
CMEDIB    DIM       4        236       Medibank private code
..(moved) DIM       6        240     was CMMHDT - YYMMDD Monthly Management
.                                        Hospital of earliest change
CMAXAGE   FORM      3        246       Maximum Age that can be input
CNXBTCH   FORM      3        249       Next batch no. for HDP Trans.(SA)
CDOCBTR   FORM      1        252       1 = Change Attending Doctor at time of
.                                            bed transfer
.                                      2 = No
CJRNDAT   FORM      1        254       Allow to change Journal Date at time
.                                        of input Journal ?
.                                         1 = Yes, 2 = No
CJRNREP   FORM      1        255       Journal Date at time input Journal ?
.                                         1 = Use Keyin date
.                                         2 = Use Current Date
.End of Record               256
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 19     (MEDICAL RECORDS GENERAL)               *
.*******************************************************************************
CSURG1    DIM       9          1       Next U/R Number Range 1 (*JR)
CMURG1    DIM       8         10       Maximum U/R Number Range 1 (*JR)
CSURG2    DIM       9         18       Next U/R Number Range 2 (*JR)
CMURG2    DIM       8         27       Maximum U/R Number Range 2 (*JR)
CSURG3    DIM       9         35       Next U/R Number Range 3 (*JR)
CMURG3    DIM       8         44       Maximum U/R Number Range 3 (*JR)
CSURG4    DIM       9         52       Next U/R Number Range 4 (*JR)
CMURG4    DIM       8         61       Maximum U/R Number Range 4 (*JR)
CIPRG     FORM      1         69       In-Patient System using Range
COPRG     FORM      1         70       Out-Patient System using Range
CAERG     FORM      1         71       A & E System using Range
CNBRG     FORM      1         72       New Born System using Range
CPUSR     FORM      1         73       1 = Using one "P" Disease only
.                                      2 = No
CSUSR     FORM      1         74       1 = Using one "S" Disease only
.                                      2 = No
CCNOTES   DIM       1         75       Case Notes Character
CRUSR1    FORM      1         76        1 = User Defined Field 1
.                                      2 = No
CRDESC1   DIM       20        77       Description for User Defined 1
CRMAN1    FORM      1         97       User Defined Field 1 mandatory ?
.                                         1 = Yes, 2 = No
CRUSR2    FORM      1         98       1 = User Defined Field 2
.                                      2 = No
CRDESC2   DIM       20        99       Description for User Defined 2
CRMAN2    FORM      1        119       User Defined Field 2 mandatory ?
.                                         1 = Yes, 2 = No
CRUSR3    FORM      1        120       1 = User Defined Field 3
.                                      2 = No
CRDESC3   DIM       20       121       Description for User Defined 3
CRMAN3    FORM      1        141       User Defined Field 3 mandatory ?
.                                         1 = Yes, 2 = No
CHUSR1    FORM      1        142       1 = Using Highlight Code 1
.                                      2 = No
CHDESC1   DIM       20       143       Description for Highlight Code 1
CHMAN1    FORM      1        163       Highlight Code 1 mandatory ?
.                                         1 = Yes, 2 = No
CHUSR2    FORM      1        164       1 = Using Highlight Code 2
.                                      2 = No
CHDESC2   DIM       20       165       Description for Highlight Code 2
CHMAN2    FORM      1        185       Highlight Code mandatory 2 ?
.                                         1 = Yes, 2 = No
CHUSR3    FORM      1        186       1 = Using Highlight Code 3
.                                      2 = No
CHDESC3   DIM       20       187       Description for Highlight Code 3
CHMAN3    FORM      1        207       Highlight Code mandatory 3 ?
.                                         1 = Yes, 2 = No
CPMIAD    FORM      1        208       1 = Using PMI Audit
.                                      2 = No
CSRESP    FORM      1        209       1 = Using self for person resp. for acct.
.                                      2 = No
CPCFORM   FORM      1        210       Format of patient condition
.                                      0 = Free Format
.                                      1 = Codes file (Category CO)
CPCINLE   FORM      1        211       Patient condition in IBAHOS59 ?
.                                      0 = No, 1 = Yes
CFEETYP   FORM      1        212       Type of inpatient daily charge
.                                      0 = Using PATBFEE1
.                                      1 = Using PATRATE1
.                                      2 = Using PATNZRA1
.                                      3 = Using PATWLRA1
.                                      4 = Using PATBCHA1
.                                      5 = Using NZPBFEA1 - NZ Private    
.                                      6 = Using PATSCFA1
.                                      7 = No longer used
.                                      8 = Not Charging
.                                      9 = Using PATBFEE1 - Johns Hopkins
.
CDYCASE   FORM      1        213       1 = Day Case automatic stepdowns
.                                      0 = No
CWRDSCN   FORM      1        214       1 = Do only supplied ward in scan
.                                      0 = Do all wards in ward/bed scan
CMCNOHF   FORM      1        215       Health Funds in Misc. Charges
.                                      0 = Health Fund field in maintenance
.                                      1 = No H.F. fields in maintenance
CINVRIP   DIM       3        216       In-Patient System using Inv range
CINVRAE   DIM       3        219       Acc & Emg System using Inv range
CINVROF   DIM       3        222       Other Fin System using Inv range
CSALIAS   FORM      1        225       Keep the old surname as an alias
.                                        if the surname is changed ?
.                                         0 = No, 1 = Yes, 2 = Automatic
..(moved) DIM       8        226     was CMENUBIL - Menu Pgm for Patient Billing
..(moved) DIM       8        234     was CMENUHOS - Menu Pgm for Pat Sys Managmt
CTOTADM   FORM      8        242       Total no. of admissions before
.                                        the system installed
CPMS59    FORM      1        250       Discharge Diagnostic Report format (using
.                                      different User Defined field for Re-Adm.)
.                                      1 = Southland,  2 = Wellington/Others
. End of Record              251
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 20                                             *
.*******************************************************************************
CMUSR4    FORM      1          1       1 = Using User Defined Field 4
.                                      2 = No   (Master file)
CMUSDS4   DIM       12         2       Description for User Defined 4
CMUSR5    FORM      1         14       1 = Using User Defined field 5
.                                      2 = No     (Master file)
CMUSDS5   DIM       12        15       Description for User Defined 5
CMUSR6    FORM      1         27       1 = Using User Defined field 6
.                                      2 = No     (Master file)
CMUSDS6   DIM       12        28       Description for User Defined 6
CMUSMAN4  FORM      1         40       User Defined Field 4 mandatory ?
.                                         1 = Yes, 2 = No   (Master file)
CMUSMAN5  FORM      1         41       User Defined Field 5 mandatory ?
.                                         1 = Yes, 2 = No   (Master file)
CMUSMAN6  FORM      1         42       User Defined Field 6 mandatory ?
.                                         1 = Yes, 2 = No   (Master file)
..(moved) DIM       6         43     was PTCFEEOF - From Date for Fees Inv. (Other financial)
PTCNRESB  FORM      1         49       Resubmit NHSC for PAT06 Quote#6827
.                                         0 = No, 1 = Yes
PTCNADBF  FORM      1         50       Automatic use of defaults for PATBFEE ?
.                                         0 = No, 1 = Yes
PTCNPRSB  FORM      1         51       Using PATBFEE for PRS validation ?     
.                                         0 = No, 1 = Yes
PTPCLRES  FORM      1         52       Person Responsible for a/c for Patients
.                                      with Claims
.                                         0 = Insurance company (WC,MAB,VET)
.                                         1 = Patient
.                                         2 = Person Resp. for a/c as p.r.f.a.
.                                         3 = Insurance detail of WC if accepted
PTCNPRS1  DIM       2         53       PRS report code for 1st request
..(moved) DIM       8         55     was PTCNRNG1 - PRS 1st rpt request date frm
PTCNPRS2  DIM       2         63       PRS report code for 2nd request
..(moved) DIM       8         65     was PTCNRNG2 - PRS 2nd report request date range
PTCNDEPM  FORM      1         73       Department mandatory ?
.                                         0 = No, 1 = Yes
PTCNVALD  FORM      1         74       Validate Department against Doctor Type ?
.                                         0 = No, 1 = Yes
PTCNCHDP  FORM      1         75       Change Department in Bed Transfers ?
.                                         0 = No, 1 = Yes
PTCNMSDF  FORM      1         76       Using PATMSDFD file ?
.                                         0 = No, 1 = Yes
PT3BHOSP  FORM      1         77       Include days of hospitalization to
.                                      3B Certificate pending. 0 = No, 1 = Yes.
PTCNALLC  FORM      1         78       Open all Clinics in IBAOUT66.PBL ?
.                                        1 = Yes,  2 = No
PTCNHSSN  FORM      8         79       Last HSS Tape Number For New Zealand
PTCNBRD   DIM       4         87       Board Number
PTCNHSEM  FORM      1         91       HSS Extract Method
.                                         0 = Date of Coding
.                                         1 = Discharge Date/Coding
.
.*********  N. B. **********
. The age breakup variables are right justified. 
.        If the rightmost character is a D then the age breakup starts/ends 
.at XX days old where XX is the other 2 characters
.        If the rightmost character is a M then the age breakup starts/ends 
.at XX months old where XX is the other 2 characters
.        If the rightmost character is a number then the age breakup 
.starts/ends at XXX years old where XXX is a number from 0 - 999
.
PTCNAF01  DIM       3         92       From Age breakup 1
PTCNAF02  DIM       3         95       From Age breakup 2
PTCNAF03  DIM       3         98       From Age breakup 3
PTCNAF04  DIM       3        101       From Age breakup 4
PTCNAF05  DIM       3        104       From Age breakup 5
PTCNAF06  DIM       3        107       From Age breakup 6
PTCNAF07  DIM       3        110       From Age breakup 7
PTCNAF08  DIM       3        113       From Age breakup 8
PTCNAF09  DIM       3        116       From Age breakup 9
PTCNAF10  DIM       3        119       From Age breakup 10
PTCNAF11  DIM       3        122       From Age breakup 11
PTCNAF12  DIM       3        125       From Age breakup 12
PTCNAT01  DIM       3        128       To Age breakup 1
PTCNAT02  DIM       3        131       To Age breakup 2
PTCNAT03  DIM       3        134       To Age breakup 3
PTCNAT04  DIM       3        137       To Age breakup 4
PTCNAT05  DIM       3        140       To Age breakup 5
PTCNAT06  DIM       3        143       To Age breakup 6
PTCNAT07  DIM       3        146       To Age breakup 7
PTCNAT08  DIM       3        149       To Age breakup 8
PTCNAT09  DIM       3        152       To Age breakup 9
PTCNAT10  DIM       3        155       To Age breakup 10
PTCNAT11  DIM       3        158       To Age breakup 11
PTCNAT12  DIM       3        161       To Age breakup 12
PTRESDAY  FORM      1        164       Reset day count for stepdown
.                                         1 = Yes, 0 = No.
PTCNDFBO  FORM      1        165       Default keyins in Adm Prgm to Bookings?
.                                         0 = No,  1 = Yes
PTCNTACP  DIM       20       166       T.A.C. Provider number (for patient inv.)
PTCNUCSL  FORM      1        186       Using Case Note Location file
.                                         0 = No,  1 = Yes
PTMISTAT  FORM      1        187       Parameter for last column of IBAPMS83
.                                         0 = to print operation main theatre
.                                         1 = to print separation bed days
PTCNIREF  FORM      1        188       Input referral details in IBAPMS03 ?
.                                         0 = No,  1 = Yes
PTCNBRUS  FORM      1        189       Billing Rus interface in IBAPMS03 ?
.                                         0 = No,  1 = Yes
PTCNIR31  FORM      1        190       Input referral details in Admissions ?
.                                         0 = No,  1 = Yes
PTCECODE  FORM      1        191       Mandatory 'E' Code edit check ?
.                                         0 = No, 1 = Yes
PTALRH31  FORM      1        192       Input Alert thru IBAHOS31/PAT31?
.                                         0 = No, 1 = Yes
PTCNDCLM  DIM       3        193       Default claim code for charging
.                                         Used by PATBFE, PATTFE, PATMCH, AAEMCH
PTCNUCRD  FORM      1        196       Using card information ?
.                                         0 = No, 1 = Yes
PTCNUFML  FORM      1        197       Using family id ?
.                                         0 = No, 1 = Yes
PTCNPIOP  FORM      1        198       Print invoice options
.                                         0 = No cash receipt option
.                                         1 = Patient cash receipting option
PTCNBCUT  DIM       4        199       Starting date for board charging (MMDD)
PTCNBDOM  FORM      1        203       Default board (HF) based on domicile ?
.                                         0 = No, 1 = Yes
PTCNDKCL  DIM       3        204       Default claim code for keyins
PTCNCDEF  FORM      1        207       Default card details on input ?
PTCNSTMS  FORM      1        208       Print Patient/HF portion on Statement ?
.                                         0 = No, 1 = Yes
PTCNSCLS  FORM      1        209       Suggested Classification using
.                                         0 = highest MBS
.                                         1 = highest Amount
PTCNMEDC  FORM      1        210       Send Medicare number for PRS2 (Y/N)?
.                                         0 = No, 1 = Yes
PTCNCNDY  FORM      1        211       When to reset day count for PATBFEFD ?
.                                         0 = On admission type changes
.                                         1 = Never
PTCNDOOP  FORM      1        212       Doller figure to put on operation report
.                                      in IBAPAT93
.                                         0 = All Charges
.                                         1 = Theatre Charges only
PTCNDPCN  FORM      1        213       Display patient condition in BIL89?
.                                         0 = No, 1 = Yes
PTCNSQD3  FORM      1        214       Supress "?" on User Defined field "D3"?
.                                         0 = No, 1 = Yes
PTCNSQU3  FORM      1        215       Supress "?" on User Defined field "U3"?
.                                         0 = No, 1 = Yes
PTCNCSCP  DIM       6        216       Community Service Card Prefix
.
PTINSCER  FORM      1        222       Print insurance invoices on certificate 
.                                      of hospitalisaton.
.                                         0 = No
.                                         1 = Yes
PTCNLNFF  FORM      1        223       No of lines on free format labels
.                                         Must be >= 5 or <= 8
PTCNCHFF  FORM      1        224       Size of free format labels
.                                         0 = 38 Chars.   1 = 33 Chars.
PTCNNMDX  DIM       12       225       Description for U/R NMPI link
PTCNNULU  FORM      1        237       Notify user of U/R Number Link ?
.                                         0 = No, 1 = Yes
PTCNURCO  FORM      1        238       Using U/R level comments?
.                                         0 = No, 1 = Yes
PTCNMXCH  FORM      8.2      239       maximum charge for a patient
PTCNH82W  FORM      1        250       Print no statistics wards for IBAHOS82 ?
.                                         0 = No, 1 = Yes
.End of record               251
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 59                                             *
.*******************************************************************************
CDLSTEP   FORM      1          1       Discount/Allowance stepdowns ?
.                                         0 = No, 1 = Yes
C3BDAYS   FORM      3          2       Max Days of breaks b/w visits for 3B Cert
CREMINV   FORM      1          5       Remove zero amounts on invoice pending ?
.                                         0 = No, 1 = Yes
CLUNTNO   FORM      1          6       Using Clinic Unit Number ?
.                                         0 = No, 1 = Yes
PTCNIBED  FORM      1          7       Adjusting Statistics for inactive beds
.                                      0 = Don't Adjust Bed Statistics
.                                      1 = Adjust Bed Statistics
.                                      2 = Ask at the time of closing to adjust
.                                          statistics for that ward
PTCN3BFA  DIM       3          8       Action code for 3b Cert. Future Action
.                                          - (Cat.FA)
PTCN3BDY  FORM      3         11       No.of Days notice for 3B Expiry
.
..(spare) DIM       8         15     was CAEFASS -  **** Spare ****
CFUTINV   FORM      1         23       Future action when printing Invoice ?
.                                         1 = Yes, 2 = No
CFUTENQ   FORM      1         24       Future action when equirying ?
.                                         1 = Yes, 2 = No
CFUTCOM   FORM      1         25       Write Future action to Comments ?
.                                         1 = Yes, 2 = No
BEDCENS   FORM      1         26       Bed Census Report Layout Indic.
.                                         1 = Normal
.                                         2 = Melbourne Clinic
CPERMTH   DIM       6         27       Using the word Period or Month
CPRTREC   FORM      1         33       Print receipts in IBABIL21 ?
.                                         0 = Print, 1 = Don't print
CTYPEUR   FORM      1         34       What type of U/R's are we using ?
.                                         0 = Using NNNNNNNN
.                                         1 = Using  AAANNNC
.                                         2 = Using    ANNNN or   AANNNN
CTYPLAB   FORM      2         35       Type of Label used in Hospital
.                                         0 = A.H.R.
.                                         1 = Epworth
.                                         2 = Mercy
.                                         3 = St. Andrews Melbourne
.                                         4 = St. Andrews War Memorial
.                                         5 = Modbury
.                                         6 = Wellington
.                                         7 = New Zealand
.                                         8 = Bundoora Extended Care
.                                         9 = Anne Caudle Centre
.                                        10 = Hong Kong
.                                        11 = West Gippsland
.                                        12 = MDS
.                                        13 = Dudley
.                                        14 = Templated
.                                        15 = Hawkes Bay
.                                        16 = Mt Alvernia Hospital
.                                        17 = Taranaki
.                                        18 = Port Macquarie
.                                        19 = Greenslopes
.                                        20 = St. Lukes
.                                        21 = Coast Health Care
.                                        22 = St. Vincents Bathurst
.                                        23 = Mersey
.                                        24 = Mercy, Dunedin
.                                        25 = St. Vincents Hospital
.                                        26 = Royal Children's      
.                                        27 = SJOG Geelong
CTYPCHG   FORM      1         37       Charging Set-up
.                                         0 = Priv. Hospital Charge Aust.
.                                         1 = Modbury
.                                         2 = Wellington
CRESIDT   DIM       3         38       Resident Status
CNONRES   DIM       3         41       Non-Resident Status
CYRSRES   FORM      3         44       No. Years non charging
COTHARE   DIM       3         47       Other code for Area
COVRARE   DIM       3         50       Overseas code for Area
COIDINP   DIM       2         53       Operator Id field for Inpatients
COIDAAE   DIM       2         55       Operator Id field for A & E
COIDOUT   DIM       2         57       Operator Id field for Outpatient
CPOSTCD   FORM      1         59       NZ or Australian Post Code Ranges
.                                         0 = Australian
.                                         1 = New Zealand
PTCNUFMS  FORM      1         60       Using FMS system in PAT13 & OPR02 ?   
.                                         0 = No, 1 = Yes(IBA), 2 = Yes(Other)
CHFCOMM   FORM      1         61       Option for Health Fund with comments ?
.                                         0 = No, 1 = Yes
CINVJRN   FORM      1         62       Option for Invoice with Journals ?
.                                         0 = No, 1 = Yes
CFFMORB   FORM      1         63       Allow free format desc in IBAPAT06 ?
.                                         0 = No, 1 = Yes
CUSENOTE  FORM      1         64       Multi-hosp case notes display ?
.                                         0 = No, 1 = Yes
..(moved) DIM       1         65     was .SPARE
CGSTPERC  FORM      3.4       66       GST Percentage
CGSTITEM  DIM       4         74       GST Item code (from patmchgf)
CMERGURS  FORM      1         78       Merging U/Rs in IBAPAT02 ?
.                                         0 = No  - Delete old U/R
.                                         1 = Yes - Associate old U/R to new
CYRESMAN  FORM      1         79       Years Resident mandatory ?
.                                         0 = Not mandatory, 1 = Mandatory
CBIRTHCN  FORM      1         80       Country of Birth mandatory ?
.                                         0 = Not mandatory, 1 = Mandatory
CHOMBAS   DIM       3         81       Home Base site (Cat. U1)
CMERGEUR  FORM      1         84       Merge U/R Save Details
.                                         1 = Save Old UR's Details
.                                         2 = Save New UR's Details
CMORBDTM  FORM      1         85       Oper.Time fields for Morbidity Data Entry
.                                         1 = Operation Time fields Available
.                                         2 = No Oper. Time fields
.                                         0 = Oper. Time fields are Mandatory
CDETENTE  FORM      1         86       IBA/Detente Interface
.                                         0 = Off, 1 = On
CHUTTCN   DIM       4         87       Unique Identifier for Hutt
.                                        hospital Code (microfiche)
CTYPREP   FORM      1         91       Reporting Set-up
.                                         0 = Normal
.                                         1 = Wellington
CDETPATH  DIM       35        92       Path for Detente Audit File
COTHSFN   FORM      1        127       Other financial option in PATSELFN ?
.                                         0 = No, 1 = Yes
CREBPORT  FORM      1        128       Rebate portion reqd flag (not reqd in NZ)
.                                         0 = No, 1 = Yes
CCHGCMN   FORM      1        129       Alter Comments in IBAHOS31/IBAPAT31 ?
.                                         0 = No, 1 = Yes
CADDLAB   FORM      2        130       No. of Additional blank labels to print
CALRDESC  DIM       9        132       Medical Records Alert Description
CPIDCOD   DIM       6        141       Stationary Code for User Def Stationery
PTCNLOS1  FORM      3        147       1st length of stay in PATDASFD
PTCNLOS2  FORM      3        150       2nd length of stay in PATDASFD
PTCNLOS3  FORM      3        153       3rd length of stay in PATDASFD
PTCNELDR  FORM      3        156       Elderly patient age in PATDASFD
PTCNLSR1  FORM      3        159       1st long stay range in clin stats
PTCNLSR2  FORM      3        162       2nd long stay range in clin stats
PTCNLSR3  FORM      3        165       3rd long stay range in clin stats
PTCNLSR4  FORM      3        168       4th long stay range in clin stats
PTCNSTAU  FORM      1        171       Using the New Adm & Dsch stats 1 report ?
.                                         0 = No, 1 = Yes
PTCNNUMM  FORM      1        172       Monthly update of PATNUMFD file ?
.                                         0 = No, 1 = Yes
PTCNNEWS  FORM      1        173       Using the new stats updates ?
.                                         0 = No, 1 = Yes
PTCNNDAT  DIM       8        174       Date for next daily update (CCYYMMDD)
PTCNORNO  FORM      10       182       Last Order Number
PTCNURCF  FORM      1        192       Using Free Format for Urgency ?
.                                         0 = No, 1 = Yes
PTCNRQCF  FORM      1        193       Using Free Format for Requested By ?
.                                         0 = No, 1 = Yes
PTCNDPCF  FORM      1        194       Using Free Format for Department ?
.                                         0 = No, 1 = Yes
PTCNRLAY  FORM      1        195       Medical Record Request Form Layout
.                                         0 = User Defined
PTCNUCOD  DIM       6        196       User Defined Stationery Code for Medical
.                                      Records Request Form
PTCNMRPN  DIM       3        202       Printer for Medical Record Request Form
CDOPANA   DIM       2        205       Category used for Anaesthetic in Day Only
.                                        Procedures Form
PTPMS68F  FORM      1        207       Print Flag for IBAPMS68
.                                         1 = Print Ward (Southland)
.                                         2 = Print Patient Class. (Wellington)
PTWRDLAB  FORM      1        208       Print ward on labels for pre-admission
.                                         0 = No, 1 = Yes
PTCNDAYF  FORM      1        209       Using patdayaf files for statistics ?
.                                         0 = No, 1 = Yes
PTMBSINV  FORM      1        210       No MBS desc to be printed on invoices ?
.                                         0 = No, 1 = Yes
PTPAYRPR  FORM      1        211       Payments total to be deleted
.                                        on reprints ?
.                                         0 = No, 1 = Yes
PTREBRPR  FORM      1        212       Est.Rebate total to be deleted
.                                        on reprints ?
.                                         0 = No, 1 = Yes
PTURLAB   FORM      3        213       Default number of U/R labels to print
PTPRVALS  FORM      1        216       Previous name defaults to an alias
.                                         0 = No, 1 = Yes
PTOCBDAY  FORM      1        217       Occupied bed days for Average L.O.S.
.                                         0 = Bed days in period
.                                         1 = Ward separation bed days
PTMORBDT  FORM      1        218       Operation Date for Morbidity Data Entry
.                                         0 = Operation Date field is Available
.                                         1 = No Oper. Date field
.                                         2 = Oper. Date field is Mandatory
PTCNREPO  FORM      1        219       Reporting option for PRS2
.                                         0 = Full transaction trail
.                                         1 = Warning/Rejections only
PTCNUADT  FORM      1        220       Using Admission/Discharge Transfer
.                                        Destination file ?
.                                         0 = No, 1 = Yes
PTCNBFHD  FORM      1        221       Using Bed Fees HDP Equivalent ?
.                                         0 = No, 1 = Yes
PTCNFNHD  FORM      1        222       Using health fund HDP equivalent ?
.                                         0 = No, 1 = Yes
PTCNVDUC  DIM       1        223       Using VIADUCT (1=Yes, 0=No)
.
PTCNUUNA  FORM      1        224       No longer used (spare)
PTCNUURC  FORM      1        225       Using U/R Number change audit file ?
.                                         0 = No, 1 = Yes
CCARECL   FORM      1        226       Dateable Care Class ?
.                                         0 = No, 1 = Yes
CADMCAT   DIM       3        227       Default Adm. Cat. (CC) for W.Lists HOS31
.                                         0 = No, 1 = Yes
..(moved) FORM      1        230     was PTCNSNDX - Which soundex search using ?
....                                         0 = surname only
....                                         1 = surname and given names
PTCNRGNS  FORM      1        231       Reverse given name search required ?
.                                         0 = No, 1 = Yes
PTHCSDOC  FORM      1        232       HCS Doctor mandatory ?
.                                         0 = No, 1 = Yes
PTCNADOC  FORM      1        233       Allow inactive doctor as Att. Doctor ?
.                                         0 = No, 1 = Yes
PTCNNMPI  FORM      1        234       Link between U/R and NMPI ?
.                                         0 = None
.                                         1 = NMPI number
.                                         2 = Hong Kong Id
.                                         3 = NHS Number
.                                         4 = Singapore Id Number
PTCNPREG  FORM      1        235       Using Patient Registration Screen ?
.                                         0 = No, 1 = Yes
PTCNFFLL  FORM      1        236       Free format last line in U/R Labels ?
.                                         0 = No, 1 = Yes
PTCNLDOC  FORM      1        237       Using Local Doctor (PAT01) ?
.                                         0 = No, 1 = Yes
..(moved) DIM       6        238     was PTCFEEAE - From Date for Fees Inv.(AAE)
..(moved) DIM       6        244     was PTCFEEOP - From Date for Fees Inv.(O/P)
.
. End of Record              250
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 21                                             *
.*******************************************************************************
.
PTCNBABD  FORM      1          1       Baby's Description
.                                        0 = 'Son of' or 'Daughter of'
.                                        1 = 'Baby of'
PTCNOI73  FORM      1          2       Input Oper. Id in Input Newborns (HOS73)
.                                         0 = No, 1 = Yes
PTCNET73  FORM      1          3       Input Ethnicity in Input Newborns (HOS73)
.                                         0 = No, 1 = Yes
PTCNAUNB  FORM      1          4       Enter UR number in BIL02 ?
.                                         0 = No, 1 = Yes
PTCNNCRG  FORM      8          5       Next Cancer Registration No.
PTCNUNAK  FORM      1         13       No longer in use
.                                      Using new address keyin ?
.                                         0 = No, 1 = Yes (GB Mailer)
PTCNCNFA  DIM       30        14       Command name for address keyin
PTCNIDES  FORM      1         44       Print two lines of accommodation (Y/N)?
.                                      0 - Print one line
.                                      1 - Print two lines
PTCNDRSM  FORM      1         45       variable for separation mode in PMS99
.                                         1 = DSTAT, 2 = DDEST
PTCNBAGE  FORM      3         46       No. days for inputting babys weight
.                                         1 = DSTAT, 2 = DDEST
PTCNVDDI  FORM      1         49       View discharge diagnosis in MRT06
.                                         0 = No, 1 = Yes
PTCNTAST  FORM      1         50       Transaction Audit available for one port 
.                                         0 = No, 1 = Yes
PTCNINVL  FORM      2         51       Invoice layout extension variable
.                                      *11 = Holy Spirit                   20
.                                      *12 = Greenslopes                   21
.                                      *14 = Royal Children Hospital (RCH) 23
.                                      *15 = St.Vincent Hospital     (STV) 24
.                                      *16 = Standard/Pendlebury           25
.                                      *18 = HEC                           27
.                                      *19 = West Wimmera                  28
.                                      *22 = Johns Hopkins (v9.07)         31
.                                      *23 = NZ Private (V9.08)            32
.                                      *24 = St. John of God (v9.07)       33
.                                      *25 = Cabrini                       34
.
PTCNRSGS  FORM      1         53       Reverse Surname/Given Name Search
.                                         0 = No, 1 = Yes
PTCNPCKL  FORM      1         54       New Picking List From Surname Search
.                                         0 = No, 1 = Yes
PTCNDOBS  FORM      1         55       DOB Search in KURN
.                                         0 = No, 1 = Yes
PTCNDEFT  FORM      1         56       Default Surname Search Param for new U/R
.                                         0 = No, 1 = Yes
PTCNUAHS  FORM      1         57       Using Waiting list ad-hoc selection 
.                                      routine in OPR40 & WAT30
.                                         0 = No, 1 = Yes
..(moved) DIM       1         58     was - (spare)
.
PTCNWRDS  FORM      1         59       Ward specialities in IBAPAT13       
.                                         0 = No, 1 = Yes
PTCNCCRR  DIM       3         60       Claim Code for Reference Rate (Cat CL)
PTCNCLOR  FORM      1         63       Calculate loss of revenue figures ?
.                                         0 = No, 1 = Yes
PTCNNPDS  FORM      1         64       New Patient Display in WAT30 & OPR40
.                                         0 = No, 1 = Yes
PTCNICDC  FORM      1         65       Type of Disease coding used            
.                                         0=ICD9-CM,  1=ICD9
PTCNABBL  FORM      1         66       Admit by Booking list in HOS31         
.                                         0=No,  1=Yes 
PTCNH59V  FORM      1         67       U/R Number Validation in IBAHOS59      
.                                         0 = Checks Valid U/R Format
.                                         1 = Validates on patma1af
PTCNPALL  FORM      1         68       Print all details in MRT21             
.                                         0=No,  1=Yes 
PTCNDSWP  DIM       30        69       Script for Secretary W.P.
.
PTCNDRGG  FORM      1         99       DRG Grouper to use
.                                         0 = Australian
.                                         1 = RUS
..(moved) FORM      1        100     was PTCN40WD - Print Ward in IBAWAT20
.                                         0=No,  1=Yes
PTCNUDRG  FORM      1        101       Using the Death register ?
.                                         0=No,  1=Yes
PTCNWDTH  DIM       3        102       Canc. code for W/L when die (Cat WR)
PTCNIDTH  DIM       3        105       Canc. code for I/P when die (Cat PC)
PTCNODTH  DIM       3        108       Canc. code for O/P when die (Cat CB)
PTCNBDTH  DIM       3        111       Canc. code for Bkg when die (Cat BC)
PTCNTDTH  DIM       3        114       Canc. code for OPR when die (Cat SC)
PTCNH77U  FORM      1        117       Use UK layout for hos77
.                                         0=No,  1=Yes
PTCNUCEP  FORM      1        118       Using consultant episodes ?
.                                         0 = No  1 = Yes
PTCNRPIK  FORM      1        119       Register patient option in Kurn
.                                         0 = No  1 = Yes
PTCNADDC  FORM      1        120       Using Additional Charging ?
.                                         0 = No  1 = Yes
PTCNUADM  FORM      1        121       Using U/R change for an admission audit?
.                                         0 = No  1 = Yes
PTCNADMB  FORM      1        122       Default for "Admit baby now " IBAHOS73
.                                         0 = No  1 = Yes
PTCNOUTD  DIM       9        123       Outstanding Debt Alert Display
.
PTCNCADD  FORM      1        132       change attending doctor or department
.                                      when re-admitting patients from leave
.                                         0 = No  1 = Yes
PTCNPCSQ  FORM      3        133       Postcode Extrction next File Number
.
PTCNMITM  FORM      1        136       To keyin multiple items for fixed items
PTCN7405  FORM      1        137       Using U/R option for cancelling last
.                                      transfer file record in PAT05
.                                         0 = No  1 = Yes
PTCNNHII  FORM      1        138       Using the NZHIS/IBA Interface ?
.                                         0 = No  1 = Yes
PTCNNHID  DIM       35       139       Directory of FIFO for NZ link
PTCNDONR  FORM      1        174       Using Donor details ?
.                                         0 = No  1 = Yes
PTCNMEDW  FORM      1        175       Using Medical Warnings ?
.                                         0 = No  1 = Yes
PTCNUDNG  FORM      1        176       Can Danger Details be Updated?
.                                         0 = No  1 = Yes
PTCNNSCA  FORM      1        177       National Search Criteria Automatic when
.                                       registration ?
.                                         0 = No  1 = Yes
.                                      (not currently used)   
PTCNMPTR  FORM      2        178       Maximum number of patients returned
.                                       in surname search ?
.
PTCNCDRS  FORM      1        180       Using Coding Restraint (Y/N)
.                                         0 = No  1 = Yes
.
.
PTCNLNCD  FORM      1        181       Load National Details when changing
.                                       donor details ?
.                                         0 = No  1 = Yes
PTCNLP01  FORM      1        182       Load National Details in PAT01 ?
.                                         0 = Do Nothing
.                                         1 = Ask Question
.                                         2 = Load Details Automatically
.
PTCNLH31  FORM      1        183       Load National Details in HOS31 ?
.                                         0 = Do Nothing
.                                         1 = Ask Question
.                                         2 = Load Details Automatically
.
PTCNLO66  FORM      1        184       Load National Details in OUT66 ?
.                                         0 = Do Nothing
.                                         1 = Ask Question
.                                         2 = Load Details Automatically
.
PTCNLA01  FORM      1        185       Load National Details in AAE01 ?
.                                         0 = Do Nothing
.                                         1 = Ask Question
.                                         2 = Load Details Automatically
.
PTCNLW01  FORM      1        186       Load National Details in WAT01 ?
.                                         0 = Do Nothing
.                                         1 = Ask Question
.                                         2 = Load Details Automatically
.
PTCNVP32  FORM      1        187       Display National Visits in IBAPAT32 ?
.                                         0 = No  1 = Yes
PTCNVM21  FORM      1        188       Display National Visits in IBAMRT21 ?
.                                         0 = No  1 = Yes
PTCNUONL  FORM      1        189       Update National Details on line ?     
.                                         0 = No  1 = Yes
PTCNPCON  FORM      1        190       Which person is the patients contact ?
.                                         0 = Next of Kin 
.                                         1 = Emergency Contact
.                                         2 = Nearest Relative
PTCNNHIF  DIM       8        191       NZHIS Interface Master File Name
.
PTCNDBWB  FORM      1        199       Default booking Ward Bed at Admission
.                                         0 = No  1 = Yes
PTCNICRA  FORM      1        200       Indexed Cash Receipts Audit
.                                         0 = No  1 = Yes
PTCNNLIL  FORM      2        201       Number of lines on Inpatient Labels
.
PTCNUABL  FORM      1        203       Using Arm Band Labels
.                                         0 = No  1 = Yes
PTCNAWRN  FORM      1        204       What Alerts system is being used?
.                                         0 = Alerts System Only
.                                         1 = Alerts plus Warnings
.                                         2 = Warnings System Only
PTCNUKEY  FORM      1        205       Unique Key Format for PRS/2
.                                         1 = Base 36
.                                         2 = Episode & Admission number type 1
.                                         3 = Episode & Admission number type 2
PTCNCRRG  DIM       1        206       Current Region for PRS/2
.                                         0 = Barwon/South Western Region      
.                                         1 = Grampians Region                 
.                                         2 = Loddon Mallee Region             
.                                         3 = Hume Region                      
.                                         4 = Gippsland Region                 
.                                         5 = Western Metropolitan Region      
.                                         6 = Northern Metropolitan Region     
.                                         7 = Eastern Metropolitan Region      
.                                         8 = Southern Metropolitan Region     
.                                         9 = Interstate/Overseas              
..(moved) FORM      1        207     was CNSWRACE - (now PNSWRACE)      
.                                         0 = Not used     5 = Use "PUSR5"     
.                                         1 = Use "PUSR1"  6 = Use "PUSR6"     
.                                         2 = Use "PUSR2"  7 = Use "AUSR1"     
.                                         3 = Use "PUSR3"  8 = Use "AUSR2"     
.                                         4 = Use "PUSR4"  
PTCNCRTN  FORM      1        208       User Defined field used for Criterion
.                                         0 = Not used     4 = Use "AUSR4"     
.                                         1 = Use "AUSR1"  5 = Use "AUSR5"     
.                                         2 = Use "AUSR2"  6 = Use "AUSR6"     
.                                         3 = Use "AUSR3"  7 = Use "AUSR7"     
PTCNADMT  FORM      1        209       User Defined field for Intention to 
.                                         Re-Admit < 28 days.
.                                         0 = Not used     5 = Use "DUSR5"     
.                                         1 = Use "DUSR1"  6 = Use "AUSR6"     
.                                         2 = Use "DUSR2"  7 = Use "AUSR7"      
.                                         3 = Use "DUSR3"  8 = Use "Cat VR"
.                                         4 = Use "DUSR4"     
PTCNHOSP  FORM      1        210       PRS2 Hospital Type for Trailer Format
.                                         0 = Private      1 = Public          
PTCNMGUR  FORM      1        211       Look up Merged UR's in IBAPAT32?   
.                                         0 = No, 1=Yes
PTCNLTYP  FORM      1        212       Allow 'L' as a disease type?
.                                         0 = No, 1 = Yes
PTCNNZCD  DIM       1        213       NZHIS Clear Domicile Code on Address Mod
.                                         0 = No, 1 = Yes
PTCNUREA  FORM      1        214       User defined field to be used for
.                                      "Re-admission within 28 days" (IBABIL55)
.                                         1 = AUSR1, ... 7 = AUSR7
PTCNUDIN  FORM      1        215       User defined field to be used for     
.                                      "Discharge Intention" (IBABIL55)
.                                         1 = AUSR1, ... 7 = AUSR7
PTCNDTRF  FORM      1        216       Field option to Transfer to another
.                                      Hospital on discharge.
CMDISL    DIM       1        217       Prefix for disease responsible for 
.                                         Length of Stay
PTCNBWMR  FORM      1        218       Input patient's weight in IBAINP94?
.                                         0 = No, 1 = Yes
PTCNDDCD  FORM      1        219       Default Coding Date to Current in MRT06  
.                                       0 = No, 1 = Yes
.
PTNSWHDP  FORM      1        220       Category to be used for NSW HDP Transm.
.                                         0 = DDEST (DD), 1 = DSTAT (D )
CNSWLOC   FORM      1        221       NSW HDP Locality is taken from :
.                                         1 = PSUBRB, 2 = PADD2
CNSWLNG   FORM      1        222       NSW HDP "Language used at home"
.                                         0 = Not used     
.                                         1 = Use "PUSR1"  5 = Use "AUSR2"     
.                                         2 = Use "PUSR2"  6 = Use "PUSR4"     
.                                         3 = Use "PUSR3"  7 = Use "PUSR5"     
.                                         4 = Use "AUSR1"  8 = Use "PUSR6"     
PTCNEIAS  FORM      1        223       EDI Interface Admission Source
.                                         0 = ASRCE        
.                                         1 = Use "AUSR1"  4 = Use "AUSR4"     
.                                         2 = Use "AUSR2"  5 = Use "AUSR5"     
.                                         3 = Use "AUSR3"  6 = Use "AUSR6"     
.                                                          7 = Use "AUSR7"
PTCNEIOC  FORM      1        224       EDI Interface Occupation       
.                                         0 = Not used     
.                                         1 = Use "PUSR1"  4 = Use "PUSR4"     
.                                         2 = Use "PUSR2"  5 = Use "PUSR5"     
.                                         3 = Use "PUSR3"  6 = Use "PUSR6"     
PTCNEIMO  FORM      1        225       EDI Interface MODE             
.                                      0 = Live, 1 = Test System
PTCNMWAD  DIM       9        226       Medical Warning Alert description
.
PTCNDPL8  FORM      1        235       Print 'DAYPATIENT' on invoice layout 8?
.                                         0 = No, 1 = Yes
PTCNCASP  FORM      1        236       Allow Coding across specialties
.
PTCNPAOF  FORM      1        237       Use "Parent of" as P.R.A. for children
.                                         0 = No, 1 = Yes
PTCNAGEC  FORM      2        238       Age at which patient is no longer a child
.
PTCNEDIF  FORM      7        240       Current file Number for EDI Extract
.
PTCNDCQS  FORM      1        247       Format to display "?" doctor screen in
PTCNSOUC  FORM      1        248      Security on U/R Comments ?
.                                        0 = No, 1 = Yes
PTCNRTWL  FORM      1        249       Option to return patient to W/L in PAT03
.
PTCNDDSD  FORM      1        250       Default Discharge Summary Diagnosis      
.                                       0 = No, 1 = Yes
PTCNATDT  FORM      1        251       Use admissn time field for delivery time
. End of Record              252
+
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 77                                             *
.*******************************************************************************.
PTCNDPRS  FORM      1        1        Using different date range for PRS2 ?
.                                        0 = No, 1 = Yes
PTCNCDAT  DIM       8        2        Effective Date for ICD-10 Coding
PTCNULUE  FORM      1        10       Using Last U/R Entered file (Y/N)
.                                        0 = No, 1 = Yes
PTCNDIRT  FORM      1        11       Using Directorates
.                                        0 = No, 1 = Yes
PTCNPRSL  DIM       8        12       PRS2 Live Date               
.
PTCNUVSM  FORM      1        20       Using Visit Summary option (Y/N)
.                                        0 = No, 1 = Yes
PTCNVSDF  FORM      1        21       Visit Summary display format (MRT21)
.                                        0 = current MRT21 options
.                                        1 = display UK format 
PTCNSVOD  FORM      1        22       Select visits from other Databases (Y/N)
.                                        0 = No, 1 = Yes
PTCNNFAP  DIM       8        23       No Fixed Abode Postcode
PTCNNFAD  DIM       3        31       No Fixed Abode District of Residence
PTCNDORO  FORM      1        34       Security level for D.O.R. keyin     
.
PTCNP68L  FORM      1        35       Format for Pre-Admission Scan             
.                                        0 = Normal Format
.                                        1 = Include Med Alerts & Cat CL
.
PTCNPRS3  FORM      1        36       Using PRS2 Census Report?
.                                        0 = No, 1 = Yes
PTCNDTE3  DIM       8        37       Date of PRS2 Census Report.
.
PTCNNZED  DIM       50       45       Directory for NZ EDI file
.
PTCNDSHL  FORM      1        95       Allow discharge while on leave?
.                                        0 = No, 1 = Yes
PTCNASEC  FORM      1        96       Using Alert Security System ?  
.                                        0 = No, 1 = Yes
PTCNLIFE  FORM      1        97       Using Life Threatening Alerts ?
.                                        0 = No, 1 = Yes
PTCNLFCH  DIM       1        98       Character used for Life Threating Alert?
.
PTCNHKIF  FORM      1        99       Running HK National Interface
.                                        0 = No, 1 = Yes
PTCNDKEY  DIM       20       100      Down Load key for next transfer record
.
PTCNNUMB  FORM      4        120      Number of records to down load
.
PTCNDIRN  DIM       35       124      Directory to copy file to on the IBA Mach
.
PTCNSCPT  DIM       8        159      Script Name to create file
.
..(moved) DIM       1        167    was - (spare)
.
PTCNBRHF  FORM      1        168      Using health fund or board description ?
.                                     0 = Board
.                                     1 = Health fund
PTCNHIDG  FORM      1        169      Automatic generation of H/K National ID
.                                     0 = No, 1 = Yes        
PTCNHIDF  DIM       8        170      Start Range for the generated H/K ID's
PTCNHIDT  DIM       8        178      End Range for the generated H/K ID's
.
PTCNHIDN  DIM       8        186      Next H/K National Id for generation
.
PTCNHKPL  FORM      1        194      HK Version of Pulling List (IBAPMS56)
.
PTCNDLKR  DIM       3        195      Default U/R link reason - cat LU       
.
PTCNPRCW  FORM      1        198      Print closed wards in PAT84
.                                     0 = No, 1 = Yes        
PTCNPCDS  FORM      1        199      Procedure Code Description Type (HOS31)
.                                        1 = Description Only
.                                        2 = Code & Description
PTCNWLDC  FORM      1        200      Option to Put patient back on Waiting List
.                                     after Discharge?        
.                                        0 = No, 1 = Yes        
PTCNIDHD  FORM      1        201      Option for PMI record header 
.                                        0 = Standard 2 line header
.                                        1 = Use new header including I/C No.
PTCNOCSC  DIM       9        202      Alert code4 display description
.
PTCNSMKR  FORM      1        211      Ward/bed scan type
.                                        0 = Display smoker in ward/bed scan
.                                        1 = Display bed type in ward/bed scan
PTCNSUFA  FORM      1        212      Supress Future Action Codes when
.                                     printing statements?
.                                        0 = No, 1 = Yes        
PTCNCRPT  FORM      1        213      Using centralised cash receipting in
.                                     inpatients.
PTCNBTNM  FORM      1        214      When to do bed transfer billing
.
PTCNUVTH  FORM      1        215      Which AUSR field for Unplanned visit to 
.                                     theatre (NSW Health Transmission)
PTCNPALC  FORM      1        216      Which AUSR field for Involvement of 
.                                     Palliative Care Team (NSW Health Trans.)
PTCNFINP  FORM      1        217      Which disch.user defined field for 
.                                     the financial program field of NSW Trans.
.                                     (1 to 5)
PTCNDSDY  FORM      1        218      Messages if DRG not allocated for same day
.                                     0 = No message
.                                     1 = Warn user
.                                     2 = Stop user
PTCNDMSO  FORM      1        219      Messages if DRG not allocated for MSO
.                                     0 = No message
.                                     1 = Warn user
.                                     2 = Stop user
PTCNEDRG  DIM       9        220       ICD9CM Procedure Code to Exclude from DRG
.
PTCNCFDS  DIM       3        229      Default outcome (DSTAT)
.
PTCNTMIN  FORM      1        232      Generate Temp. Invoice at time of 
.                                     discharge
PTCNSTT   FORM      1        233      Can Resident Status (Cat T, PTYPE)
.                                     be changed during normal processing ?
                                          0 = No
                                          1 = Yes
.
PTCNSTP   FORM      1        234      Can Patient Type (Cat P, ACLSS)
.                                     be changed during normal processing ?
                                          0 = No
                                          1 = Yes
.
PTCNSTCL  FORM      1        235      Can Claim Code (Cat CL, ACLAIM)
.                                     be changed during normal processing ?
                                          0 = No
                                          1 = Yes
.
PTCNSTA   FORM      1        236      Can Speciality (Cat A, ATYPE)
.                                     be changed during normal processing ?
                                          0 = No
                                          1 = Yes
.
PTCNSTAC  FORM      1        237      Can Classification (Cat AC, ACLSSFT)
.                                     be changed during normal processing ?
                                          0 = No
                                          1 = Yes
.
PTCNSTHF  FORM      1        238      Can Health Fund (AFUNDH) 
.                                     be changed during normal processing ?
                                          0 = No
                                          1 = Yes
.
PTCNWBHB  FORM      1        239      Use bed type in Ward/Bed History
.
PTCNAXEU  FORM      1        240      Using the Admissions extensions file
.                                     (PATAXEFFD)
.                                        0 = No, 1 = Yes        
.
PTCNMSDS  FORM      1        241      Use original "?" for miscellaneous charges
.                                        0 = No change display by Item
.                                        1 = Display by Descriptions  
.
PTCNPTCQ  FORM      1        242      *** NO LONGER USED ***
.
PTCNCMSX  FORM      1        243      Returning Closest Match in Soundex Search?
.                                        0 = No, 1 = Yes        
PTCNSTDR  FORM      1        244      Can attending doctor
.                                     be changed during normal processing ?
                                          0 = No
                                          1 = Yes
PTCNSTCC  FORM      1        245      Can Care Class 
.                                     be changed during normal processing ?
                                          0 = No
                                          1 = Yes
PTCNSTCS  FORM      1        246      Can Chargeable Status
.                                     be changed during normal processing ?
                                          0 = No
                                          1 = Yes
PTCNSTDC  FORM      1        247      Can Diet Code
.                                     be changed during normal processing ?
                                          0 = No
                                          1 = Yes
PTCNSTDA  FORM      1        248      Can Days Charged Adjustment
.                                     be changed during normal processing ?
                                          0 = No
                                          1 = Yes
PTCNSTST  FORM      1        249      Can Stepdowns
.                                     be changed during normal processing ?
                                          0 = No
                                          1 = Yes
. End of Record              250
.******************************************************************************
.         PATCONFD.INC : SECTOR 79                                            *
.******************************************************************************
.
PTCNTFEM  DIM       2         1       Locking for theatre fee file maintenance  
.                                     Program. IBABIL14
.
PTCNBFEM  DIM       2         3       Locking for Bee Fee file Maintenance
.                                     Program. IBABIL56
.
PTCNWLRM  DIM       2         5       Locking for Wrd Inp. Rates Maintenance
.                                     Program. IBAHMS01
.
PTCNACCM  DIM       2         7       Locking for Account Status Maintenance
.                                     Program. IBAHMS13
.
PTCNBCHM  DIM       2         9       Locking for Inp. Board Charge Maintenance
.                                     Program. IBAHMS15
.
PTCNHKCM  DIM       2        11       Locking for Hong Kong Charge file Maint.
.                                     Program. IBAHMS75
.
PTCNDRGM  DIM       2        13       Locking for Date Range File Maint.
.                                     Program. IBAPMS40
.
PTCNMCHM  DIM       2        15       Locking for Misc. Charge File Maint.
.                                     Program. IBAHOS10
.
PTCNRATM  DIM       2        17       Locking for Rates Table file Maint.
.                                     Program. IBAHOS60
.
PTCNCATM  DIM       2        19       Locking for Catchment Codes Maint.
.                                     Program. IBAHOS66
.
PTCNITMM  DIM       2        21       Locking for Patient Item File Maint.
.                                     Program. IBAPAT14
.
PTCNNZRM  DIM       2        23       Locking for NZ Inp. Rates Maint.
.                                     Program. IBAPMS42
.
..(moved) DIM       2        25     was PTCNTMDM - program locking : IBATEM01
..(moved) DIM       2        27     was PTCNVARM - program locking : IBATEM02
. 
PTCNCHQM  DIM       2        29       program locking : IBAINP23
.
PTCNDRG2  DIM       2        31       program locking : IBAHMS89
.
PTCNSEND  DIM       35       33       EDI Sender
.
PTCNMFEE  FORM      1        68       Accumulation of fees for miscell. charges
.                                       0 = Use group code / item code
.                                       1 = Use claim code / group or item code
PTCNJFEE  FORM      1        69       Accumulation of fees for journals
.                                       0 = Use Journal code
.                                       1 = Use Claim code and Journal code
PTCNOIBN  FORM      5        70       Oracle Interface Last used Batch Number
PTCNDBTR  DIM       4        75       Default Med Rec move reason in Bed Trans
PTCNPREV  FORM      1        79       Using Preadmit using Previous Details  
.                                               0=Yes, 1=No
PTCNQLDB  FORM      1        80       Banding & type of episode for QLD health
.                                     department transmissions
.                                        1 = discharge user defined field 1
.                                        2 = discharge user defined field 2
.                                        3 = discharge user defined field 3
.                                        4 = discharge user defined field 4
.                                        5 = discharge user defined field 5
.                                        6 = Admission type
PTCNGEST  FORM      1        81       Gestation Period                        
.                                         0 = Use "AUSR0"     
.                                         1 = Use "AUSR1"  4 = Use "AUSR4"     
.                                         2 = Use "AUSR2"  5 = Use "AUSR5"     
.                                         3 = Use "AUSR3"  6 = Use "AUSR6"     
.                                         7 = Use "AUSR7"  8 = Use "AUSR8"
.                                         9 = Use "AUSR9"
PTCNDSCI  FORM      1        82       Code used to record discharge intention
.                                       0 = Admission class (Cat P)
.                                       1 = Admission U.D.1 (Cat U1)
.                                       2 = Admission U.D.2 (Cat U2)
.                                       3 = Admission U.D.3 (Cat U3)
.                                       4 = Admission U.D.4 (Cat U4)
.                                       5 = Admission U.D.5 (Cat U5)
.                                       6 = Intended LOS    (Cat VI)
PTCNESTB  DIM       6        83       Establishment number for Tasmanian
.                                     Health Department
PTCNDATB  DIM       3        89       Default admission type for babies in
.                                     IBAHOS73 (Category P)
PTCNOENC  FORM      1        92       Interface to 3M Codefinder
.                                      0 - No Codefinder being used
.                                      1 - 3M Codefinder, PC Bridge interface
.                                      2 - 3M Codefinder, web interface
PTCNAAPE  FORM      1        93        Manual Alloc of prefix for encoder (Y/N)
.                                         0 = No           1 = Yes
PTCNADTT  FORM      1        94        Which AUSR field for admin transfer type
PTCNDSTT  FORM      1        95        Which DUSR field for disch transfer type
PTCNHCPC  FORM      8        96        HCP unique record counter
.PTCNHCPB  FORM      1       104        Admin type or bed type in HCP extract
.                                       <replaced with PTCNHCCC>
PTCNUILH  FORM      1       105        Using Inpatient Letter History File ?
.                                         0 = No           1 = Yes
PTCNDAYM  FORM      2.1     106        Number of Days in the Month
PTCNVADM  FORM      2       110        Validation of Adm Details Being Used
.                                         0 = None
.                                         1 = NHS(UK)
PTCNECDF  FORM      1       112        Emergency Contact details default to ..
.                                        0 = Next of Kin (PNKADD1)
.                                        1 = Patient     (PADD1)
PTCNDSPC  FORM      1       113        Default Consultant Spec for Patient Spec
.                                         0 = No           1 = Yes
PTCNPPPT  FORM      1       114       Which AUSR field for private/public pat
PTCNDGUP  FORM      1       115       Write Update PMI details to Datagate 1=Yes
PTCNDGUA  FORM      1       116       Write Update Alias details to Datagate
PTCNDGMU  FORM      1       117       Write Merge U/R details to Datagate
PTCNDGUU  FORM      1       118       Write UnMerge U/R details to Datagate
PTCNEAPD  FORM      1       119       Allocate principal disease code prefix for
.                                     the encoder
.                                               1=Yes, 0=No
PTCNUEOC  FORM      1       120       Using Episodes of Care System
.                                         1 = Yes, 0 = No
PTCNUACC  FORM      1       121       Using ACC System
.                                         1 = Yes, 0 = No
PTCNLMAN  FORM      1       122       Link Visit to an Episode Mandatory
.                                         1 = Yes, 0 = No
PTCNLEDT  DIM       8       123       Date to Link Events From (CCYYMMDD)
PTCNPACC  DIM       6       131       User Defined Stationary Code for ACC Form
PTCNEEOC  FORM      1       137       Enter EOC Details in Emergency
.                                      0 = AAE01 Only
.                                      1 = AAE02 Only
.                                      2 = Both       
PTCNURHA  FORM      1       138       Using RHA Booking System      
.                                         1 = Yes, 0 = No
PTCNDPSI  DIM      20       139       Datagate Inbound Service Name - PMI
PTCNDPSO  DIM      20       159       Datagate Outbound Service Name - PMI
PTCNDGPB  DIM      20       179       Datagate Broadcast Service Name
PTCNDASI  DIM      20       199       Datagate Inbound Service Name - ADT
PTCNDASO  DIM      20       219       Datagate Outbound Service Name - ADT
PTCNDGAD  FORM      1       239       Write Admission details to Datagate
PTCNDGDS  FORM      1       240       Write Discharge details to Datagate
PTCNDGTR  FORM      1       241       Write Transfer details to Datagate
PTCNDGRG  FORM      1       242       Write New Pt. Registration to Datagate
.
PTCNRORC  FORM      1       243       Receipt or Cheque number for PATAUCFD
.                                         0 = Receipt number
.                                         1 = Cheque number
PTCNSTMT  FORM      1       244       Using THC statement layout for HOS20
.                                               0 = No, 1 = Yes
PTCNCHSD  FORM      1       245       Change all trans recs (Spec/Doc) with the 
.                                     same date as the change record in PMS03.
.                                               0=Yes, 1=No
PTCNCHAL  FORM      1       246       Change all transfer records (Spec/Doc) 
.                                     following the change record in PMS03.
.                                               0=Yes, 1=No
PTCNOPHO  FORM      1       247       Perform Operations at Different Hospitals
.                                               1=Yes, 0=No
PTCNIPEN  FORM      1        248       Using Invoice Pending File?
.                                         1 = No, 0 = Yes
PTCNMIC1  FORM      1        249       Preserve Microfilm Address in Merge 
.                                      (1 field)
.                                               1=Yes, 0=No
PTCNMIC2  FORM      1        250       Preserve Microfilm Address in Merge
.                                      (Both fields)
.                                         0 = Don't Preserve Field
.                                         1 = Preserve Old U/R's Field
.                                         2 = Preserve New U/R's Field
. End of Record              251
.*******************************************************************************
.*        PATCONFD.INC : Sector 80                                             *
.*******************************************************************************.
PTCNMEAB  DIM       40       1        Retrieve Medisave Balance for an 
.                                     Admission Number
PTCNMEDB  DIM       40       41       Calculate Doctors Medisave Claimable
.                                     Ammounts by Admission Number
PTCNCQPT  DIM       15       81       Default Patient Cheque Account      
.
PTCNCQDT  DIM       15       96       Default Doctors Cheque Account      
.
PTCNADFP  FORM      3.2     111       Administration Percentage
PTCNADMF  FORM      3.2     117       Administration Minimum Fee
PTCNADXF  FORM      3.2     123       Administration Maximum Fee
.                               
PTCNATCC  DIM       9       129       Attendance Charge Code
PTCNNZUR  FORM      1       138       Storing NMPI in U/R field?
.                                        1=Yes, 0=No
PTCNNUMH  FORM      1       139       Storing NMPI in U/R field = Yes and are 
.                                     using many hospitals/control files ?
.                                        1=Yes, 0=No
PTCNANMA  FORM      1       140       Audit NHI Master File NHIMASFD 1=Yes
PTCNANDN  FORM      1       141       Audit NHI Donor File NHIDNRFD  1=Yes
PTCNDOMF  FORM      1       142       Domicile Validation File 0=Not Available
.                                                              1=Simple Lookup
.                                                              2=Street Lookup
PTCNAURN  FORM      1       143       Method of admit/change patients
.                                        0 = By admission number
.                                        1 = By U/R number
.                                        2 = By either U/R No. or Adm. No.
PTCNRP83  FORM      1       144       Report Layout for IBAPAT83     
.                                        0 = Normal
.                                        1 = Taranaki
PTCNTHCC  DIM       9       145       Theatre Charge Code
PTCNOTCC  DIM       9       154       Other Charge Code
.
PTCNJRTY  DIM       2       163       Journal Type for Patient Refunds
.
PTCNLDDC  DIM       2       165       Doctors Entitlement Ledger
PTCNACDC  DIM       12      167       Doctors Entitlement Account
.
PTCNLDAF  DIM       2       179       Administration Fee Ledger
PTCNACAF  DIM       12      181       Administration Fee Account
.
PTCNLDRF  DIM       2       193       Refund Ledger
PTCNACRF  DIM       12      195       Refund Account  
.
PTCNLDDS  DIM       2       207       Doctors Specialist Fee Ledger
PTCNACDS  DIM       12      209       Doctors Specialist Fee Account
.
PTCNJRCC  DIM       2       221       Journal Type for Cancel Cheques 
.
PTCNNXTT  FORM      6       223       Next Temporary NMPI Number (T-999999)
.                                     (Storing only last 6 numerics)
.
PTCNDATE  FORM      1       229       Using Age Conversion Display in Patient
.                                     Header.
.
PTCNDAY   FORM      3       230       Day Limit for Age Conversion.
.
PTCNWEEK  FORM      3       233       Week limit for Age Display. 
.
PTCNMONT  FORM      3       236       Month Limit for Age Display.
PTCNNWSP  FORM      1       239       Using New Ward/Specialty in IBAPAT13?
.                                               0=No, 1=Yes
PTCNDORP  FORM      1       240       Using DOR in Previous address file ?
.                                               0=No, 1=Yes
PTCNUCGP  FORM      1       241       Using Registered GP changes file?
.                                               0=No, 1=Yes
PTCNALOS  FORM      1       242       Calc ALOS using discharges only in HOS82?
.                                               0=No, 1=Yes
PTCNODRG  FORM      1       243       using online DRG grouper ?          
.
PTCNJADJ  FORM      1       244       Include Journal Adjustments in IBAPAT92? 
.                                               0=No, 1=Yes
PTCNDFCL  FORM      1       245       Default Claim Code from Previous Visit ?
PTCNPBCT  FORM      1       246       Include Claim Code in IBAPAT92
.                                               0=No, 1=Yes
PTCNNTCM  FORM      1       247       SVL mods for PMA27 & PMS29?    
.                                               0=No, 1=Yes
PTCNPEFR  FORM      1       248       Print E.F.R. (Estimated Fund Rebate) on
.                                     reprints of invoices
.                                       0 = Print E.F.R. if not zero
.                                       1 = Print E.F.R. if no health fund or
.                                           insurance payment
.                                       2 = Do not print E.F.R.
PTCNEDTE FORM       1       249       Enter date for every "E" code in MRT06 ?
.                                               0=No, 1=Yes
PTCNHDPS  FORM      1       250       Hospital state for HDP extracts
.                                       0 = Not Australia
.                                       1 = New Zealand
.                                       2 = New South Wales
.                                       3 = Victoria
.                                       4 = Queensland
.                                       5 = South Australia
.                                       6 = Western Australia
.                                       7 = Tasmania
.                                       8 = Northern Territory
.                                       9 = ACT (Australian Capital Territory)
. End of Record             251
.*******************************************************************************
.*        PATCONFD.INC : Sector 88                                             *
.*******************************************************************************
.
PTCNPELT  FORM      1         1       Using Eltron Printer for PMI Labels
.                                         0 = No, 1 = Yes
PTCNIELT  FORM      1         2       Using Eltron Printer for INP Labels
.                                         0 = No, 1 = Yes
PTCNDESI  DIM      20         3       Datagate Inbound Service Name - AAE
PTCNDESO  DIM      20        23       Datagate Outbound Service Name - AAE
PTCNACCF  FORM      1        43       Using UDF for Accident Flag
.                                       L1 - L4 (from outrf1af)
PTCNTHAL  DIM       9        44       Thalassaemia disease code for INP07
PTCNDGAL  FORM      1        53       Write Alert details to Datagate
PTCNDGDN  FORM      1        54       Write Donor details to Datagate
PTCNDGMW  FORM      1        55       Write Med. Warn. details to Datagate
PTCNHADF  DIM       3        56       Default Health Agency (Cat HA)
PTCNI10D  DIM       8        59       Go-Live Date for ICD10 Codes and Mapping
.                                     (CCYYMMDD)
..(moved) DIM       3         67    was - (spare)
..(moved) DIM       8         70    was CSTRTYR - Start of Year (CCYYMMDD)
.
CGADMNO   FORM      8         78      Starting Govern Discharge Admission No.
CDAILYDT  DIM       8         86      Last Date Govt Subsidy Rept run (CCYYMMDD)
CLACDATE  DIM       8         94      Last Acc Date for Old Debts     (CCYYMMDD)
CFEEDT    DIM       8         102     From Date for Fees Invoiced Rep (CCYYMMDD)
UPMONTH   DIM       6         110     Next Monthly Update               (CCYYMM)
CHCSDTE   DIM       8         116     Starting Date for HCS data      (CCYYMMDD)
CHCSST    DIM       8         124     Start date for current HCS run  (CCYYMMDD)
CHCSED    DIM       8         132     End date for current HCS run    (CCYYMMDD)
CFEEMDT   DIM       8         140     Fee's Invoice Date              (CCYYMMDD)
CFRDTE    DIM       6         148     Year/Month of earliest change to  (CCYYMM)
CMMHDT    DIM       8         154     Monthly Management Hosp of earliest change
.                                                                     (CCYYMMDD)
PTCFEEOF  DIM       8         162     From Date for Fees Inv. (Other financial)
.                                                                     (CCYYMMDD)
PTCNRNG1  DIM      12         170      PRS 1st report request date range
.                                                                 (CCYYMMCCYYMM)
PTCNRNG2  DIM      12         182      PRS 2nd report request date range
.                                                                 (CCYYMMCCYYMM)
PTCFEEAE  DIM       8         194      From Date for Fees Invoiced Rept (AAE)
.                                                                     (CCYYMMDD)
PTCFEEOP  DIM       8         202      From Date for Fees Inv. (Outpatient)
.                                                                     (CCYYMMDD)
CRECPNO   FORM     12         210      Next Receipt Number
.                                        If = 0 then manually generated
PTCNCDSC  FORM      1         222      Collecting duration of stay in CCU
PTCN1ATS  FORM      1        223      Allow 1st admin type to be statistical
PTCNEGLD  DIM       8        224      Encoder go-live date for ICD10
PTCNDEBW  FORM      1        232      Don't display encoder interface birth wgt
PTCNADES  FORM      1        233      If new additional casemix charge is zero
.                                     0 = to display daily charge desc.
.                                     1 = to display additional charge desc.
PTCNNCFB  FORM      1        234      Admin type or bed type in NCF extract
.                                        0 - Bed type        1 - Admin type
PTCNADCF  FORM      1        235      Print HFCF in admission programs?
.                                        0 = No, 1 = Yes
PTCNDSCF  FORM      1        236      Print HFCF in discharge programs?
.                                        0 = No, 1 = Yes
PTCNEMPL  DIM       2        237      HDP for Employment status
.                                     U1... U9, V0 - V1 
PTCNOCCP  DIM       2        239      HDP for Occupation
.                                     P1... P6, U1 - U7 
PTCNCSTA  FORM      1        241      HDP for Mental Health Legal Status
.                                     1 = DUSD1 ..... 5 = DUSD5     (D1.. D5)
PNSWRACE  FORM      2        242      User Defined field used for race
.                                         0 = Not used     5 = Use "PUSR5"
.                                         1 = Use "PUSR1"  6 = Use "PUSR6"
.                                         2 = Use "PUSR2"  7 = Use "AUSR1"
.                                         3 = Use "PUSR3"  8 = Use "AUSR2"
.                                         4 = Use "PUSR4"  9 = Use "AUSR3"
.                                                         10 = Use "AUSR4"
.                                                         11 = Use "AUSR5"
.                                                         12 = Use "AUSR6"
.                                                         13 = Use "AUSR7"
.
PTCNCRAY  FORM      1        244      Which UDF for carer availability
.                                       1 = Discharge UDF 1
.                                       2 = Discharge UDF 2
.                                       3 = Discharge UDF 3
.                                       4 = Discharge UDF 4
.                                       5 = Discharge UDF 5
PTCNH7ED  DIM       1        245      Send extra diet codes in ZXV-31
.                                       0 = No
.                                       1 = Yes
PTCNH7VP  DIM       1        246      Send visit based messages for PMI changes
.                                       0 = No
.                                       1 = Yes
PTCNSZSD  DIM       1        247      Send ZSD segment with PMI based messages
.                                       0 = No
.                                       1 = Yes
.
.End of Record               253
.
.******************************************************************************
.*        PATCONFD.INC : Sector 93, 94, 95                                    *
.******************************************************************************
.
.          EXTRS  1-7    Sector 93
.          EXTRS  8-14     "    94 
.          EXTRS 15-16   Sector 95
.
.                                        (MULTS OF 34 )
.                                      Eg... EXT 4 = TABPOS 4 X 34 - 33 = 103
.
EADMNS    FORM      6                  Total Admissions for Extraction file
.
ETPRIMOP  FORM      1                  1 = Yes Primary Operations
.                                      2 = All Operations
ETPRIMDS  FORM      1                  1 = Yes Primary Diseases
.                                      2 = All Diseases
.
EBDAYS    FORM      6                  Total Bed Days
EDCASES   FORM      5                  Total Day Cases
ENETAMT   FORM     12.2                Total Net Amount
.
...NOTE   TOTAL  NUMBER OF OPERATIONS IS IN SECTOR 11-12...EDOPERS
.
.End of Record               250
.
.******************************************************************************
.*        PATCONFD.INC : Sector 95                                            *
.******************************************************************************
PTCNQUOT  FORM      12        153     Next quote number for fees estimation
.<NOTE: DO NOT USE NEXT POSITIONS>
.
.*******************************************************************************
.*        PATCONFD.INC : Sector 98                                             *
.*******************************************************************************
.
PTCNDCRP  DIM       10         1      Description for disease prefix CMDISP
PTCNDCRS  DIM       10        11      Description for disease prefix CMDISS
PTCNDCRC  DIM       10        21      Description for disease prefix CMDISC
PTCNDCRA  DIM       10        31      Description for disease prefix CMDISA
PTCNDCRD  DIM       10        41      Description for disease prefix CMDISD
PTCNDCRO  DIM       10        51      Description for disease prefix CMOPRT
PTCNDCRL  DIM       10        61      Description for disease prefix CMDISL
.
PTCNAFLG  FORM      5         71      Adm. field to capture accident flag
PTCNCLNO  FORM      5         76      Adm. field to capture claim number
PTCNHCOD  DIM       3         81      New H.C.S. Hospital Code (after 1/7/99)
PTCNCSRL  FORM      1         84      Category to be used for Source of Referral
PTCNPSOS  FORM      1         85      Which dsch user def for Pension Status
PTCNCPTH  DIM       35        86      G/L Control File Path
PTCNRQDF  DIM       3        121      Default code for cat RQ in IBAEOC01
PTCNHPCD  DIM       3        124      Default code for health purchaser (cat.HP)
PTCNPMIS  FORM      1        127      Print miscellaneous charges on invoice
.                                     0=No   1=Yes
..(moved) DIM       1        128    was - (spare)
.
PTCNDGST  DIM       1        129      Default "is GST applicable to this event"
.                                     'Y' or 'N'
PTCNAGST  DIM       6        130      GST Code for Accommodation
PTCNPAIH  DIM       6        136      PAT Invoice Header Code (templated)
PTCNPAIT  DIM       6        142      PAT Invoice Tail Code (templated)
.
PTCNINVB  FORM      1        148       Print body of invoice
.                                      0=Portrait 1=Landscape 
.                                      2=Landscape with right hand side of invce
PTCNGDV2  DIM       8        149       Go live date for ICD10 version 2
PTCNBTHN  FORM      8        157       EDI Batch no
PTCNAUED  DIM       60       165       AUS EDI extract directory
.
PTCNPRS4  DIM       2        225       PRS report code for 4th request
PTCNRNG4  DIM      12        227       PRS 4th report request date range
.
PTCNPRS5  DIM       2        239       PRS report code for 5th request
PTCNRNG5  DIM      12        241       PRS 5th report request date range
.
.End of Record               253
.
.*******************************************************************************
.*        PATCONFD.INC : Sector 103                                            *
.*******************************************************************************
.
PTCNCJRN  DIM        3         1      Journal code for Cash Trans.Overpayment
..(moved) DIM       5          4    was PTCNSOLS - no longer used
PTCNSMTH  DIM       6          9      PAT Statement Header - Billing (templated)
PTCNSMTT  DIM       6         15      PAT Statement Tail   - Billing (templated)
PTCNDMX1  FORM      2         21      Patient Day Mix Range 1
PTCNDMX2  FORM      2         23      Patient Day Mix Range 2
PTCNDMX3  FORM      2         25      Patient Day Mix Range 3
PTCNDMX4  FORM      2         27      Patient Day Mix Range 4
PTCNDMX5  FORM      2         29      Patient Day Mix Range 5
PTCNDMX6  FORM      2         31      Patient Day Mix Range 6
PTCNDMX7  FORM      2         33      Patient Day Mix Range 7
PTCNDMX8  FORM      2         35      Patient Day Mix Range 8
PTCNDMX9  FORM      2         37      Patient Day Mix Range 9
PTCNDX10  FORM      2         39      Patient Day Mix Range 10
PTCNDGHA  FORM      1         41      Write Add Health Con. Card to Datagate
.                                       0 = No
.                                       1 = Yes
PTCNDGHD  FORM      1         42      Write Delete Health Con. Card to Datagate
.                                       0 = No
.                                       1 = Yes
PTCNDFIN  FORM      1         43      Day Facility Indicator
.                                      0 = Not Day Facility
.                                      1 = Day Facility
.
PTCNCLMN  DIM        8        44      Next Claim number (Numeric Rigt Just.) HIC
PTCNBTCH  DIM        5        52      Next Batch number (1 alpha 4 numeric) HIC
PTCNMCLM  FORM       3        57      Maximum number of Claims in a batch
PTCNOPND  DIM        3        60      Patient Indicator code for Outpat.(cat GI)
PTCNHICO  DIM       60        63      HIC Extract Outbound Path Parameter
PTCNHICI  DIM       60       123      HIC Extract Inbound Path Parameter
PTCNACGP  FORM       1       183      Display which GP/Practice combos in search
.                                       0 = All 
.                                       1 = Active only
PTCNGHCP  DIM        1       184      Auto Generate Doctor/HCP Codes 0=No 1=Yes
PTCNNHCP  DIM        10      185      Next Doctor/HCP Code
PTCNSHCP  DIM        1       195      Skip Every 10th Doctor/HCP Code 0=No 1=Yes
PTCNCATA  DIM        2       196      Allergy category to send in messages
.                                     H1-H9
PTCNDAYB  DIM        1       198      Bed fee for day discharge
.                                     " " or 0 = Assume no bed fee (standard)
.                                     1 = Yes assume full bed fee
.                                     2 = Partial assumes time determinant
PTCNDAYL  DIM        5       199      No Charge for discharges before 
.                                     (partial)
PTCNDAYG  DIM        5       204      50% disc.for greater than the No charge
.                                     time and less than (partial)
PTCNCHGL  DIM        1       209      Charge bed fee when patient is on leave
.                                     " " or 0 = No 1 = Yes
PTCNRDWN  DIM        2       210      JH-Round invoice total down to nearest 
.                                     cents
PTCNPFSN  DIM        1       212      Using Preferred Surname (Y/N)
.                                      1 = Yes
.                                      0 = No
PTCNPFGN  DIM        1       213      Using Preferred Given Name (Y/N)
.                                      1 = Yes
.                                      0 = No
PTCNHHFT  DIM        1       214       Output Health Fund in patient header
.                                      " " or 0 = No 1 = Yes
PTCNHCLM  DIM        1       215       Output Claim Code in patient header
.                                      " " or 0 = No 1 = Yes
PTCNDGA2  DIM        1       216       Send DG1 segment in A02
.                                      " " or 0 = No 1 = Yes
PTCNCKDG  DIM        1       217       Send Check Digit for U/R in PID-03
.                                      " " or 0 = No 1 = Yes
PTCNUCCP  DIM        1       218       Using CCPS EDI module
.                                      " " or 0 = No 1 = Yes
PTCNSIGL  DIM        1       219       Using System Based G/L Interface 
.                                      " " or 0 = No (patfmsaf)
.                                      1 = Yes (pmsfmsaf)
.                                      2 = Yes - GST & EMR breakdown (pmsfmsaf)
PTCNDEES  DIM        1       220       Change PRFA when Patient Deceased (Y/N)
.                                      1 = Yes
.                                      0 = No
PTCNDDES  DIM        20      221       Description for Deceased Estates
PTCNCLCD  DIM        1       241       Send Claim Code in PV1-20 for HL7 (Y/N)
.                                      " " or 0 = No 1 = Yes
PTCNHL7L  DIM        1       242       Log HL7 Broadcast Messages (Y/N)
.                                      " " or 0 = No/1 = Yes/2 = Segment
PTCNADIG  DIM        1       243       Send Admitting/Presenting Diag. in DG1
.                                      " " or 0 = No
.                                      1 = Yes, using 2 free text lines of
.                                          Presenting Complaint in Emergency
.                                      2 = Yes, using coded Presenting Complaint
.                                          in Emergency
.                                      3 = Yes, coded and 2 free text lines of
.                                          Presenting Complaint in Emergency
.                                      4 = Yes, using 6 free text lines of
.                                          Presenting Complaint in Emergency
.                                      5 = Yes, coded and 6 free text lines of
.                                          Presenting Complaint in Emergency
PTCNNNK1  DIM        1       244       Send non-compliant NK1 segment
.                                      " " or 0 = No 1 = Yes
PTCNWAUC  DIM        1       245       WA HDP Using Contracting ?
.                                      " " or 0 = No 1 = Yes
PTCNLJCD  DIM        2       246       Loss Journal Code
PTCNWJCD  DIM        2       248       Win Journal Code
.
.End of Record               250
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 105                                            *
.*******************************************************************************
.
PTCNACTI  FORM      1          1      Using ACT interface 1=Yes 0=No        
PTCNTORG  FORM      4          2      Time out for patient registraion
PTCNTOSX  FORM      4          6      Time out for surname & sound x   
PTCNTOPQ  FORM      4          10     Time out for patient query       
PTCNTOAP  FORM      4          14     Time out for adding a patient      
PTCNTOUP  FORM      4          18     Time out for updating a patient      
PTCNTOMP  FORM      4          22     Time out for merging a patient      
PTCNINSN  DIM       20         26     Interface inbound service name
PTCNOTSN  DIM       20         46     Interface outbound service name
PTCNUSQL  FORM      1          66     Using SQl Scripts (1=Yes 0 =No)
PTCNLPRO  FORM      1          67     Load Prosthetics in IBAADT83
PTCNMBSC  FORM      1          68     Load MBS Items from ascii file IBAPAT14
PTCNPLFI  FORM      1          69     Print Lumpsum on Fees Invoiced
PTCNSRVY  FORM      1          70     Participate in survey
PTCNCMAU  FORM      2          71     Which Adm UDF for casemix matrix
PTCNCMDU  FORM      1          73     Which Dis UDF for casemix matrix
PTCNFXCN  DIM       1          74     Fix program FIXCONTC has been run Z=yes
PTCNAMUI  FORM      10         75     Next ACT merge unique Id.          
.spare    FORM      12         85     Blank not used
PTCNONLV  DIM       1          97     No longer required
PTCNCMYN  FORM      1          98     Default casemix payment to Y or N
.                                     1=Y 0=N
PTCNNWCM  FORM      1          99     Using Casemix matrix 0=No 1=Yes
PTCNUDRN  FORM      1         100     Using date range in "DOB search"
.                                     1 = Yes
.                                     0 = No
PTCNPX2A  FORM      1         101     Using 2nd Master file Audit (pmspx2af)
.                                     1 = Yes
.                                     0 = No
PTCNHCPA  FORM      1         102     Using Health Care Prof Audit (pmshcpaf)
.                                     1 = Yes
.                                     0 = No
PTCNVACA  FORM      1         103     Using VACS Audit (pmsvacaf)
.                                     1 = Yes
.                                     0 = No
PTCNDGET  FORM      1         104     Delete Grouper & Encoder tempfiles
.                                     1 = Yes
.                                     0 = No
PTCNDGPO  FORM      1         105     Write Patient On-Leave to Datagate
PTCNDGPR  FORM      1         106     Write Patient Return from Leave to DG
PTCNDGPA  FORM      1         107     Write Cancel Patient Pre-Admiss to DG
PTCNACSA  DIM       15        108     ACT Health Sending Application
PTCNAPID  DIM       1         123     ACT Health Processing ID
.                                         P = Processing
.                                         D = Debugging
.                                         T = Training
PTCNCCOD  DIM       6         124     ACT PMI Country Code for Australia
PTCNAUAT  FORM      1         130     Automatic update of admission type based
.                                     on MBS Item 1=Yes, 0=No
PTCNWSPC  FORM      1         131     Give Warning for subsequent primary MBS
.                                     changes. 1=Yes, 0=No
PTCNADB1  DIM       3         132     Automatic daycase band 1
PTCNADB2  DIM       3         135     Automatic daycase band 2
PTCNADB3  DIM       3         138     Automatic daycase band 3
PTCNADB4  DIM       3         141     Automatic daycase band 4
PTCNDFAN  DIM       3         144     Defualt Anaesthetic Code for Day Proc
CMDISM    DIM       1         147     Prefix for a Morphology Disease 
PTCNDCRM  DIM       10        148     Description for disease prefix CMDISM
PTCNDGPV  DIM       3         158     Default Grouper Version (031/041/042)
PTCNU31G  FORM      1         161     Using 3.1 Grouper? (1=Yes/0=No)
PTCNU41G  FORM      1         162     Using 4.1 Grouper? (1=Yes/0=No)
PTCNU42G  FORM      1         163     Using 4.2 Grouper? (1=Yes/0=No)
PTCNDGPE  FORM      1         164     Write Patient Pre-Admiss to DG
PTCNONLA  FORM      1         165     Allow on leave bed allocation 
.                                     0=No
.                                     1=Yes
.                                     2=Warn
PTCNCMXF  FORM      1         166     Do Not checking Casemix funded at Adm?
.                                     1=Yes,0=No
PTCNPRCC  FORM      1         167     Sending Critical Care transfer in PRS2?
.                                     0=No
.                                     1=Yes
PTCNTIMC  DIM       5         168     Time to run current patient update (hh:mm)
PTCNICUT  FORM      1         173     Checking for an ICU/NCU Bed Type? 
.                                     0=No 1=Yes 
PTCNIOEV  FORM      1         174     Include Outpatient Events in Vacs Report? 
.                                     0=No 1=Yes 
PTCNNULB  FORM      2         175     Type of Nutrition Label being Used (1-99)
PTCNTFEE  FORM      1         177     Using theatre fees file (pattfees) ?
.                                     0=No 1=Yes 
PTCNVETR  DIM       2         178     WA HDP for veterans card
.                                     U1... U9, V0 - V1, DX
PTCNTIMN  DIM       5         180     Time to run nutrition update (hh:mm)
PTCNELPS  FORM      2         185     Elective Patient Status Category
.                                     CC,P,U1-V1
PTCNPPAL  DIM       2         187     Which UDF for Previous Non Admitted
.                                     Palliative patient P1-P6,U1-U9,V0-V1
PTCNPRCL  FORM      1         189     Print Claim details for MAB,WC,TAC on inv.
.                                     0 = No, 1 = Yes
.
. The following fields are from r6.09
.
.
PTSGCOPT  FORM      1         190      Using Suggested Classification Exception?
.                                         0 = No, 1 = Yes
PTCNBANK  FORM      1         191      Has the Banking started?
.                                         0 = No, 1 = Yes
PTCNUBNK  FORM      1         192      Are we Using the 
.                                      "Banking Started...Proceed?" message?
.                                         0 = No, 1 = Yes
PTCNITXT  FORM      1         193      Write invoice layout 6 to a textfile ?
PTCNPCOM  FORM      1         194      Print comments on invoice if no
.                                      rebate section ?
.                                         0 = No, 1 = Yes
PTCNLASR  FORM      1         195      Printing with a laser printer ?
.                                         0 = No, 1 = Yes
PTCNBLSI  FORM      2         196      Number of blank lines at the start of
.                                      the page for laser printer
PTCNXLBI  FORM      2         198      Number of extra lines in the body of the
.                                      invoice
PTCNPJCI  FORM      1         200      Print journal code on invoice ?
.                                         0 = No, 1 = Yes
PTCNPFED  FORM      1         201      Print front end deductions on invoice ?
.                                         0 = No, 1 = Yes
.
PTCNCPAH  FORM      1         202      Write AH patients to pmscuraf?
.                                         0 = No, 1 = Yes
PTCNCROL  DIM       1         203      Default Contract Role for QLD (A or B)
.         A-The contracting (purchasing) hospital is termed Hospital A
.         B-The contracted (service provider) hospital is termed Hospital B
.
PTCNCTYP  DIM       1         204      Default Contract Type for QLD
.                                      1= B  2=ABA  3=AB  4=(A)B  5=BA
PTCNPFID  FORM      1         205      Print details on Fees Invoice Yes or No
.                                      1= Yes 0=No
PTCNFPST  DIM       2         206     Which Field for Previous Specialised
.                                     Treatment?
.                                     Mental Health Discharge Table UDF1-5(w5
.                                     - w9)
.                                     Admission Table Admmission Type(atype)
PTCNSORP  DIM       2         208     Which Field for Source of Referral to
.                                     Public Psychiatric Facility?
.                                     Admission Table UDF 1-11(patmi1af.et al)
.                                     Admission Table SOR(CAT S-patmi1af.asrc)
.                                     Mental Health Visit Table(mehvi1af)
.                                     UDF1-5(v1-v5)
PTCNLCLM  DIM       1         210     Default claim code from All visits
.                                     or only Inpatient visits.
.                                     A or blank - from all visits
.                                     I - from Inpatient visit only/Visit type 3
.                                     N - Don't default
PTCNBPAY  FORM      1         211     Generate BPAY Customer Reference Number?
.                                        0 = No              * I CAR 48227
.                                        1 = Yes
PTCNHBID  DIM       3         212     Hospital BPAY Identifier (1-3 digits)
.
PTCNBINV  FORM      1         215     Allow Backdate Invoice
.                                        0 = No              
.                                        1 = Yes
PTCNDWAW  FORM      1         216     Default Ward to Admitting Ward
.                                        0 = Exp. Post Op Ward
.                                        1 = Expected Ward
PTCNGDV4  DIM       8         217     Go live date for ICD10 version 4
.
PTCNACCD  FORM      1         225     ACC Details for NMDS 0=EOC 1=From ACC det
.
PTCNPRWD  FORM      1         226     Print ward/bed on invoices
.
PTCNGDV5  DIM       8         227     Go live date for ICD10 Edition 5
.
PTCNQCCT  DIM       2         235     QLD Category for Contract Details (S /CL)
.
PTCNMLEG  FORM      1         237     Using Mental Health Legal Status
.                                       0 = No
.                                       1 = Yes
PTCNDCHR  DIM       9         238     JH-Automatic Doctor's Attendance Fee Code
PTCNCDIS  DIM       3         247     JH-Category FI for Discount (Fees Invoice)
.End of Record                250
.
.*******************************************************************************
.*        PATCONFD.INC : Sector 109                                            *
.*******************************************************************************
.
PTCNQUM1  DIM       75         1      Quotation Message 1                   
PTCNQUM2  DIM       75         76     Quotation Message 2             
PTCNGDV3  DIM       8          151    Go live date for ICD10 version 3
PTCNUICF  FORM      1          159    Using interim Health Fund Claim Forms?
.                                       0 = No, 1 = Yes
PTCNSTGV  FORM      1          160    Using strict given name search in soundex?
.                                      0=No 1=Yes, surname order 
.                                      2=Yes, given name order
PTCNBNUM  FORM      8          161    Next Available Batch Number
.
PTCNLDAT  DIM       8          169    Last date PRS2 coding date change made
.                                     (ccyymmdd)
PTCNNHTM  FORM      5          177    NHI Reply FIFO timeout (0-30000 millisecs)
PTCNNFPU  FORM      1          182    Using new fields for prosth. upload(Y/N)
.                                     1=Yes 0=No
PTCNDMCC  DIM       9          183    Default Merlin Misc. Charges Code
PTCNDMJC  DIM       3          192    Default Merlin Journal Code
PTCNACAS  FORM      1          195    Which UDF for Aged Care Assessment
.                                         0 = Not used     6 = Use "AUSR6"
.                                         1 = Use "DUSD1"  7 = Use "AUSR7"
.                                         2 = Use "DUSD2"                 
.                                         3 = Use "DUSD3"                 
.                                         4 = Use "DUSD4"                 
.                                         5 = Use "DUSD5"                 
PTCNCRNO  FORM      8          196    Next Credit Note number
PTCNRSYR  DIM       4          204    Results Display Start Year
PTCNRTCN  DIM       1          208    PRS2 Stat Changes 2004 -
.                                     Reporting Type for Trans Control and
.                                     Recon Reports
PTCNRTRQ  DIM       1          209    PRS2 Stat Changes 2004 -
.                                     Reporting Type for Request Reports
PTCNPRS6  DIM       2          210    PRS report code for 6th request
PTCNRNG6  DIM      12          212    PRS 6th report request date range
PTCNPR3A  DIM       2         224     PRS report code for 3rd request   *I-53150
PTCNRNG3  DIM      12         226     PRS 3rd report request date range *I-53150
PTCNPRIN  FORM      1         238     Print Transactions with a zero amt invoice
.                                        0 = No              
.                                        1 = Yes
.
PTCNHHDP  DIM       4          239    ESIS Campus code
PTCNCATB  FORM      1          243    Print Billing or Admission Comments on ATB
.                                        0 = Admission Comments
.                                        1 = Billing Comments
.                                        2 = No Comments (Export Only-CATBLAY=6)
PTCNCELG  FORM      1          244    Eligibility Check on Admission
.                                        0 = No              
.                                        1 = Yes
PTCNDISI  FORM      1          245    Allow Disc/Change Disc.date after Invoiced
.                                        0 = No              
.                                        1 = Yes
PTCNRCAL  FORM      1          246    Recalculate Theatre fees
.                                        0 = No
.                                        1 = Yes
PTCNROUN  DIM       3          247    JH- Cat FI for Rounding (Fees Invoice)
.End of Record                250
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 110                                            *
.*******************************************************************************
.
PTCNWTFE  DIM       10         1      Web Userid for Locking of IBABIL14 -
.                                     Theatre Fee File Maintenance.
PTCNWBFE  DIM       10         11     Web Userid for Locking of IBABIL56 -
.                                     Bed Fee file Maintenance.
PTCNWDRG  DIM       10         21     Web Userid for Locking of IBAPMS40 - 
.                                     Date Range File Maintenance.
PTCNWMCH  DIM       10         31     Web Userid for Locking of IBAHOS10 -
.                                     Misc. Charge Maintenance.
PTCNWRAT  DIM       10         41     Web Userid for Locking of IBAHOS60 -
.                                     Rates Table Maintenance.
PTCNWITM  DIM       10         51     Web Userid for Locking of IBAPAT14 -
.                                     MBS/ITEM file Maintenance.
.
.          ICD10 - Go-Live dates
PTCNGDV7  DIM        8         61     Go live date for ICD10 Ed.7     *C-219246
PTCNGDV8  DIM        8         69     Go live date for ICD10 Ed.8     *C-284420
PTCNGDV9  DIM        8         77     Go live date for ICD10 Ed.9     *C-311669
PTCNGDVX  DIM        8         85     Go live date for ICD10 Ed.10    *C-0833093
.
.         PAS-CIS Broadcast Interface Parameters
.
PTCNOLOC  FORM       1         93     O/P Clinic Loc'n Code for HL7 PV1-39
.                                     & ED Location for HL7 PV1-39
PTCNPV04  FORM       1         94     PV1-04 Use Cat CC (instead of Cat P)
.                                         0 = No    1 = Yes
PTCNPV18  FORM       1         95     PV1-18 Use Cat P (instead of Cat CC)
.                                         0 = No    1 = Yes
PTCNPV36  FORM       1         96     PV1-36 Use Cat D (instead of Cat DD)
.                                         0 = No    1 = Yes
PTCNPW36  FORM       1         97     PV1-36 Use Cat EW (for EMR Equiv)
.                                         0 = No    1 = Yes
PTCNA31X  DIM        2         98     PAS-CIS Alternate 'A' code for A31
PTCNM02M  FORM       1        100     PAS-CIS Sending M02 (Doctor Deatails)
.                                              0 = No
.                                              1 = Yes
PTCNA01M  FORM       1        101     PAS-CIS Sending A01 (Admission)
.                                              0 = No
.                                              1 = Yes
PTCNA02M  FORM       1        102     PAS-CIS Sending A02 (Transfer)
.                                              0 = No
.                                              1 = Yes
PTCNA03M  FORM       1        103     PAS-CIS Sending A03 (Discharge)
.                                              0 = No
.                                              1 = Yes
PTCNA08M  FORM       1        104     PAS-CIS Sending A08 (Admission Update)
.                                              0 = No
.                                              1 = Yes
PTCNA11M  FORM       1        105     PAS-CIS Sending A11 (Cancel Admit)
.                                              0 = No
.                                              1 = Yes
PTCNA12M  FORM       1        106     PAS-CIS Sending A12 (Cancel Transfer)
.                                              0 = No
.                                              1 = Yes
PTCNA13M  FORM       1        107     PAS-CIS Sending A13 (Cancel Discharge)
.                                              0 = No
.                                              1 = Yes
PTCNA14M  FORM       1        108     PAS-CIS Sending A14 (Preadmit)
.                                              0 = No
.                                              1 = Yes
PTCNA21M  FORM       1        109     PAS-CIS Sending A21 (On-Leave)
.                                              0 = No
.                                              1 = Yes
PTCNA22M  FORM       1        110     PAS-CIS Sending A22 (Return from Leave)
.                                              0 = No
.                                              1 = Yes
PTCNA27M  FORM       1        111     PAS-CIS Sending A27 (Cancel Preadmit)
.                                              0 = No
.                                              1 = Yes
PTCNA28M  FORM       1        112     PAS-CIS Sending A28 (PMI register)
.                                              0 = No
.                                              1 = Yes
PTCNA31M  FORM       1        113     PAS-CIS Sending A31 (PMI Update)
.                                              0 = No
.                                              1 = Yes
PTCNA34M  FORM       1        114     PAS-CIS Sending A34 (U/R Merge)
.                                              0 = No
.                                              1 = Yes
.
.         HosClaims Parameters
.
PTCNUEDI  FORM       1        115     Use HOSClaims EDI module  Yes or No
.                                       1=Yes 0=No
PTCNEDIH  DIM        2        116     EDI Hospital Code Parameter
PTCNEDIO  DIM       60        118     EDI Extract Outbound Path Parameter
PTCNORIG  DIM       50        178     HosClaims Originator (ADT10)
PTCNHCCC  FORM       1        228     HosClaims Critical Care Flag (ADT10)
.                                     Admin type or bed type in HCP extract
.                                       0 = Using Adm. Type (Cat A) for ICU
.                                       1 = Using Bed Type (Cat BT) for ICU
.
PTCNMVCP  FORM       1        229     Using Mechanical Ventilation in
.                                     Casepayment billing?
.                                       0 = No
.                                       1 = Yes
PTCNMVBC  DIM        9        230     Mechanical Ventilation Billing Code
PTCNDGCP  FORM       1        239     Write Change Patient Pre-Admiss to DG
PTCNUALT  FORM       1        240     Using Alternate ID table (pmsaidaf)  
PTCNDISA  FORM       1        241     Display all alternate ID's in search
PTCNMBRL  FORM       1        242     Source of Mother/Baby relationship (EDI)
.                                        0 = Using unqualified status
.                                        1 = Using baby's DOB/mothers visit date
PTCNCOMF  DIM        1        243     Using compensable detail patient folders
.                                     0=No, 1=Yes, 2=Yes with conflict warning
PTCNA44M  FORM       1        244     Sending A44 (Change U/R for I/P Visit)
.                                              0 = No
.                                              1 = Yes
PTCNLEGB  FORM       1        245     Using Alternate Legacy System
.                                       0 = No
.                                       1 = Yes
PTCNMHCP  DIM        1        246     Multi Hospital HCP Search Display
.                                      0 = Matching hospital + non hosp specific
.                                      1 = Matching hospital only
PTCNPRSM  DIM        1        247     Multi Hospital PRS2 extract         
.                                      0 = One extract
.                                      1 = Multiple extracts        
PTCNEPAY  DIM        1        248     Using Expected Payors
.                                       0 = No 1 = Yes
PTCNDAUR  DIM        1        249     Display Alternate ID instead of UR
.                                       0 = No 1 = Yes 2 = Hospital UR
.
.End of Record                250
.
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 112                                            *
.*******************************************************************************
PTCNMBSD  DIM       10        1       MBS Item description.
.                                     Australia=MBS Item, NZ=Procedure Item
PTCNRPIS  DIM       8         11      Related Provider Invoice Sequence Id
PTCNACCE  DIM       1         19      Using ACC E-Lodgement Y/N
.                                     1 = Yes  0 = No
PTCNACCL  DIM       7         20      Last Valid ACC Claim Number
PTCNACCN  DIM       7         27      Next ACC Number to be assigned
PTCNGLEX  DIM      60         34      G/L Extract Directory Path
PTCNH7ME  DIM       1         94      Sending Mobile Phone & Email in PID-13  
.                                     1 = Yes  0 = No
PTCNH7IN  DIM       1         95      Sending Interpreter Req'd flag in PID-15
.                                     1 = Yes  0 = No
PTCNH7AC  DIM       1         96      Sending ACC data in PV1-20              
.                                     1 = Yes  0 = No
PTCNH7HS  DIM       1         97      Sending Health Specialty in PV1-10      
.                                     1 = Yes  0 = No
PTCNH7AD  DIM       1         98      Sending Attending Doctor in PV1-07
.                                     1 = Yes  0 = No
PTCNH7A5  DIM       1         99      Sending A05 for Pre-admissions
.                                     1 = Yes  0 = No
PTCNMPBK  DIM       1        100      Mandatory to have preadmission before 
.                                     booking 1 = Yes  0 = No
PTCNUFFR  DIM       1        101      Using Frame Friendly                   
.                                     1 = Yes  0 = No
PTCNHITC  DIM       1        102      Hold Invoice until Theatre Charges 
.                                     Completed   1 = Yes  0 = No
PTCNHICC  DIM       1        103      Hold Invoice until Coding Completed
.                                     0 = No 1=Yes 2=Warning
PTCNWBDS  DIM       1        104      Display ward/bed description rather than
.                                     code on selected lists    0 = No 1=Yes
PTCNMORG  DIM       1        105      Using Morgue Management
.                                     0=No 1=Yes
PTCNBEDM  DIM       1        106      Using Ward/Bed Requests  
.                                     0=No 1=Yes
PTCNBMAN  DIM       1        107      Using Ward/Bed Management
.                                     0=No 1=Yes
PTCNH7IT  DIM       1        108      Sending CMBS Items
.                                     0=No 1=Yes
. (spare) DIM       1        109      
.                                    
PTCNPRDC  DIM       1        110      Prevent Receipt of Debt Collection Visits
.                                     0=No 1=Yes
PTCNDUNT  DIM       1        111      Don't Display Unit on Current Patient 
.                                     Search 0=No 1=Yes
PTCNAFIP  DIM       1        112      Autolink Fee Information to Pre-Admission
.                                     0=No 1=Yes
PTCNXCHS  DIM       1        113      Exclude Days Hospitalisation for Per-diem
.                                     Daycase Billing.  
.                                     0=No 1=Yes
PTCNDOST  DIM       2        114      First Display Time for Inpatient
.                                     Scheduling / Day Oncology
PTCNDOET  DIM       2        116      Last Display TIme for Inpatient Scheduling
 .                                    / Day Oncology
PTCNTRPR  DIM       1        118      Tracking Prosthetics
.                                     0=No 1=Yes
PTCNJPEP  DIM       60       119      JDE Prosthetic Extract Filename
PTCNACPT  DIM       60       179      ACC XML Message File Path
.
PTCNGDV6  DIM       8        239      Go live date for ICD10 Edition 6
PTCNH7DA  DIM       1        247      Use Sent Description/Amount in P03
.                                     0=No
.                                     1=Yes
.                                     2=Yes (allow zero amount)
.                                     3=Yes (except zero amount)
PTCNGJRN  DIM       2        248      GST Journal Code for SX split GST
.
.End of Record               250  
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 114                                            *
.*******************************************************************************
PTCNACSN  DIM       60         1      ACC XML Document Sender   
PTCNACVR  DIM       20        61      ACC XML Document Version 
PTCNDONP  DIM       5         81      Day Oncology view Max no patients
PTCNUBAP  DIM       1         86      Update booking/preadmission details
.                                     0-don't update either
.                                     1-Booking to Preadmit and Preadmit to book
.                                     2-Booking to Preadmit only
.                                     3-Preadmit to Booking only
.                                     4-Update both ways w/o diagnosis from
.                                       Pre-Adm
.                                     5-Update both ways w/o diagnoses or
.                                       procedure descriptions on Update
PTCNRSAP  DIM       8         87      Result sending application
PTCNRSFC  DIM       8         95      Result sending facility
PTCNRRAP  DIM       8        103      Result receiving application
PTCNRRFC  DIM       8        111      Result receiving facility
PTCNRMIC  DIM       12       119      Result Message ID Counter
PTCNRHLV  DIM       6        131      Result HL7 Version
PTCNBBAP  DIM       1        137      Using Both Admission & Post Op Beds on
.                                     Bed Board View 0=No 1=Yes
PTCNCHOT  DIM       1        138      Capture HouseKeeping on Transfer
.                                     0=No 1=Yes
PTCNCHOD  DIM       1        139      Capture HouseKeeping on Discharge
.                                     0=No 1=Yes
PTCNTPAL  DIM       1        140      Transmit Palliative Care for PRS2 Trailer
.                                     0=No 1=Yes
PTCNH7LS  DIM       1        141      Send location status in HL7 PV1-003
.                                     0=No 1=Yes 
PTCNBEDR  DIM       3        142      Refresh Bed Board Minutes          
PTCNCLID  DIM       8        145      Current Location Identifier
PTCNECLO  DIM      60        153      Eclipse Extract Outbound Path Parameter
PTCNUEDC  FORM      1        213      Using Cat CL. for DVA claims (1=Yes/0=No)
PTCNUTPD  DIM       1        214      Using Test or Production for DVA claims 
PTCNDCOP  FORM      3        215      Days before closing claims with 
.                                     outstanding processing reports
PTCNSORL  DIM       1        218      Category to send for SOR - location
.                                     0=SG 1=S
PTCNUSGN  DIM       1        219      Use Second Given Name
PTCNUSGP  DIM       1        220      Using GP Access
PTCNCALM  DIM       1        221      Recalculate zero amount of Misc.Items
.                                     0=No 1=Yes
PTCNTACT  DIM       8        222      TAC Transmitter No.
PTCNTACE  DIM       8        230      TAC Payee No. (default "10049990")
PTCNPICD  DIM       1        238      Print ICD10 for reprint WC and TAC
PTCNDSCL  DIM       1        239      New Discharge Summary Layout
CPASSWD   DIM       8        240      PASSWORD for IBA Menu in IBANHI98
PTCNYRDF  DIM       1        248      Result Display Year
PTCNDFUP  DIM       1        249      Use Debtor Follow-up (Action Plan)?
.                                     0=No 1=Yes
PTCNCUDA  DIM       1        250      Category to use for Disability Alert
.
.End of Record               251
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 115                                            *
.*******************************************************************************
.
.         Patient Management Parameters
.
PTCNFEDN  DIM       2          1       First Escalation Days for No remittance
PTCNFEEN  DIM      80          3       First Escalation Email for No remittance
PTCNSEDN  DIM       2         83       Second Escalation Days for No remittance
PTCNSEEN  DIM      80         85       Second Escalation Email for No remittance
PTCNTEDN  DIM       2        165       Third Escalation Days for No remittance
PTCNTEEN  DIM      80        167       Third Escalation Email for No remittance
.
.End of Record               250
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 116                                            *
.*******************************************************************************
.
.         Patient Management
.
PTCNECLI  DIM      60          1      Eclipse Extract Sent Path Parameter
PTCNPRKG  DIM       8         61      Eclipse Participants Last Keyword Gen
.                                     Date 
PTCNSCEM  DIM      80         69      Sender Contact Email
PTCNSCPN  DIM      40         149     Sender Contact Person Name
PTCNSCPP  DIM      20         189     Sender Contact Person Phone
PTCNADEP  DIM       1         209     Select Deposit to Apply to Patient Inv.?
.                                     0=No 1=Yes 
PTCNICLS  FORM      1         210     Prompt for ICD10 Suggested Classification
.                                     1=Yes - Option to Update Suggested Class.
.                                     0=No  - Auto Update Suggested Class
PTCNGLPF  DIM       3         211     G/L Interface Prefix
PTCNDCDM  DIM       1         214     Display Event Level CDM Icons
PTCNAADR  DIM       3         215     Alternate Address Category Code (Cat tc)
PTCNUCMX  DIM       1         218     Use Prov.Casemix Code instead of DRG for 
.                                     reports (IBAPMS82,IBAPMS83,IBABIL83)
.                                     0=No 1=Yes 
PTCNCLEV  DIM       3         219     TAC Claim Code to include Leave days 
.                                     in Stepdown Count
PTCNXCOM  DIM       1         222     Using WA Compensable 
.                                       0 = No
.                                       1 = Yes
PTCNDIVN  DIM       1         223     Using Divisions
.                                       0 = No
.                                       1 = Yes
PTCNFGST  DIM       1         224     GST Breakdown on FI & G/L Extract
.                                     0 = FI GST breakdown by Ledger from patfms
.                                       & G/L Extract - breakdown by fincode
.                                     1 = FI GST breakdown by Acc/Misc Item Grp
.                                       & G/L extract-lumpsum amt for each hosp.
PTCNFEMR  DIM       1         225     EMR Revenue Breakdown on G/L Extract
PTCNGPHR  DIM       1         226     Group Pharmacy items on Discharge Billing
.                                     Statement
.                                       0 = No
.                                       1 = Yes
PTCNNEID  DIM       20        227     Next eAdmission ID
PTCNUNDH  DIM       1         247     Using Hospitalized in Last 7 Days
.                                       0 = No
.                                       1 = Yes
PTCNUOFE  DIM       1         248     Using Gap/Other Services on Fees Estimate
.                                       0 = No
.                                       1 = Yes
PTCNRTUR  DIM       1         249     Set HL7 messages with "T-" URs to rejected
.                                       0 = No
.                                       1 = Yes
PTCNUPEA  DIM       1         250     Update Doctor Load eAccreditation
.                                       0 = No
.                                       1 = Yes
.End of Record                251
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 117                                            *
.*******************************************************************************
.
.         Patient Management
.
PTCNOECO  DIM      60          1      Eclipse OEC Extract Outbound Parameter
PTCNOECI  DIM      60         61      Eclipse OEC Extract Sent Path Parameter
PTCNOECF  DIM      12         121     Eclipse OEC Filename Parameter
PTCNBDAT  DIM      8          133     Eclipse OEC Batch Date Parameter
PTCNBCNT  DIM      4          141     Eclipse OEC Next Batch Count Parameter
PTCNECSA  DIM      69         145     Eclipse SA Console URL
PTCNRS14  DIM      1          214     Receive S14(Theatre Time Details) Message
.                                     (0 = No, 1 = Yes)
PTCNDIGN  DIM      1          215     Use EMR Diagnosis HDP Code & Coding System
.                                     for ACC45 XML
PTCNDSID  DIM      3          216     Acc Default Diagnosis Value SetID
.                                                             (pmsvstaf)
PTCNACTP  DIM      1          219     ACC XML Treatement Provider Source
.
PTCNGDX1  DIM      8          220     Go live date for ICD10 Ed.11
.                                       (Default '99991231')
PTCNNEBI  DIM      20         228     NSW EDWARD Health Service Building ID
PTCNRMDM  DIM      1          248     Receive MDM^T02 Messages (HL7 Inbound)
.                                      (0 = No, 1 = Yes)
PTCNBDEF  DIM      1          249     Using Billing Defaults file for Admissions
.                                      (0 = No, 1 = Yes)
.
.End of Record                250
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 118                                            *
.*******************************************************************************
.
.         General Patient Management
.
PTCNPATY  DIM      60          1      PaTTY - Pharmacy Interface Parameter
PTCNPUNQ  DIM      10         61      Next Pregnancy Unique ID
PTCNADDF  DIM      1          71      Default Admission Time and Discharge Time
.                                     to Day Oncology Usage
.                                     0=No 1=Yes
PTCNBUNQ  DIM      10         72      Next Birth Unique ID
PTCNUWPN  DIM      1          82      Using Ward Provider Number (0=No/1=Yes)
PTCNDSAC  DIM      1          83      Go to Discharge Summary After Coding 
PTCNHFAX  DIM      12         84      Hospital Fax Number
PTCNNJBN  DIM      8          96      Next Bulk Journal Batch Number
PTCNNMBN  DIM      8          104     Next Bulk Misc Charge Batch Number
PTCNSLPD  DIM      1          112     Sending linked practice details in PV1-08
.                                     (0=No/1=Yes)
PTCNDBIN  DIM      1          113     Must be Discharged Before Invoice (1=Yes)
PTCNPPCD  DIM      1          114     Must have Primary/Performed/Duration 
.                                     before Invoice (1=Yes)
PTCNPROS  DIM      1          115     Hold Invoice until Prosthetics Complete
.                                     (0=No/1=Yes)
PTCNMFFL  DIM      1          116     Mapping file flag for Bed/Theatre Fees
.                                     (0=No/1=Yes)
PTCNELGN  DIM      8          117     Next Eligibility Number
.
PTCNEMPI  DIM      1          125     Using EMPI (WA Health Enterprise Master
.                                     Patient Index) 1=Yes
PTCNRCBN  DIM      8          126     Next Recurring Care Batch Number
PTCNMFIN  DIM      1          134     Using Multiple Financial Elections
.                                     (0=No/1=Yes)
PTCNDIAI  DIM      3          135     Not used
PTCNNEWC  DIM      1          138     Using new contacts (pmscexaf)
PTCNAIWI  DIM      1          139     Alternate Id without leading character
PTCNUNBN  DIM      10         140     Unique Boarder Number
PTCNH7AL  DIM      1          150     HL7 sending ZAL sending for alerts
.                                       0 = No
.                                       1 = Yes
PTCNSRCT  DIM      2          151     Number of recs for PATWEB90 search
PTCNUDPD  DIM      1          153     Using Disaster Patient Detail
.                                       0 = No
.                                       1 = Yes
PTCNUHSC  DIM      1          154     Using Hospital Security
.                                       0 = No
.                                       1 = Yes
PTCNH7WD  DIM      1          155     HL7 sending short ward/bed description
.                                     instead of code in PV1.3
.                                       0 = No
.                                       1 = Yes
PTCNICOP  DIM      9          156     Default ICD Code for Organ Procurement
PTCNPPRC  DIM      1          165     Include Procedure Code in NZ Priv.Inv.body
PTCNPITM  DIM      1          166     Include Full Item Desc.in NZ Priv.Inv.body
PTCNNWCA  DIM      1          167     Using New Contacts Audit File (pmsaudce)
.                                       0 = No
.                                       1 = Yes
PTCNCONU  DIM      10         168     New contacts webPAS unique id (pmscexaf)
.spare    DIM      1          178     Blank not used
PTCNH7ID  DIM      1          179     HL7 ignore delete segment for NK1/ZAL 
.                                     segments
.                                       0 = No
.                                       1 = Yes
PTCNEDDD  DIM      1          180     HL7 using ED Discharge Doctor (emviur02)
.                                       0 = No
.                                       1 = Yes
PTCNPMPL  DIM      60         181     Path for MediBank Extract data ("MPL")
PTCNH7RA  DIM      1          241     Rep A08 with A38/A05 resched O/P Appntmnts
.                                       0 = No
.                                       1 = Yes
PTCNWFIM  DIM      1          242     Warn if no FIM Details
.                                       0 = No
.                                       1 = Yes
PTCNPRIP  DIM      1          243     Auto set Program in Progress on Adm/Dis
.                                       0 = No
.                                       1 = Yes
PTCNMEMR  DIM      1          244     Allow Multiple Current EMR Visits in merge
.                                       0 = No
.                                       1 = Yes
.
PTCNHBPI  DIM      4          245     Hospital BPAY Identifier (1-4 digits)
PTCNURBP  DIM      1          249     Use UR as BPAY Invoice Number
.                                       0 = No
.                                       1 = Yes
PTCNRERD  DIM      1          250     NZ - Restrict Editing of Residency Details
.                                       0 = No  (not restricted)
.                                       1 = Yes (restricted)
.End of Record                251
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 119                                            *
.*******************************************************************************
.
.         Patient Management
.
PTCNIMCO  DIM      60          1      Eclipse IMC Outbound Path Parameter
PTCNIMCI  DIM      60         61      Eclipse IMC Sent Path Parameter
PTCNUTPM  DIM       1        121      Using Test or Production for IMC claims
.
PTCNDEDI  DIM      60        122      Destination path for EDI messages
PTCNEPIS  DIM       1        182      Interface to Episoft
.                                       0 = No
.                                       1 = Yes
.          Grouper Effective Dates
PTCNED41  DIM       8        183      Effective Date for DRG 4.1      *C-284669
PTCNED42  DIM       8        191      Effective Date for DRG 4.2      *C-284669
PTCNED50  DIM       8        199      Effective Date for DRG 5.0      *C-284669
PTCNED51  DIM       8        207      Effective Date for DRG 5.1      *C-284669
PTCNED52  DIM       8        215      Effective Date for DRG 5.2      *C-284669
PTCNED60  DIM       8        223      Effective Date for DRG 6.0      *C-284669
PTCNED62  DIM       8        231      Effective Date for DRG 6.2      *C-284669
PTCNED70  DIM       8        239      Effective Date for DRG 7.0      *C-284669
PTCNHCPI  DIM       1        247      Display HCP Type/Specialty/Role on HCP 
.                                     Searches
.                                     0-No, 1-Display HCP Type only
.                                     2-Display HCP Primary Specialty only
.                                     3-Display HCP Role only
.                                     4-Display HCP Type & HCP Primary Specialty
.                                     5-Display HCP Type and HCP Role 
.                                     6-Display HCP Primary Specialty & HCP Role
.
PTCSXOFF  DIM       1        248      Do not show Soundex in HCP, Practice
.                                     and Doctor searches indicator
PTCNEREF  DIM       1        249      Exclude Referrals from Results Linking
.End of Record               250
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 120                                            *
.*******************************************************************************
.
.         Eclipse OPV Parameters
.
PTCNOPVO  DIM      60          1      Eclipse OPV Outbound Path Parameter
PTCNOPVI  DIM      60         61      Eclipse OPV Sent Path Parameter
PTCNUTPO  DIM       1        121      Using Test or Production for OPV
PTCNXXXX  DIM      10        122      Blank (formerly used for PTCNREQN)
PTCNUNDW  DIM       5        132      Underweight BMI    (Pink)
PTCNHEFR  DIM       5        137      Healthy Range From (Black)
PTCNHETO  DIM       5        142      Healthy RangeTo    (Black)
PTCNOVRW  DIM       5        147      Overweight         (Red)
PTCNOBES  DIM       5        152      Obese              (Red)      
PTCNHDVD  DIM       1        157      Display Visit Dates in header 
PTCNUNET  DIM       1        158      Using NEHTA Identifiers
.                                       0 = No
.                                       1 = Yes
.                                       2 = Yes, WAH HPI-I and HPI-O recording only
.                                       3 = Yes, With IHI Only (HPI-I and HPI-O recording)
PTCNDFAL  DIM       1        159     Display Food Allergy on Hospital Ward List
.                                       0 = No
.                                       1 = Yes
PTCNIFCL  DIM       1        160     Informed Financial Consent form layout
.                                       0 = Standard
.                                       1 = Healthscope
.                                       2 = SJGHC
.                                       3 = Cabrini
PTCNMDSB  DIM       5        161     Next NMDS Extract Batch Number
.                                       (Right jusitified, zero-padded)
PTCNBRSB  DIM       5        166     Next NBRS Extract Batch Number
.                                       (Right jusitified, zero-padded)
PTCNA31Y  DIM       1        171     PAS-HL7 Send A08 instead of A31
.                                       0 = No
.                                       1 = Yes
PTCNHLEA  DIM       1        172      Display Leave Type in header 
.                                       0 = No
.                                       1 = Yes
PTCNBPM5  DIM       1        173      Use MOD10V05 for BPAY check digit
.                                       0 = No
.                                       1 = Yes
PTCNBEAD  DIM       1        174      NZ - Blank existing Pre-Admit Date/Time on
.                                     Admit templates
.                                       0 = No
.                                       1 = Yes
PTCNIDFT  DIM       6        175      Inpatient Discharge Fax Func Template 
.                                       (Stationary Temp Type '3' - Inpatients)
.
.
.         Positions 181 - 222 can be used for new parameters...
.
.
PTCNREQN  DIM      10        222      Next Admission Request Number
PTCNED80  DIM       8        232      Effective Date for DRG 8.0
PTCNC80C  DIM       3        240      Grouper V8.0 code for 3M
PTCNSMSN  DIM       1        243      Using SMS Notifications
.                                       0 = No
.                                       1 = Yes
PTCNCWCL  DIM       3        244      Code for Basic Cover Rate(Cat CL)
PTCNOECM  DIM       2        247      Minutes between OEC Received Reports check
PTCNUVSR  DIM       1        249      User Validation on Diagnostic Service Requests
.                                       0 = No validation checks
.                                       1 = Validation on Radiology Requests
.End of Record               250  
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 123                                            *
.*******************************************************************************
.
.         Eclipse OVV Parameters 
.         Eclipse 2012 Update Parameter
.
PTCNOVVO  DIM      60          1      Eclipse OVV Outbound Path Parameter
PTCNOVVI  DIM      60         61      Eclipse OVV Sent Path Parameter
PTCNOVTP  DIM       1        121      Using Test or Production for OVV
.                                       0 = No
.                                       1 = Yes
PTCNECUP  DIM       1        122      Using 2012 Eclipse Update
.                                       0 = No
.                                       1 = Yes
PTCNOPBD  DIM       8        123      Eclipse OPV Batch Date
PTCNOPBC  DIM       4        131      Eclipse OPV Batch Count
PTCNOVBD  DIM       8        135      Eclipse OVV Batch Date
PTCNOVBC  DIM       4        143      Eclipse OVV Batch Count
PTCNPCEH  DIM      60        147      PCEHR URL
PTCNWRUN  DIM       1        207      Warning and redirect to coding screen 
.                                     on undischarge
PTCNCHRT  DIM       1        208      Display OP chart only on curr pat search
.                                     " " or 0 = Yes , 1 = No
PTCNUTOM  DIM       1        209      Using Type of Meal for Diet Template
.                                       0 = No
.                                       1 = Yes
PTCNUESD  DIM       1        210      Using External Supplements for Diet
.                                     Template
.                                       0 = No
.                                       1 = Yes
PTCNGNDR  DIM       1        211      Sending gender (in HL7 Messages) as stored
.                                       0 or Blank = No
.                                       1 = Yes
PTCNTITL  DIM       1        212      Pt. Title non-mandatory for inbound HL7
.                                     A28/A31 message
.                                       0 or Blank = No
.                                       1 = Yes
PTCNMHSW  DIM       1        213      Sending MHSW Identifier in PID.3 for
.                                     Broadcast HL7 Messages (using pmpxpris)
.                                       0 or Blank = No
.                                       1 = Yes
PTCNRA03   DIM      1        214      Receive HL7 A03 Message? 
.                                       0 or blank = No
.                                       1 = Yes
PTCNRA04   DIM      1        215      Receive HL7 A04 Message? 
.                                       0 or blank = No
.                                       1 = Yes
PTCNRA05   DIM      1        216      Receive HL7 A05 Message? 
.                                       0 or blank = No
.                                       1 = Yes
PTCNRA28   DIM      1        217      Receive HL7 A28 Message? 
.                                       0 or blank = No
.                                       1 = Yes
PTCNRA31   DIM      1        218      Receive HL7 A31 Message? 
.                                       0 or blank = No
.                                       1 = Yes
PTCNRA34   DIM      1        219      Receive HL7 A34 Message? 
.                                       0 or blank = No
.                                       1 = Yes
PTCNRI12   DIM      1        220      Receive HL7 I12 Message? 
.                                       0 or blank = No
.                                       1 = Yes
PTCNRI13   DIM      1        221      Receive HL7 I13 Message? 
.                                       0 or blank = No
.                                       1 = Yes
PTCNRI14   DIM      1        222      Receive HL7 I14 Message? 
.                                       0 or blank = No
.                                       1 = Yes
PTCNRM02   DIM      1        223      Receive HL7 M02 Message? 
.                                       0 or blank = No
.                                       1 = Yes
PTCNRP03   DIM      1        224      Receive HL7 P03 Message? 
.                                       0 or blank = No
.                                       1 = Yes
PTCNRA19   DIM      1        225      Receive HL7 A19 Message? 
.                                       0 or blank = No
.                                       1 = Yes - Latest Inpatient visit
.                                       2 = Yes - Latest INP, EMR or OUT visit
PTCNDSAE   DIM      1        226      Do not generate AE for a failed P03
.                                       0 or blank = No
.                                       1 = Yes
PTCNASNM   DIM      1        227      Allow Surname Mismatch for A34 Message
.                                       0 or blank = No
.                                       1 = Yes
PTCNUNPC   DIM      1        228      Using Default Unknown Post Code for
.                                     Incoming Messages
.                                       0 or blank = No
.                                       1 = Yes
PTCNRA08   DIM      1        229      Receive A08 (I/P Visit Update) Message
.                                       0 or blank = No
.                                       1 = Yes
PTCNRA21   DIM      1        230      Receive A21 (On-Leave) Message
.                                       0 or blank = No
.                                       1 = Yes
PTCNRA22   DIM      1        231      Receive A22 (Return From Leave) Message
.                                       0 or blank = No
.                                       1 = Yes
PTCNED90  DIM       8        232      Effective Date for DRG 9.0
PTCNC90C  DIM       3        240      Grouper V9.0 code for 3M
.
PTCNQA28  DIM       1        243      Using Quick Registration in A28 Message
.                                       0 or blank = No
.                                       1 = Yes
PTCNA08E  DIM       1        244      Receive A08 (EMR Visit Update) Message
.                                       0 or blank = No
.                                       1 = Yes
PTCNQA31  DIM       1        245      Using Quick Reg in A31
.                                       0 or blank = No
.                                       1 = Yes
PTCNRP26  DIM       1        246      Receive PID.26 in A28 and A31 messages
.                                       0 or blank = No
.                                       1 = Yes
PTCNUADV  DIM       1        247      Using Address Validation
.                                       0 = No address validation
.                                       1 = Addressify Pro
.
.End of Record               248
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 124                                            *
.*******************************************************************************
.
.         Patient Management
.
PTCNNMED  DIM      50          1      NMDS Extracts Directory (NZ)
PTCNNBED  DIM      50         51      NBRS Extracts Directory (NZ)
PTCNSMSM  DIM      4         101      Check for SMS notification responses 
.                                     every X minutes
PTCNSMSP  DIM      6         105      SMS Printer Id
PTCNUIMC  DIM      1         111      Using Eclipse IMC Module
PTCNIMBN  DIM      8         112      Eclipse IMC Batch Number
PTCNMVHC  DIM      1         120      Use MV details to collect Non ICU MV 
.                                     hours for HCP
.                                       0 or blank = No
.                                       1 = Yes
PTCNDGED  DIM      1         121      Enable DRG Effective Dates Functionality
.                                       0 or blank = No
.                                       1 = Yes
PTCNDIGP  DIM      1         122      Default Inform GP on Admission templates
.                                       0 = No, non-mandatory
.                                       1 = Yes, non-mandatory
.                                       2 = Blank, non-mandatory
.                                       3 = No, mandatory
.                                       4 = Yes, mandatory
.                                       5 = Blank, mandatory
PTCNEMDB  DIM      1         123      Use Eligibility Misc.Amount on Discharge
.                                     Billing Statement
.                                       0 or blank = No
.                                       1 = Yes
PTCNHFSD  DIM      1         124      Use Health Fund Step Down on Bed Board
.                                       0 or blank = Yes
.                                       1 = No 
PTCNBAID  DIM      8         125      Eclipse IMC Billing Agent ID
.
PTCNHPAB  DIM      1         133      Hide Patient Admission Button
.                                       0 or blank = No
.                                       1 = Yes
PTCNEACF  DIM      1         134      eAccreditation Format
.                                       0 = Standard (Cabrini)
.                                       1 = Extended (SJGHC)
PTCNPHIS  DIM      1         135      Service Category for PHISCo
.                                       0 = Category A        
.                                       1 = Category CC     
PTCNCALR  DIM      8         136      Check Alerts Last Run Date (ccyymmdd)
PTCNELOS  DIM      1         144      Default Expected LOS based on
.                                     0 - Casemix Code (patcmcaf)
. The following values are only available on hea templates (Task 0315207)
.                                     1 - No default
.                                     2 - Claim Type,HF & Casemix Code(patcmxaf)
PTCNBREQ  DIM      1         145      Not showing Bed Requests in Ward/Bed
.                                     search
.                                       0 or blank = No
.                                       1 = Yes
PTCNH7LN  DIM      1         146      Using Security Login Name for HL7 ZAL.12
.                                       0 or blank = No (use User ID)
.                                       1 = Yes
PTCNSUID  DIM      1         147      Using web user id for application 
.                                     authentication
.                                       0 or blank = No (Login Name)
.                                       1 = Yes         (User Id) 
PTCNDWDC  DIM      1         148      Display Ward Diet/Diet Comment on 
.                                     pre-admission/admission templates
.                                       0 or blank = No
.                                       1 = Yes
.
PTCNSLIN  DIM      1         149      Stationery Labels Indicator
.                                       0 or blank = No
.                                       1 = Yes
.
PTCNSLTM  DIM      6         150      Default Stationery Labels Template 
PTCNH7IL  DIM      1         156      Include line break (HL7 Comments ZXV.13)
.                                       0 or blank = No
.                                       1 = Yes
.
PTCNPMHF  DIM      1         157       Option to Update PMI HF if differs 
.                                      from Visit.(0 or blank = No 1 = Yes)
.
PTCNVSHF  DIM      1         158       Option to Update Un-Inv.Disch.HF if 
.                                      updated on PMI.(0 or blank = No 1 = Yes)
PTCNMTID  DIM      1         159       Batch Eclipse Multiple Transaction IDs
PTCNSZLS  DIM      1         160       Send ZLS segment in HL7 broadcasts
.                                       0 or blank = No
.                                       1 = Send in A31 message only
.                                       2 = Send in Patient related messages
.
PTCNGAPI  DIM      50        161       Google Maps API Key
PTCNSDRG  DIM      1         211       Send DRG segment in HL7 broadcasts
.                                       0 or blank = No / 1 = yes
PTCNIRAI  DIM      1         212       Display Invoice Raised By
.                                       0 or blank = No
.                                       1 = Yes
.                                       2 = Yes (and Display Invoice Time)
PTCNINTR  DIM      1         213       Using visit based interpreter required
.                                       0 = No
.                                       1 = Yes
PTCNSZEC  DIM      1         214       Send ZEC segment in HL7 broadcasts
.                                       0 or blank = No
.                                       1 = Yes
PTCNDHCU  DIM      1         215       Display Duplicate Warning on UPDHCU
.                                       0 or blank = No
.                                       1 = Yes
PTCNRJNL  DIM      1         216       Enable Restricted Journals on Invoice
.                                       0 or blank = No
.                                       1 = Yes
PTCNSZBR  DIM      1         217       Send ZBR segment in HL7 broadcasts
.                                       0 or blank = No
.                                       1 = Yes
PTCNSA11  DIM      1         218       Send additional A11 on Claim Type change
.                                      from Public.
.                                       0 or blank = No
.                                       1 = Yes
PTCNSA01  DIM      1         219       Send additional A01 on Claim Type change
.                                      to Public.
.                                       0 or blank = No
.                                       1 = Yes
PTCNQP03  DIM      1         220       Use of Quantity in P03 HL7 messages
.                                       0 or blank = Load Quantity as sent
.                                       1 = Load Quantity as individual items
PTCNUHDD  DIM      1         221       Use HDP Deflt on Cat D/Cat DD for PV1.36
.                                       0 or blank = No
.                                       1 = Yes
PTCNUESF  DIM      1         222       Using Eclipse Patient Store and Forward
.                                       0 or blank = No
.                                       1 = Yes
PTCNMDG1  DIM      1         223       Send HL7 DG1 seg for mental health diags
.                                       0 or blank = No
.                                       1 = Inpatient messages only
.                                       2 = Referral messages only
.                                       3 = Both Inpatient and Referral messages
.
PTCNE100  DIM      8         224       Effective Date for DRG 10.0
PTCN100C  DIM      3         232       Grouper V10.0 code for 3M
.
PTCNZNT4  DIM      1         235       Send ZNT (note type 4) in HL7 broadcasts
.                                       0 or blank = No
.                                       1 = Yes
.                                       2 = Yes, with line breaks
PTCNZNT5  DIM      1         236       Send ZNT (note type 5) in HL7 broadcasts
.                                       0 or blank = No
.                                       1 = Yes
.                                       2 = Yes, with line breaks
PTCNCMSZ  DIM      1         237       Include F/L in Clin.Master Status for ZCM
.                                       0 or blank = No
.                                       1 = Yes
PTCNOCDZ  DIM      1         238       Use Outpatient Clinic Desc for ZCM in HL7
.                                       0 or blank = No
.                                       1 = Yes
PTCNWLRS  DIM      1         239       Waiting List Referral Status for RF1 HL7
.                                       0 or blank = No
.                                       1 = Yes
PTCNDUMH  DIM      1         240       Default 'Upload MyHR' on ADM/EMR screens
.                                       0 = No, non-mandatory
.                                       1 = Yes, non-mandatory
.                                       2 = Blank, non-mandatory
.                                       3 = No, mandatory
.                                       4 = Yes, mandatory
.                                       5 = Blank, mandatory
.
PTCNOLPM  DIM      4         241       Overdue leave register polling minutes
.                                       0 = Do not run. Max 1440 (1 day)
PTCNVSRO  DIM      1         245       Visit Search redirect for Outp
.                                       0 or blank - Patient demographics
.                                       1 - Outpatient Visit Enquiry
.                                       2 - Outpatient Visit Details            
PTCNVSRR  DIM      1         246       Visit Search redirect for Ref     
.                                       0 or blank - Patient demographics
.                                       1 - Referral Enquiry
.                                       2 - Referral Details
.
.End of Record               247
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 125                                            *
.*******************************************************************************
.
.         Patient Management
.
PTCNADDR  DIM       52       1         Postcode+Suburb+State for unknown address
.                                      01-04 = Postcode
.                                      05-49 = Suburb
.                                      50-52 = State
PTCNUPIS  DIM       20       53        UPI Broadcast Service Name
PTCNUPIP  DIM       20       73        UPI B'dcast Interface Socket Alias
PTCNNSSI  DIM       20       93        NSW Source System Indicator (EDWARD)
PTCNNIAI  DIM       20       113       NSW Issuing Authority Identifier(EDWARD)
PTCNNECI  DIM       20       133       NSW EDWARD Campus Identifier
PTCNSHSD  DIM       1        154       Send Health Service Details to EDWARD
PTCNEPMI  DIM       1        155       Using External PMI
.                                      Blank or 0 = No
.                                      1 = Yes
PTCNESBT  DIM       15       156       External Search Button Text
PTCNUDF1  DIM       1        171       Do not display PMVXUDF1 in Booking List
.                                       1 = Do not Display
.                                       0 or blank = Display
PTCNFIMW  DIM       1        172       Utilising Weighted FIMs for Programs 
.                                      Details and Extracts
.                                       1 = Yes
.                                       0 or blank = No
PTCNBTRE  DIM       1        173       Collect a Transfer reason (Cat RB) on
.                                      Ward/Bed Transfer
.                                       1 = Yes
.                                       0 or blank = No
PTCNBTOD  DIM       8        174       Overflow Description (for PTCNBTRE)
PTCNTRRS  DIM       1        182       Reason for Transfer on Discharge
.                                       0 or blank = No
.                                       1 = Yes & Mandatory
.                                       2 = Yes & Non Mandatory 
PTCNAVCD  DIM       1        183       Additional validation on Confirm Demo
.                                      on PMI Update
.                                       0 or blank = Save date/user as entered 
.                                                    only
.                                       1 = Always save current date at Update
.                                       2 = Warning if date not current at 
.                                           Update
.
PTCNNEXT  DIM       20       184     NSW External Identifier Issing Auth(EDWARD)
PTCNNCPP  DIM       20       204     NSW Contracted Public Pat Services(EDWARD)
PTCNACTR  DIM       10       224     Default ACC Treatment Provider
PTCNBMYH  DIM       1        234     Send Blank value in ZXV.89 as Blank, 0 or 1
.                                      where 0 = No
.                                            1 = Yes
PTCNEXED  DIM       1        235     Collect Extra Container Info for EDWARD   
.                                     0 or Blank = No
.                                     1 = Yes
PTCNEXDD  DIM       1        236     Using Expected Discharge Date Change Reason
.                                     0 or blank = No
.                                     1 = Yes
PTCNRCAR  DIM       1        237     Recurring Care previous admission to use 
.                                     blank = Most recent matching admission
.                                     1 = First matching admission
PTCNNRTD  DIM       2        238     Number of Records to Display Per Page
PTCNLDII  DIM       1        240     Check Linked Doc for Inpatient Invoice 
PTCNLDEI  DIM       1        241     Check Linked Doc for Emergency Invoice 
PTCNLDOI  DIM       1        242     Check Linked Doc for Outpatient Invoice 
PTCNLDPI  DIM       1        243     Check Linked Doc for Priv Practice Invoice 
PTCNSAMT  DIM       1        244     Send A08 from IBABIL60 (Amt to be Invoiced)
.                                     0 or blank = No
.                                     1 = Yes
PTCNSRFL  DIM       1        245     Send additional A08 with A22 Ret from Leave
.                                     0 or blank = No
.                                     1 = Yes
PTCNINVH  DIM       1        246     Send A08 when Invoice on Hold data changes
.                                     0 or blank = No
.                                     1 = Yes
PTCNIPHY  DIM       1        247     Patient Banner Current IP hyperlink       
.                                     0 or blank = No hyperlink
.                                  1 = Hyperlink to Current IP Admission Enquiry
PTCNTOFB  DIM       1        248     Include Patient Time of Birth in PID.7
.                                    0 or blank = Not include Time of Birth
.                                    1 = Yes include Time of Birth
PTCNCODC  DIM       1        249     Send A08 for CodingComplete status change
.                                     0 or blank = No
.                                     1 = Yes
.End of Record               250
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 127                                            *
.*******************************************************************************
.
.         Patient Management
.
PTCNESFO  DIM       60         1    Eclipse STF Outbound Path Parameter
PTCNESFI  DIM       60        61    Eclipse STF Sent Path Parameter
PTCNUTPS  DIM       1        121    Using Test or Production for STF claims
PTCNUEBB  DIM       1        122    Using Eclipse Bulk Billing
PTCNEDBO  DIM       60       123    Eclipse DBS Outbound Path Parameter
PTCNEDBI  DIM       60       183    Eclipse DBS Sent Path Parameter
PTCNUTPB  DIM       1        243    Using Test or Production for DBS claims
.
.End of Record               244
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 128                                            *
.*******************************************************************************
.
.         Patient Management
.
PTCNDBBN  DIM       5          1    Eclipse DBS PMSClaimID Batch Number
PTCNDBBC  DIM       8          6    Eclipse DBS Batch Count
PTCNPCBC  DIM       8         14    Eclipse PCS Batch Count
PTCNBAUD  DIM       1         22    Using Ward Bed Audit Functionality
PTCNBEML  DIM       80        23    Email Address for Ward Bed Audit
PTCNLPRA  DIM       1        103    Do not default first Linked HCP Practice
.                                   if multiple exist. blank or 0=No 1=Yes
PTCNGNTR  DIM       1        104    Do not generate hospital calculated
.                                   statistics for the Trailer Records
PTCNUABF  DIM       1        105    Using Activity Based Funding (ABF)
PTCNSMSO  DIM       1        106    SMS Selection List Display Order
.                                   0 = Code Order 
.                                   1 = Description Order
PTCNROPD  DIM       1        107    Receive S02/S03/S04 (OPD Appt) HL7 messages
.                                     0 or blank = No
.                                     1 = Yes
PTCNPRVM  DIM       1        108    HCP Provider Number mandatory for
.                                   'Attending' providers
.                                   0 or blank = No
.                                   1 = Yes
PTCNB31R  DIM       1        109    Broadcast HL7 A31 from HL7RECVR 
.                                     0 or blank = No
.                                     1 = Yes
PTCNEVN4  DIM       3        110    Code to populate ADT^A31 EVN.4 field 
.
PTCNUP31  DIM       1        113    Update PMI fields as A31 for Incoming A08
.
PTCNSSMD  DIM       1        114    Send SMD from webPas (0=No 1=Yes)
PTCNSRAD  DIM       1        115    Generate and send REF^|12 with attached
.                                   document (0=No 1=Yes)
PTCNOHCS  DIM      80        116    Location of OHC-SM Server, IP or fixed 
.                                   address
.
PTCNOECT  DIM       1        196    Using OEC on Theatre Booking page?
.                                   1=Yes
PTCNOS12  DIM       1        197    Receive S12 (Outpatients Booking)
.                                     0 or blank = No / 1 = Yes
PTCNOS13  DIM       1        198    Receive S13 (Outpatients Reschedule)
.                                     0 or blank = No / 1 = Yes
PTCNOS14  DIM       1        199    Receive S14 (Outpatients Update)
.                                     0 or blank = No / 1 = Yes
PTCNOS15  DIM       1        200    Receive S15 (Outpatients Cancellation)
.                                     0 or blank = No / 1 = Yes
PTCNOS26  DIM       1        201    Receive S26 (Outpatients Did Not Attend)
.                                     0 or blank = No / 1 = Yes
PTCNIS12  DIM       1        202    Receive S12 (Inpatients Pre-admission)
.                                     0 or blank = No / 1 = Yes
PTCNIS14  DIM       1        203    Receive S14 (Inpatients Update Pre-admn)
.                                     0 or blank = No / 1 = Yes
PTCNIS15  DIM       1        204    Receive S15 (Inpatients Cancel Pre-admn)
.                                     0 or blank = No / 1 = Yes
PTCNRS25  DIM       1        205    Receive SCH.25 for OP Booking Times
.                                     0 or blank = No / 1 = Yes
PTCNDCSM  DIM       1        206    Default codes for Inbound SIU Messages
.                                     0 or blank = No / 1 = Yes
PTCNGOSM  DIM       1        207    Generate outbound HL7 after inbound SIU
.                                     0 or blank = No / 1 = Yes
PTCNAILP  DIM       1        208    Use AIL or AIP for Clinic ID in SIU OUT
.                                     0 or blank = AIP / 1 = AIL
PTCNCPRG  DIM       1        209    Create Program Referral from inbound REF^I12
.                                     0 or blank = No / 1 = Yes
PTCNSTYP  DIM       1        210    System Type
.                                     0 (Default) Production
.                                     1 = Test/development
.                                     2 = Training
.
PTCNPCIP  DIM       6        211    PCIW Printer ID
PTCNIMST  DIM       1        217    Multiple IMCW STSW switch
PTCNIMRT  DIM       1        218    Multiple IMCW RTVW switch
PTCNIHST  DIM       1        219    Multiple IHCW STSW switch
PTCNIHRT  DIM       1        220    Multiple IHCW RTVW switch
PTCNERRT  DIM       1        221    Multiple ERAW RTVW switch
PTCNIMSD  DIM       1        222    Date Range IMCW STSW switch
PTCNIHSD  DIM       1        223    Date Range IHCW STSW switch
.
PTCNSNTY  DIM       1        224    Send Preferred Name/Name Type in HL7 PID.9
.                                     0 or blank = No
.                                     1 = Send Name Type
.                                     2 = Send Preferred Names and Name Type 
PTCNRNTY  DIM       1        225    Receive Name Type in HL7 PID.9
.                                     0 or blank = No
.                                     1 = Receive Name Type
PTCNNMPR  DIM       1        226    Display Preferred Name Option
.                                     0 = No
.                                     1 = Yes - Display Preferred Given Name 
.                                               Only
.                                     2 = Yes - Display Preferred Surname Only
.                                     3 = Yes - Display Both Preferred Given 
.                                               Name and Preferred Surname
.
PTCNEMPH  DIM       1        227    Display Phone Numer and/or Email Icons
.                                     0 = Do not display either icons
.                                     1 = Display Phone number only
.                                     2 = Display Email only
.                                     3 = Display Phone & Email
.
PTCNUEVI  DIM       1        228    Use External Visit ID as Incoming PV1.19
.                                     0 or blank = No
.                                     1 = Yes
PTCNSSPF  DIM       1        229    Site Specific fields to be displayed for CAB
.                                     0 = No Site
.                                     1 = Cabrini
PTCNALTV  DIM       1        230    Show External Visit ID in Patient Search
.                                   Banner and Selected Visit Lists
.                                   0 = No
.                                   1 = Yes
PTCNGDX2  DIM       8        231    Go live date for ICD10 Ed.12
.                                     (Default '99991231')
PTCNE110  DIM       8        239    Effective Date for DRG 11.0
PTCN110C  DIM       3        247    Grouper V11.0 code for 3M
.
PTCNHFED  DIM       1        250    Enhanced Health Fund Field End Date 
.
PTCNPCVA  DIM       1        251    Validation for Pension Card PID.3 
.End of Record               252
+
.*******************************************************************************
.*        PATCONFD.INC : Sector 129                                            *
.*******************************************************************************
.
.         Medicare WebServices
.
PTCNWSDR  DIM      60          1   Medicare WebServices directory
PTCNWSIN  DIM       1         61   Using Medicare WebServices
.                                  0 or blank = No
.                                  1 = Yes
PTCNRKDY  DIM       6         62   Number of Days before PRODA Key Expiry to 
.                                  Refresh Device Key
PTCNTKMN  DIM       3         68   Number of minutes before each PRODA Token 
.                                  refresh 
PTCNOECW  DIM       1         71   Switch on WebServices OECW functionality
PTCNOECE  DIM       1         72   Switch off Eclipse OEC functionality
PTCNIMCW  DIM       1         73   Switch on WebServices IMCW functionality
PTCNTZNW  DIM       6         74   WebServices Time Zones
.                                  UTC +8:00 AWST Australian Western Standard 
.                                            Time
.                                  UTC +8:45 ACWST Australian Central Western i
.                                            Standard Time
.                                  UTC +9:30 ACST Australian Central Standard 
.                                            Time
.                                  UTC +10:00 AEST Australian Eastern Standard
.                                             Time
.                                  UTC +10:30 ACDT Australian Central Daylight 
.                                             Time
.                                  UTC +11:00 AEDT Australian Eastern Daylight 
.                                             Time
.                                             LHDT Lord Howe Daylight Time
PTCNWPKG  DIM       8         80   WebServices Participants Last Keyword Gen
.                                  Date
PTCNIHCW  DIM       1         88   Switch on WebServices IHCW functionality
PTCNPPIN  DIM       1         89   Using new Patient Portion Inv.functionality
.                                  0 or blank = No
.                                  1 = Yes
PTCNADEB  DIM       1         90   Automatic reassign patient debt for existing
.                                  Patient Only Invoice
PTCNPCIW  DIM       1         91   Switch on WebServices PCIW functionality
.
PTCNACTM  DIM       1         92    ACC Transmission Method
.                                     0 = XML
.                                     1 = API
PTCNACAE  DIM     100         93    ACC API Endpoint (ACC45 Claim Submission)
.                                     URL (max 100 characters)
PTCNBBSW  DIM       1        193    Switch on WebServices BBSW functionality
.
PTCNACAK  DIM      50        194    ACC API Key (ACC45 Claim Submission)
.
PTCNAPCP  DIM       1        244    Automate Webservices PCIW Pendable resub    
.
PTCNFHIR  DIM       1        245    Using FHIR 0 = No 1 = Yes
PTCNFHPA  DIM       1        246    Using FHIR Patient Inbound 0 = No 1 = Yes
PTCNRA37  DIM       1        247    Send A37 after U/R unmerge
.                                       0 or blank = No
.                                       1 = Yes
.
.End of Record               248
.*******************************************************************************
.*        PATCONFD.INC : Sector 130                                            *
.*******************************************************************************
.
.         Patient Management
.
PTCNHABN  DIM      11          1   Hospital ABN Number
.
.
.End of Record                 12

+

