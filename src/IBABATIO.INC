.
. ********************************************************** 
. *                                                        *
. *  Include Name :  IBABATIO                              *
. *                                                        *
. *  Function     :  I/O for bchNNNNN file                 *
. *                                                        *
. *  Modifications:  V5.00  14.02.89  S.Barcham   (I.B.A.) *
. *                         Rewrite Include                *
. *                                                        *
. *                 V5.01  01.06.91  B. Ackland  (I.B.A.)  *
. *                        Modify include for FMS          *
. *                                                        *
. *                 V5.02  08.10.91  Neeriem Dye (I.B.A.)  *
. *                        Add BC0SPAR*, BC1SPAR*, BC1UTYPE*
. *                                                        *
. **********************************************************
.
RDBAT0    READ      BATFILE,ZERO;BC0DIM2,BC0NXTSC,BC0NXTSW,BC0BTCHT:
                                 BC0SUPBC,BC0DIM6,BC0SPLTK,BC0SPLTP,BC0ONE:
                                 BC0SPSEC,BC0DISC,BC0SPAR1,BC0SPAR2
          RETURN
.
WRBAT0    WRITE     BATFILE,ZERO;BC0DIM2,BC0NXTSC,BC0NXTSW,BC0BTCHT:
                                 BC0SUPBC,BC0DIM6,BC0SPLTK,BC0SPLTP,BC0ONE:
                                 BC0SPSEC,BC0DISC,BC0SPAR1,BC0SPAR2
.
RDBATS0   READ      BATFILE,ZERO;*3,BC0NXTSC,*26,BC0SUPBC
          RETURN
.
RDBATRS0  READ      BATFILE,ZERO;*64,BC0SPSEC
          RETURN
.
WRBATS0   WRITAB    BATFILE,ZERO;*3,BC0NXTSC
          RETURN
.
RDBATR0   READ      BATFILE,ZERO;*8,BC0NXTSW,BC0BTCHT:
                                 BC0SUPBC,BC0DIM6,BC0SPLTK,BC0SPLTP,BC0ONE:
                                 BC0SPSEC,BC0DISC,BC0SPAR1,BC0SPAR2
          RETURN
.
WRBATR0   WRITAB    BATFILE,ZERO;*8,BC0NXTSW,BC0BTCHT:
                                 BC0SUPBC,BC0DIM6,BC0SPLTK,BC0SPLTP,BC0ONE:
                                 BC0SPSEC,BC0DISC,BC0SPAR1,BC0SPAR2
.
RDBAT1    READ      BATFILE,ONE;BC1STAT,BC1HEAD,BC1BATCH,BC1KEYT,BC1ACCT:
                                BC1NOTR,BC1DATE,BC1OPER,BC1LEDG:
                                BC1TRAN,BC1BDATE,BC1REORG,BC1DISS:
                                BC1PAYT,BC1RESP,BC1REST,BC1UTYPE:
                                BC1SPAR1,BC1SPAR2
          RETURN
.
WRBAT1    WRITE     BATFILE,ONE;BC1STAT,BC1HEAD,BC1BATCH,BC1KEYT,BC1ACCT:
                                BC1NOTR,BC1DATE,BC1OPER,BC1LEDG:
                                BC1TRAN,BC1BDATE,BC1REORG,BC1DISS:
                                BC1PAYT,BC1RESP,BC1REST,BC1UTYPE:
                                BC1SPAR1,BC1SPAR2
          RETURN
.
RDBATR1   READ      BATFILE,ONE;*78,BC1REST
          RETURN
.
WRBATR1   WRITAB    BATFILE,ONE;*78,BC1REST
          RETURN
.
RDBATS1   READ      BATFILE,ONE;BC1STAT
          RETURN
.
WRBATS1   WRITAB    BATFILE,ONE;BC1STAT
          RETURN
.
RDBATC    READ     BATFILE,BC0NXTSC;BCSTAT,BCTRAN,BCLEDG,BCACCT,BCDISS:
                                    BCPAYT,BCRED,BCREFER,BCAMT,BCORD:
                                    BCDATEE,BCDATED,BCDATCX,BCACCTP:
                                    BCCHEQ,BCBATCH,BCINVT,BCDISC,BCRESP:
                                    BCCOMX,BCCOMXA,BCTRAND,BCCONT:
                                    BCDISCC,BCCEORD,BCCELNE,BCCATA:
                                    BCCHQAC,BCCDESC,BCBASC,BCCSPAR
          RETURN
.
RDBATD    READ     BATFILE,BC0NXTSC;*60,BCORD
          RETURN
.
RDBATE    READ     BATFILE,TWO;*204,BCCONT
          RETURN
.
RDBATO    READ     BATFILE,HNREC;BCSTAT,BCTRAN,BCLEDG,BCACCT,BCDISS:
                                 BCPAYT,BCRED,BCREFER,BCAMT,BCORD:
                                 BCDATEE,BCDATED,BCDATCX,BCACCTP:
                                 BCCHEQ,BCBATCH,BCINVT,BCDISC,BCRESP:
                                 BCCOMX,BCCOMXA,BCTRAND,BCCONT:
                                 BCDISCC,BCCEORD,BCCELNE,BCCATA:
                                 BCCHQAC,BCCDESC,BCBASC,BCCSPAR
          RETURN
.
RDBATP    READ     BATFILE,BC0SPSEC;BCSTAT,BCTRAN,BCLEDG,BCACCT,BCDISS:
                                    BCPAYT,BCRED,BCREFER,BCAMT,BCORD:
                                    BCDATEE,BCDATED,BCDATCX,BCACCTP:
                                    BCCHEQ,BCBATCH,BCINVT,BCDISC,BCRESP:
                                    BCCOMX,BCCOMXA,BCTRAND,BCCONT:
                                    BCDISCC,BCCEORD,BCCELNE,BCCATA:
                                    BCCHQAC,BCCDESC,BCBASC,BCCSPAR
          RETURN
.
RDBATX    READ     BATFILE,HNREC;*2,BCTRAN
          RETURN
.
WRBATA    WRITAB   BATFILE,HNREC;*45,BCAMT
          RETURN
.
WRBATC    WRITE    BATFILE,BC0NXTSC;BCSTAT,BCTRAN,BCLEDG,BCACCT,BCDISS:
                                    BCPAYT,BCRED,BCREFER,BCAMT,BCORD:
                                    BCDATEE,BCDATED,BCDATCX,BCACCTP:
                                    BCCHEQ,BCBATCH,BCINVT,BCDISC,BCRESP:
                                    BCCOMX,BCCOMXA,BCTRAND,BCCONT:
                                    BCDISCC,BCCEORD,BCCELNE,BCCATA:
                                    BCCHQAC,BCCDESC,BCBASC,BCCSPAR
          RETURN
.
WRBATE    WRITAB   BATFILE,HNREC;*60,BCORD
          RETURN
.
WRBATCHQ  WRITAB   BATFILE,HNREC;*60,BCORD,BCDATEE
          RETURN
.
WRBATS    WRITAB   BATFILE,HNREC;BCSTAT
          RETURN
.
WRBATT    WRITAB   BATFILE,BC0SPSEC;*119,BCINVT
          RETURN
.
WRBATX    WRITAB   BATFILE,HNREC;*2,BCTRAN
          RETURN
.
WRBATO    WRITAB   BATFILE,HNREC;*6,BCACCT,*18,BCDISS,*45,BCAMT,*149,BCRESP
          RETURN
.
WRBATF    WRITAB   BATFILE,HNREC;*119,BCINVT,BCDISC,*216,BCDISCC
          RETURN
.
