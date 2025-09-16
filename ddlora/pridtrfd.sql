create table pridtraf
(
  dprdtunq    varchar2(8) default ' ' not null,
  prdtinvn    varchar2(8) default ' ' not null,
  dprdttrn    varchar2(6) default ' ' not null,
  prdtdebt    varchar2(8) default ' ' not null,
  dprdtscn    varchar2(2) default ' ' not null,
  prdtsdat    varchar2(8) default ' ' not null,
  prdtstim    varchar2(6) default ' ' not null,
  prdtdesc    varchar2(30) default ' ' not null,
  prdtamnt    number(14,2) default 0 not null,
  prdtprac    varchar2(6) default ' ' not null,
  prdtdoct    varchar2(10) default ' ' not null,
  prdtserv    number(5,0) default 0 not null,
  prdtrefd    varchar2(10) default ' ' not null,
  prdtreft    varchar2(50) default ' ' not null,
  prdtclam    varchar2(3) default ' ' not null,
  prdtcode    varchar2(3) default ' ' not null,
  prdtmess    varchar2(3) default ' ' not null,
  prdtrtyp    number(1,0) default 0 not null,
  prdtiflg    number(2,0) default 0 not null,
  prdtitmn    varchar2(9) default ' ' not null,
  prdtsubn    varchar2(3) default ' ' not null,
  prdtsetc    varchar2(3) default ' ' not null,
  prdtrecn    varchar2(8) default ' ' not null,
  prdtmeth    number(1,0) default 0 not null,
  prdtttyp    varchar2(3) default ' ' not null,
  prdtinvp    number(1,0) default 0 not null,
  prdtcdat    varchar2(8) default ' ' not null,
  prdtctim    varchar2(8) default ' ' not null,
  prdtbatc    varchar2(8) default ' ' not null,
  prdtudf1    varchar2(3) default ' ' not null,
  prdtudf2    varchar2(3) default ' ' not null,
  prdtudf3    varchar2(3) default ' ' not null,
  prdtudf4    varchar2(3) default ' ' not null,
  prdtadmn    varchar2(3) default ' ' not null,
  prdtmisg    varchar2(3) default ' ' not null,
  prdtrdte    varchar2(8) default ' ' not null,
  prdtiamt    number(14,2) default 0 not null,
  prdtops     varchar2(20) default ' ' not null,
  prdtmflg    number(1,0) default 0 not null,
  prdtglt     varchar2(1) default ' ' not null,
  prdtmeda    varchar2(10) default ' ' not null,
  prdtgsta    number(1,0) default 0 not null,
  prdtgstc    varchar2(6) default ' ' not null,
  prdtgstm    number(14,2) default 0 not null,
  dprdtapa    varchar2(1) default ' ' not null,
  prdtrfpd    varchar2(3) default ' ' not null,
  prdtrefn    varchar2(8) default ' ' not null,
  prdtencn    varchar2(8) default ' ' not null,
  prdtcnst    varchar2(1) default ' ' not null,
  prdtpflg    number(1,0) default 0 not null,
  prdts4b3    number(1,0) default 0 not null,
  prdteffd    varchar2(8) default ' ' not null,
  prdtpcod    varchar2(3) default ' ' not null,
  prdtacoi    varchar2(1) default ' ' not null,
  prdttdur    varchar2(3) default ' ' not null,
  prdtrper    varchar2(2) default ' ' not null,
  prdtrovr    varchar2(3) default ' ' not null,
  prdtmpov    varchar2(1) default ' ' not null,
  prdtdsov    varchar2(1) default ' ' not null,
  prdtstxt    varchar2(100) default ' ' not null,
  prdtaspf    varchar2(1) default ' ' not null,
  prdtaspc    varchar2(10) default ' ' not null,
  prdtaicf    varchar2(1) default ' ' not null,
  prdtaicv    varchar2(3) default ' ' not null,
  prdtnmpt    varchar2(2) default ' ' not null,
  prdtlspn    varchar2(6) default ' ' not null,
  prdtsdcd    varchar2(2) default ' ' not null,
  prdtlvis    varchar2(8) default ' ' not null,
  prdthosi    varchar2(1) default ' ' not null,
  prdtrovc    varchar2(3) default ' ' not null,
  prdtspar    varchar2(38) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pridtra1 primary key( 
dprdtunq,
prdtinvn,
dprdttrn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pridtra2 on pridtraf
(
prdtsdat,
dprdtunq,
prdtinvn,
dprdttrn
)
  tablespace pas_indx; 
create unique index pridtra3 on pridtraf
(
prdtdebt,
dprdtscn,
prdtinvn,
dprdttrn
)
  tablespace pas_indx; 
create unique index pridtra4 on pridtraf
(
prdtinvn,
prdtsdat,
dprdttrn
)
  tablespace pas_indx; 
create unique index pridtra5 on pridtraf
(
prdtglt,
prdtsdat,
dprdtunq,
prdtinvn,
dprdttrn
)
  tablespace pas_indx; 
create unique index pridtra6 on pridtraf
(
dprdtapa,
prdtdebt,
dprdtscn,
prdtinvn,
dprdttrn
)
  tablespace pas_indx; 
