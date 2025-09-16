create table patdtraf
(
  dtadmno     varchar2(8) default ' ' not null,
  dttransn1   varchar2(6) default ' ' not null,
  ttypedeb    varchar2(1) default ' ' not null,
  tdcode      varchar2(8) default ' ' not null,
  tpatamtt    number(14,2) default 0 not null,
  tpatamtg    number(14,2) default 0 not null,
  tpatamth    number(14,2) default 0 not null,
  tpatamti    number(14,2) default 0 not null,
  tpatamtp    number(14,2) default 0 not null,
  dtfcent     varchar2(2) default ' ' not null,
  dtfyear     varchar2(2) default ' ' not null,
  dtfmonth    varchar2(2) default ' ' not null,
  dtfday      varchar2(2) default ' ' not null,
  ttcent      number(2,0) default 0 not null,
  ttyear      number(2,0) default 0 not null,
  ttmonth     number(2,0) default 0 not null,
  ttday       number(2,0) default 0 not null,
  ttype       varchar2(2) default ' ' not null,
  titemno     varchar2(9) default ' ' not null,
  tref        varchar2(8) default ' ' not null,
  tpaytype    number(1,0) default 0 not null,
  treceipt    varchar2(12) default ' ' not null,
  tddesc      varchar2(30) default ' ' not null,
  tinvprt     number(1,0) default 0 not null,
  dtrectyp    varchar2(1) default ' ' not null,
  tnodays     number(4,0) default 0 not null,
  tclaim      number(1,0) default 0 not null,
  trebate     number(14,2) default 0 not null,
  tdocta      varchar2(6) default ' ' not null,
  tservs      number(5,0) default 0 not null,
  tdocto      varchar2(6) default ' ' not null,
  tchgdte     varchar2(8) default ' ' not null,
  tchgtim     varchar2(8) default ' ' not null,
  tsession    varchar2(2) default ' ' not null,
  tmisgrp     varchar2(3) default ' ' not null,
  tdeptyp     varchar2(3) default ' ' not null,
  tdward      varchar2(3) default ' ' not null,
  tclmtyp     varchar2(3) default ' ' not null,
  tadmtyp     varchar2(3) default ' ' not null,
  tbatchn     varchar2(8) default ' ' not null,
  tninvs      number(1,0) default 0 not null,
  ptdtlspt    number(14,2) default 0 not null,
  ptdtlsrb    number(14,2) default 0 not null,
  ptdtdtyp    number(1,0) default 0 not null,
  ptdtdes2    varchar2(35) default ' ' not null,
  ptdtepsd    number(1,0) default 0 not null,
  ptdtccu     number(1,0) default 0 not null,
  ptdtgsta    number(1,0) default 0 not null,
  ptdtgstc    varchar2(6) default ' ' not null,
  ptdtgstm    number(14,2) default 0 not null,
  ptdteffd    varchar2(8) default ' ' not null,
  ptdtgstl    number(14,2) default 0 not null,
  ptdttime    varchar2(8) default ' ' not null,
  ptdtcrst    varchar2(1) default ' ' not null,
  ptdtuniq    varchar2(10) default ' ' not null,
  ptdtbtyp    varchar2(3) default ' ' not null,
  ptdtcntr    varchar2(6) default ' ' not null,
  ptdtcprc    varchar2(9) default ' ' not null,
  ptdtcont    varchar2(1) default ' ' not null,
  ptdtsunq    varchar2(3) default ' ' not null,
  ptdtbtch    varchar2(16) default ' ' not null,
  ptdtadpt    number(14,2) default 0 not null,
  ptdtadrb    number(14,2) default 0 not null,
  ptdtcnid    varchar2(6) default ' ' not null,
  ptdtlsd1    varchar2(30) default ' ' not null,
  ptdtlsd2    varchar2(35) default ' ' not null,
  ptdttmno    varchar2(1) default ' ' not null,
  ptdtpmbs    varchar2(3) default ' ' not null,
  ptdtpcod    varchar2(3) default ' ' not null,
  tspare      varchar2(27) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patdtra1 primary key( 
dtadmno,
tref,
dttransn1)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patdtra2 on patdtraf
(
dtrectyp,
tchgdte,
dtadmno,
dttransn1
)
  tablespace pas_indx; 
create unique index patdtra3 on patdtraf
(
dtadmno,
dtrectyp,
tmisgrp,
dttransn1
)
  tablespace pas_indx; 
create unique index patdtra4 on patdtraf
(
dtadmno,
tref,
dtrectyp,
dttransn1
)
  tablespace pas_indx; 
create unique index patdtra5 on patdtraf
(
tref,
dtrectyp,
dtadmno,
dttransn1
)
  tablespace pas_indx; 
create unique index patdtra6 on patdtraf
(
dtadmno,
tref,
dtrectyp,
tmisgrp,
dttransn1
)
  tablespace pas_indx; 
create unique index patdtra7 on patdtraf
(
ptdtbtch,
dtadmno,
tref,
dttransn1
)
  tablespace pas_indx; 
