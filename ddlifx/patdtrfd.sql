create table patdtraf
(
  dtadmno     char(8) default ' ' not null,
  dttransn1   char(6) default ' ' not null,
  ttypedeb    char(1) default ' ' not null,
  tdcode      char(8) default ' ' not null,
  tpatamtt    decimal(14,2) default 0 not null,
  tpatamtg    decimal(14,2) default 0 not null,
  tpatamth    decimal(14,2) default 0 not null,
  tpatamti    decimal(14,2) default 0 not null,
  tpatamtp    decimal(14,2) default 0 not null,
  dtfcent     char(2) default ' ' not null,
  dtfyear     char(2) default ' ' not null,
  dtfmonth    char(2) default ' ' not null,
  dtfday      char(2) default ' ' not null,
  ttcent      decimal(2,0) default 0 not null,
  ttyear      decimal(2,0) default 0 not null,
  ttmonth     decimal(2,0) default 0 not null,
  ttday       decimal(2,0) default 0 not null,
  ttype       char(2) default ' ' not null,
  titemno     char(9) default ' ' not null,
  tref        char(8) default ' ' not null,
  tpaytype    decimal(1,0) default 0 not null,
  treceipt    char(12) default ' ' not null,
  tddesc      char(30) default ' ' not null,
  tinvprt     decimal(1,0) default 0 not null,
  dtrectyp    char(1) default ' ' not null,
  tnodays     decimal(4,0) default 0 not null,
  tclaim      decimal(1,0) default 0 not null,
  trebate     decimal(14,2) default 0 not null,
  tdocta      char(6) default ' ' not null,
  tservs      decimal(5,0) default 0 not null,
  tdocto      char(6) default ' ' not null,
  tchgdte     char(8) default ' ' not null,
  tchgtim     char(8) default ' ' not null,
  tsession    char(2) default ' ' not null,
  tmisgrp     char(3) default ' ' not null,
  tdeptyp     char(3) default ' ' not null,
  tdward      char(3) default ' ' not null,
  tclmtyp     char(3) default ' ' not null,
  tadmtyp     char(3) default ' ' not null,
  tbatchn     char(8) default ' ' not null,
  tninvs      decimal(1,0) default 0 not null,
  ptdtlspt    decimal(14,2) default 0 not null,
  ptdtlsrb    decimal(14,2) default 0 not null,
  ptdtdtyp    decimal(1,0) default 0 not null,
  ptdtdes2    char(35) default ' ' not null,
  ptdtepsd    decimal(1,0) default 0 not null,
  ptdtccu     decimal(1,0) default 0 not null,
  ptdtgsta    decimal(1,0) default 0 not null,
  ptdtgstc    char(6) default ' ' not null,
  ptdtgstm    decimal(14,2) default 0 not null,
  ptdteffd    char(8) default ' ' not null,
  ptdtgstl    decimal(14,2) default 0 not null,
  ptdttime    char(8) default ' ' not null,
  ptdtcrst    char(1) default ' ' not null,
  ptdtuniq    char(10) default ' ' not null,
  ptdtbtyp    char(3) default ' ' not null,
  ptdtcntr    char(6) default ' ' not null,
  ptdtcprc    char(9) default ' ' not null,
  ptdtcont    char(1) default ' ' not null,
  ptdtsunq    char(3) default ' ' not null,
  ptdtbtch    char(16) default ' ' not null,
  ptdtadpt    decimal(14,2) default 0 not null,
  ptdtadrb    decimal(14,2) default 0 not null,
  ptdtcnid    char(6) default ' ' not null,
  ptdtlsd1    char(30) default ' ' not null,
  ptdtlsd2    char(35) default ' ' not null,
  ptdttmno    char(1) default ' ' not null,
  ptdtpmbs    char(3) default ' ' not null,
  ptdtpcod    char(3) default ' ' not null,
  tspare      char(27) default ' ' not null,
  lf          char(1)
);
create unique index patdtra1 on patdtraf
(
dtadmno,
tref,
dttransn1
);
create unique index patdtra2 on patdtraf
(
dtrectyp,
tchgdte,
dtadmno,
dttransn1
);
create unique index patdtra3 on patdtraf
(
dtadmno,
dtrectyp,
tmisgrp,
dttransn1
);
create unique index patdtra4 on patdtraf
(
dtadmno,
tref,
dtrectyp,
dttransn1
);
create unique index patdtra5 on patdtraf
(
tref,
dtrectyp,
dtadmno,
dttransn1
);
create unique index patdtra6 on patdtraf
(
dtadmno,
tref,
dtrectyp,
tmisgrp,
dttransn1
);
create unique index patdtra7 on patdtraf
(
ptdtbtch,
dtadmno,
tref,
dttransn1
);
revoke all on patdtraf from public ; 
grant select on patdtraf to public ; 
