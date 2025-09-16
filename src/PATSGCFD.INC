. *****************************************************************************
. *                                                                           *
. * Include Name  : PATSGCFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Patient                            *
. *                 Suggested Classification Exceptions                       *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : patsgcaf.dat                                              *
. *                                                                           *
. * Keys          : KEY18                                                     *
. *                                                                           *
. * I/O Include   : PATSGCIO.INC                                              *
. *                                                                           *
. * Modifications : V5.00  18/09/1990 Justin Coates                           *
. *                        Include written                                    *
. *                 V6.03  24/04/1995 Paul Howells  SRF 134946                *
. *                        Ported from 6.03                                   *
. *                 V9.07  18/09/2006 J.Tan         SRF 119336                *
. *                        Added claim code                                   *
. *****************************************************************************
.
.Data File Definition
.--------------------
.
PATSGCA1  IFILE     SQL, FIXED=39, KEY="U19-21,1-6,7-15"
.
. Name    Type      Length  Physical  Start  Description
. ----    ----      ------  --------  -----  -----------
PTSGFUND  DIM       6              6      1  Health Funds Code (from PATFN1FD)
PTSGMBS   DIM       9              9      7  MBS Item Code     (from PATITMFD)
PTSGCLSS  DIM       3              3     16  Suggested classification (Cat "A ")
PTSGCLMN  DIM       3              3     19  Claim Code (Cat "CL")
PTSGSPAR  DIM       17            17     22  Spare variable
.
.End of Record                           39
.
