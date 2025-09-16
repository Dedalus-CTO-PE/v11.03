. ****************************************************************************
. *                                                                          *
. * Include Name :      FMSCONIO.INC                                         *
. *                                                                          *
. * Function     :      File IO include for                                  *
. *                     Control File Sectors for Accounting System           *
. *                                                                          *
. * Modifications:      See FMSCONFD                                         *  
. * V9.09.01   04/09/2007  Sandra Barcham   CAR 149415                       *
. *            Add FMCOSCDI Using Diss Code - Sector Code Reporting          *
. * V9.04.01   20/06/2005  Sandra Barcham   CAR                              *
. *            Add FMCOEXTR Extra character for oracle financial             *
. *            Extract                                                       *
. * V9.03.01   07/01/2004  Mike Laming      CAR 45907                        *
. *            Add FMCOCSRL (Indiv.Receipt Rel.Flag) to IBA Quotes Screen    *
. * VF.11.01   10/12/2003 Henry Son         CAR 14452                        *
. *            Added exempt Creditor BAS code -FMCOXBAS                      *
. *                                                                          *
. ****************************************************************************
.
RDFMCO50  READ      CONTROLF,NUM50;FMCOHOSP,FMCOCBUD,FMCOLBUD,FMCOYEAR:
                                   FMCOPERD,FMCOSDIR,FMCOLDIR,FMCOLCBU:
                                   FMCOLLBU,FMCOLOGR,FMCOSPAR,FMCOSTPO,FMCOINFF:
                                   FMCOPSTA,FMCOELED,FMCOLLED,FMCODEFA:
                                   FMCOTBID,FMCOEPWC,XXCOGST,XXCOGSTD:
                                   XXCOGSTN,FMCOFUPD,FMCOEXTY,FMCOBVAR:
                                   FMCOSTSC,FMCOTACC,FMCOHPRT,FMCOATOT:
                                   FMCOAPCH,FMCOITRK,FMCOINVP,FMCOJAUT:
                                   FMCODTWR,FMCOBUPD
          RETURN
.
WRFMCO50  WRITE     CONTROLF,NUM50;FMCOHOSP,FMCOCBUD,FMCOLBUD,FMCOYEAR:
                                   FMCOPERD,FMCOSDIR,FMCOLDIR,FMCOLCBU:
                                   FMCOLLBU,FMCOLOGR,FMCOSPAR,FMCOSTPO,FMCOINFF:
                                   FMCOPSTA,FMCOELED,FMCOLLED,FMCODEFA:
                                   FMCOTBID,FMCOEPWC,XXCOGST,XXCOGSTD:
                                   XXCOGSTN,FMCOFUPD,FMCOEXTY,FMCOBVAR:
                                   FMCOSTSC,FMCOTACC,FMCOHPRT,FMCOATOT:
                                   FMCOAPCH,FMCOITRK,FMCOINVP,FMCOJAUT:
                                   FMCODTWR,FMCOBUPD
          RETURN
.
RDFMCO51  READ      CONTROLF,NUM51;HMENUFMS,HSECUFMS,HSECRFMS,HDATAFMS:
                                   FMSAUDA,FMSAUDB,FMSAUDC,FMSAUDD,FMSAUDE:
                                   FMSAUDF,FMSAUDG,FMSAUDH,FMSAUDI,FMSAUDJ:
                                   FMSAUDK,FMSAUDL,FMSUUD1A,FMSUUD2A:
                                   FMSUUD2B,FMSUUD3A,FMSUUD4A,FMSUUD5A:
                                   FMSUUD6A,FMSUUD7A,FMSUUD8A,FMACR1ON:
                                   FMACR1LN,FMACR1NA,FMACR2ON,FMACR2LN:
                                   FMACR2NA,FMACR3ON,FMACR3LN,FMACR3NA:
                                   FMACR4ON,FMACR4LN,FMACR4NA,FMACC1ON:
                                   FMACC1NA,FMACC2ON,FMACC2NA,FMACC3ON:
                                   FMACC3NA,FMACC4ON,FMACC4NA,FMACD1ON:
                                   FMACD1NA,FMACD2ON,FMACD2NA,FMACD3ON:
                                   FMBCRBAT,FMBPABAT,FMBAUBAT,FMBCHBAT:
                                   FMBSTBAT,FMDEFCRD,FMDEFLED,FMDEFDIS
          RETURN
.
RDFMCO1X  READ      FCONTROL,NUM51;HMENUFMS,HSECUFMS,HSECRFMS,HDATAFMS:
                                   FMSAUDA,FMSAUDB,FMSAUDC,FMSAUDD,FMSAUDE:
                                   FMSAUDF,FMSAUDG,FMSAUDH,FMSAUDI,FMSAUDJ:
                                   FMSAUDK,FMSAUDL,FMSUUD1A,FMSUUD2A:
                                   FMSUUD2B,FMSUUD3A,FMSUUD4A,FMSUUD5A:
                                   FMSUUD6A,FMSUUD7A,FMSUUD8A,FMACR1ON:
                                   FMACR1LN,FMACR1NA,FMACR2ON,FMACR2LN:
                                   FMACR2NA,FMACR3ON,FMACR3LN,FMACR3NA:
                                   FMACR4ON,FMACR4LN,FMACR4NA,FMACC1ON:
                                   FMACC1NA,FMACC2ON,FMACC2NA,FMACC3ON:
                                   FMACC3NA,FMACC4ON,FMACC4NA,FMACD1ON:
                                   FMACD1NA,FMACD2ON,FMACD2NA,FMACD3ON:
                                   FMBCRBAT,FMBPABAT,FMBAUBAT,FMBCHBAT:
                                   FMBSTBAT,FMDEFCRD,FMDEFLED,FMDEFDIS
          RETURN
.
WRFMCO51  WRITE     CONTROLF,NUM51;HMENUFMS,HSECUFMS,HSECRFMS,HDATAFMS:
                                   FMSAUDA,FMSAUDB,FMSAUDC,FMSAUDD,FMSAUDE:
                                   FMSAUDF,FMSAUDG,FMSAUDH,FMSAUDI,FMSAUDJ:
                                   FMSAUDK,FMSAUDL,FMSUUD1A,FMSUUD2A:
                                   FMSUUD2B,FMSUUD3A,FMSUUD4A,FMSUUD5A:
                                   FMSUUD6A,FMSUUD7A,FMSUUD8A,FMACR1ON:
                                   FMACR1LN,FMACR1NA,FMACR2ON,FMACR2LN:
                                   FMACR2NA,FMACR3ON,FMACR3LN,FMACR3NA:
                                   FMACR4ON,FMACR4LN,FMACR4NA,FMACC1ON:
                                   FMACC1NA,FMACC2ON,FMACC2NA,FMACC3ON:
                                   FMACC3NA,FMACC4ON,FMACC4NA,FMACD1ON:
                                   FMACD1NA,FMACD2ON,FMACD2NA,FMACD3ON:
                                   FMBCRBAT,FMBPABAT,FMBAUBAT,FMBCHBAT:
                                   FMBSTBAT,FMDEFCRD,FMDEFLED,FMDEFDIS
          RETURN
.
RDFMCO52  READ      CONTROLF,NUM52;FMACD3NA,FMACD4ON,FMACD4NA,FMACA1ON:
                                   FMACA1DP,FMACA1NA,FMACA2ON,FMACA2DP:
                                   FMACA2NA,FMACA3ON,FMACA3DP,FMACA3NA:
                                   FMACA4ON,FMACA4DP,FMACA4NA,FMACW1ON:
                                   HDATASQL,HFSQLCMD,FMSUFLT,FMSRESPS:
                                   FMJOPRE1,FMJONEX1,FMJOPRE2,FMJONEX2:
                                   FMJOPRE3,FMJONEX3:
                                   FMCOSPA1:
                                   FMBCJBAT,FMBCCBAT,FMBCOBAT,FMCOUST:
                                   FMCOCALC,FMCOFONO,FMCOLONO:
                                   FMJOPRE4,FMJONEX4,FMCRPUR:
                                   FMJOPRE5,FMJONEX5
          RETURN
.
WRFMCO52  WRITE     CONTROLF,NUM52;FMACD3NA,FMACD4ON,FMACD4NA,FMACA1ON:
                                   FMACA1DP,FMACA1NA,FMACA2ON,FMACA2DP:
                                   FMACA2NA,FMACA3ON,FMACA3DP,FMACA3NA:
                                   FMACA4ON,FMACA4DP,FMACA4NA,FMACW1ON:
                                   HDATASQL,HFSQLCMD,FMSUFLT,FMSRESPS:
                                   FMJOPRE1,FMJONEX1,FMJOPRE2,FMJONEX2:
                                   FMJOPRE3,FMJONEX3:
                                   FMCOSPA1:
                                   FMBCJBAT,FMBCCBAT,FMBCOBAT,FMCOUST:
                                   FMCOCALC,FMCOFONO,FMCOLONO:
                                   FMJOPRE4,FMJONEX4,FMCRPUR:
                                   FMJOPRE5,FMJONEX5:
                                   "0000000000000000000000000000000000000000":
                                   "0000000000000000000000000000000000000000"
          RETURN
.
RDFMCO65  READ      CONTROLF,NUM65;FMCODFBN,FMCODFCN,FMCODFDI:
                                   FMCODFFE,FMCODFPF,FMCODFSS,FMCODFN1:
                                   FMCODFN2,FMCODFA1,FMCODFA2,FMCODFA3:
                                   FMCODFCI,FMCODFST,FMCODFPC
          RETURN
.
WRFMCO65  WRITE     CONTROLF,NUM65;FMCODFBN,FMCODFCN,FMCODFDI:
                                   FMCODFFE,FMCODFPF,FMCODFSS,FMCODFN1:
                                   FMCODFN2,FMCODFA1,FMCODFA2,FMCODFA3:
                                   FMCODFCI,FMCODFST,FMCODFPC:
                                   "0000000000000000000000000000000000000000":
                                   "0000000000000000000000000000000000000000"
          RETURN
.
RDFMCO66  READ      CONTROLF,NUM66;FMCODFCC,FMCODFFX,FMCOCOMT,FMCOINFC:
                                   FMCOINPV,FMCODUPI,FMCOIDIS,FMCOCDIS:
                                   FMCOPDIS,FMCORDIS,FMCOPAYG,FMCOINGS:
                                   FMCOPGCR,FMCOPBAS,FMCOUBPP,FMCOXBAS:
                                   FMCOCSRL,FMCOEXTR,FMCOSCDI
          RETURN
.
WRFMCO66  WRITE     CONTROLF,NUM66;FMCODFCC,FMCODFFX,FMCOCOMT,FMCOINFC:
                                   FMCOINPV,FMCODUPI,FMCOIDIS,FMCOCDIS:
                                   FMCOPDIS,FMCORDIS,FMCOPAYG,FMCOINGS:
                                   FMCOPGCR,FMCOPBAS,FMCOUBPP,FMCOXBAS:
                                   FMCOCSRL,FMCOEXTR,FMCOSCDI:
                                   "00000000000000000000000000000000000000":
                                   "000000000"
          RETURN
.
RDFMCOJ1  READ      CONTROLF,NUM52;*174,FMJONEX1 * read for next gen. jour. id
          RETURN
.
WRFMCOJ1  WRITAB    CONTROLF,NUM52;*174,FMJONEX1 * write for next gen. jour. id
          RETURN
.
RDFMCOJ2  READ      CONTROLF,NUM52;*181,FMJONEX2 * read for next std. jour. id
          RETURN
.
WRFMCOJ2  WRITAB    CONTROLF,NUM52;*181,FMJONEX2 * write for next std. jour. id
          RETURN
.
RDFMCOJ3  READ      CONTROLF,NUM52;*188,FMJONEX3 * read for next per. jour. id
          RETURN
.
WRFMCOJ3  WRITAB    CONTROLF,NUM52;*188,FMJONEX3 * write for next per. jour. id
          RETURN
.
RDFMCOJ4  READ      CONTROLF,NUM52;*235,FMJONEX4 * read for next inter fund id
          RETURN
.
WRFMCOJ4  WRITAB    CONTROLF,NUM52;*235,FMJONEX4 * write for next inter fund id
          RETURN
.
RDFMCOJ5  READ      CONTROLF,NUM52;*235,FMJONEX5 * read for next interface id
          RETURN
.
WRFMCOJ5  WRITAB    CONTROLF,NUM52;*235,FMJONEX5 * write for next interface id
          RETURN
.
RDFMCOO1  READ      CONTROLF,NUM52;*220,FMCOFONO,FMCOLONO * read for next order
.                                                         * number
          RETURN
.
WRFMCOO1  WRITAB    CONTROLF,NUM52;*220,FMCOFONO,FMCOLONO * write for next order
.                                                         * number
          RETURN
.
.
. Batch Routines
. --------------
RDFMCOCR  READ      CONTROLF,NUM51;*217,FMBCRBAT * creditor credits read
          MOVE      FMBCRBAT,CFORM5
          ADD       ONE,CFORM5
          MOVE      CFORM5,FMBCRBAT
          REP       " 0",FMBCRBAT
.
WRFMCOCR  WRITAB    CONTROLF,NUM51;*217,FMBCRBAT * creditor credits write
          SUB       ONE,CFORM5
          MOVE      CFORM5,FMBCRBAT
          REP       " 0",FMBCRBAT
          RETURN
.
RDFMCOPA  READ      CONTROLF,NUM51;*222,FMBPABAT * creditor payments read
          MOVE      FMBPABAT,CFORM5
          ADD       ONE,CFORM5
          MOVE      CFORM5,FMBPABAT
          REP       " 0",FMBPABAT
.
WRFMCOPA  WRITAB    CONTROLF,NUM51;*222,FMBPABAT * creditor payments write
          SUB       ONE,CFORM5
          MOVE      CFORM5,FMBPABAT
          REP       " 0",FMBPABAT
          RETURN
.
RDFMCOAU  READ      CONTROLF,NUM51;*227,FMBAUBAT * creditor auto pay read
          MOVE      FMBAUBAT,CFORM5
          ADD       ONE,CFORM5
          MOVE      CFORM5,FMBAUBAT
          REP       " 0",FMBAUBAT
.
WRFMCOAU  WRITAB    CONTROLF,NUM51;*227,FMBAUBAT * creditor auto pay write
          SUB       ONE,CFORM5
          MOVE      CFORM5,FMBAUBAT
          REP       " 0",FMBAUBAT
          RETURN
.
RDFMCOCH  READ      CONTROLF,NUM51;*232,FMBCHBAT * creditor can cheq read
          MOVE      FMBCHBAT,CFORM5
          ADD       ONE,CFORM5
          MOVE      CFORM5,FMBCHBAT
          REP       " 0",FMBCHBAT
.
WRFMCOCH  WRITAB    CONTROLF,NUM51;*232,FMBCHBAT * creditor can cheq write
          SUB       ONE,CFORM5
          MOVE      CFORM5,FMBCHBAT
          REP       " 0",FMBCHBAT
          RETURN
.
RDFMCOST  READ      CONTROLF,NUM51;*237,FMBSTBAT * stat trans read
          MOVE      FMBSTBAT,CFORM5
          ADD       ONE,CFORM5
          MOVE      CFORM5,FMBSTBAT
          REP       " 0",FMBSTBAT
.
WRFMCOST  WRITAB    CONTROLF,NUM51;*237,FMBSTBAT * stat trans write
          SUB       ONE,CFORM5
          MOVE      CFORM5,FMBSTBAT
          REP       " 0",FMBSTBAT
          RETURN
.
RDFMCOCJ  READ      CONTROLF,NUM52;*203,FMBCJBAT * journal read
          MOVE      FMBCJBAT,CFORM5
          ADD       ONE,CFORM5
          MOVE      CFORM5,FMBCJBAT
          REP       " 0",FMBCJBAT
.
WRFMCOCJ  WRITAB    CONTROLF,NUM52;*203,FMBCJBAT * journal write
          SUB       ONE,CFORM5
          MOVE      CFORM5,FMBCJBAT
          REP       " 0",FMBCJBAT
          RETURN
.
RDFMCOCC  READ      CONTROLF,NUM52;*208,FMBCCBAT * creditor invoice read
          MOVE      FMBCCBAT,CFORM5
          ADD       ONE,CFORM5
          MOVE      CFORM5,FMBCCBAT
          REP       " 0",FMBCCBAT
.
WRFMCOCC  WRITAB    CONTROLF,NUM52;*208,FMBCCBAT * creditor invoice write
          SUB       ONE,CFORM5
          MOVE      CFORM5,FMBCCBAT
          REP       " 0",FMBCCBAT
          RETURN
.
RDFMCOCO  READ      CONTROLF,NUM52;*213,FMBCOBAT * other read
          MOVE      FMBCOBAT,CFORM5
          ADD       ONE,CFORM5
          MOVE      CFORM5,FMBCOBAT
          REP       " 0",FMBCOBAT
.
WRFMCOCO  WRITAB    CONTROLF,NUM52;*213,FMBCOBAT * other write
          SUB       ONE,CFORM5
          MOVE      CFORM5,FMBCOBAT
          REP       " 0",FMBCOBAT
          RETURN
.
RDFMCOCX  READ      FCONTROL,NUM52;*213,FMBCOBAT * other read
          MOVE      FMBCOBAT,CFORM5
          ADD       ONE,CFORM5
          MOVE      CFORM5,FMBCOBAT
          REP       " 0",FMBCOBAT
.
WRFMCOCX  WRITAB    FCONTROL,NUM52;*213,FMBCOBAT * other write
          SUB       ONE,CFORM5
          MOVE      CFORM5,FMBCOBAT
          REP       " 0",FMBCOBAT
          RETURN
.
.
RDFMCOHC  READ      CONTROLF,NUM50;*11,FMCOYEAR,FMCOPERD * load/extract read
          RETURN
.
WRFMCOHC  WRITAB    CONTROLF,NUM50;*11,FMCOYEAR,FMCOPERD * load/extract write
          RETURN
.
.
RDFMCOBN  READ      CONTROLF,NUM65;*1,FMCODFBN   * batch number read
          MOVE      ZERO,XFORM8
          MOVE      FMCODFBN,XFORM8
          ADD       ONE,XFORM8
          MOVE      XFORM8,FMCODFBN
          REP       " 0",FMCODFBN
.
WRFMCOBN  WRITAB    CONTROLF,NUM65;*1,FMCODFBN   * batch number write
          SUB       ONE,XFORM8
          MOVE      XFORM8,FMCODFBN
          REP       " 0",FMCODFBN
          RETURN
.
RDFMCOCN  READ      CONTROLF,NUM65;*9,FMCODFCN   * consecutive number read
          MOVE      ZERO,XFORM8
          MOVE      FMCODFCN,XFORM8
          ADD       ONE,XFORM8
          MOVE      XFORM8,FMCODFCN
          REP       " 0",FMCODFCN
.
WRFMCOCN  WRITAB    CONTROLF,NUM65;*9,FMCODFCN   * consecutive number write
          SUB       ONE,XFORM8
          MOVE      XFORM8,FMCODFCN
          REP       " 0",FMCODFCN
          RETURN
.
