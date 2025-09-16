create table pridtraf
(
  dprdtunq    char(8) default ' ' not null,
  prdtinvn    char(8) default ' ' not null,
  dprdttrn    char(6) default ' ' not null,
  prdtdebt    char(8) default ' ' not null,
  dprdtscn    char(2) default ' ' not null,
  prdtsdat    char(8) default ' ' not null,
  prdtstim    char(6) default ' ' not null,
  prdtdesc    char(30) default ' ' not null,
  prdtamnt    decimal(14,2) default 0 not null,
  prdtprac    char(6) default ' ' not null,
  prdtdoct    char(10) default ' ' not null,
  prdtserv    decimal(5,0) default 0 not null,
  prdtrefd    char(10) default ' ' not null,
  prdtreft    char(50) default ' ' not null,
  prdtclam    char(3) default ' ' not null,
  prdtcode    char(3) default ' ' not null,
  prdtmess    char(3) default ' ' not null,
  prdtrtyp    decimal(1,0) default 0 not null,
  prdtiflg    decimal(2,0) default 0 not null,
  prdtitmn    char(9) default ' ' not null,
  prdtsubn    char(3) default ' ' not null,
  prdtsetc    char(3) default ' ' not null,
  prdtrecn    char(8) default ' ' not null,
  prdtmeth    decimal(1,0) default 0 not null,
  prdtttyp    char(3) default ' ' not null,
  prdtinvp    decimal(1,0) default 0 not null,
  prdtcdat    char(8) default ' ' not null,
  prdtctim    char(8) default ' ' not null,
  prdtbatc    char(8) default ' ' not null,
  prdtudf1    char(3) default ' ' not null,
  prdtudf2    char(3) default ' ' not null,
  prdtudf3    char(3) default ' ' not null,
  prdtudf4    char(3) default ' ' not null,
  prdtadmn    char(3) default ' ' not null,
  prdtmisg    char(3) default ' ' not null,
  prdtrdte    char(8) default ' ' not null,
  prdtiamt    decimal(14,2) default 0 not null,
  prdtops     char(20) default ' ' not null,
  prdtmflg    decimal(1,0) default 0 not null,
  prdtglt     char(1) default ' ' not null,
  prdtmeda    char(10) default ' ' not null,
  prdtgsta    decimal(1,0) default 0 not null,
  prdtgstc    char(6) default ' ' not null,
  prdtgstm    decimal(14,2) default 0 not null,
  dprdtapa    char(1) default ' ' not null,
  prdtrfpd    char(3) default ' ' not null,
  prdtrefn    char(8) default ' ' not null,
  prdtencn    char(8) default ' ' not null,
  prdtcnst    char(1) default ' ' not null,
  prdtpflg    decimal(1,0) default 0 not null,
  prdts4b3    decimal(1,0) default 0 not null,
  prdteffd    char(8) default ' ' not null,
  prdtpcod    char(3) default ' ' not null,
  prdtacoi    char(1) default ' ' not null,
  prdttdur    char(3) default ' ' not null,
  prdtrper    char(2) default ' ' not null,
  prdtrovr    char(3) default ' ' not null,
  prdtmpov    char(1) default ' ' not null,
  prdtdsov    char(1) default ' ' not null,
  prdtstxt    char(100) default ' ' not null,
  prdtaspf    char(1) default ' ' not null,
  prdtaspc    char(10) default ' ' not null,
  prdtaicf    char(1) default ' ' not null,
  prdtaicv    char(3) default ' ' not null,
  prdtnmpt    char(2) default ' ' not null,
  prdtlspn    char(6) default ' ' not null,
  prdtsdcd    char(2) default ' ' not null,
  prdtlvis    char(8) default ' ' not null,
  prdthosi    char(1) default ' ' not null,
  prdtrovc    char(3) default ' ' not null,
  prdtspar    char(38) default ' ' not null,
  lf          char(1)
);
create unique index pridtra1 on pridtraf
(
dprdtunq,
prdtinvn,
dprdttrn
);
create unique index pridtra2 on pridtraf
(
prdtsdat,
dprdtunq,
prdtinvn,
dprdttrn
);
create unique index pridtra3 on pridtraf
(
prdtdebt,
dprdtscn,
prdtinvn,
dprdttrn
);
create unique index pridtra4 on pridtraf
(
prdtinvn,
prdtsdat,
dprdttrn
);
create unique index pridtra5 on pridtraf
(
prdtglt,
prdtsdat,
dprdtunq,
prdtinvn,
dprdttrn
);
create unique index pridtra6 on pridtraf
(
dprdtapa,
prdtdebt,
dprdtscn,
prdtinvn,
dprdttrn
);
revoke all on pridtraf from public ; 
grant select on pridtraf to public ; 
