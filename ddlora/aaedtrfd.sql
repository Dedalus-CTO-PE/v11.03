create table aaedtref
(
  datnumb     varchar2(8) default ' ' not null,
  atinvno     varchar2(8) default ' ' not null,
  dattrans    varchar2(6) default ' ' not null,
  atddesc     varchar2(30) default ' ' not null,
  atpatamt    number(14,2) default 0 not null,
  atddate     varchar2(8) default ' ' not null,
  atitemno    varchar2(9) default ' ' not null,
  attype      varchar2(2) default ' ' not null,
  atpaytyp    number(1,0) default 0 not null,
  atrecept    varchar2(12) default ' ' not null,
  atinvprt    number(1,0) default 0 not null,
  datrecty    varchar2(1) default ' ' not null,
  atchgdte    varchar2(8) default ' ' not null,
  atchgtim    varchar2(8) default ' ' not null,
  atmisgrp    varchar2(3) default ' ' not null,
  atdeptyp    varchar2(3) default ' ' not null,
  atbatchn    varchar2(8) default ' ' not null,
  atpatpor    number(14,2) default 0 not null,
  atrebpor    number(14,2) default 0 not null,
  datninvs    varchar2(1) default ' ' not null,
  atservs     number(2,0) default 0 not null,
  atdteffd    varchar2(8) default ' ' not null,
  atspare1    number(1,0) default 0 not null,
  atspare2    number(14,2) default 0 not null,
  atdtgsta    number(1,0) default 0 not null,
  atdtgstc    varchar2(6) default ' ' not null,
  atdtgstm    number(14,2) default 0 not null,
  atdtcrst    varchar2(1) default ' ' not null,
  atdtbtch    varchar2(16) default ' ' not null,
  atdtsubn    varchar2(3) default ' ' not null,
  atdtedad    varchar2(10) default ' ' not null,
  atdtsvtm    varchar2(8) default ' ' not null,
  atdtschf    number(5,2) default 0 not null,
  atdtityp    varchar2(1) default ' ' not null,
  atdtrbrs    varchar2(3) default ' ' not null,
  atdtpcod    varchar2(3) default ' ' not null,
  atdtacoi    varchar2(1) default ' ' not null,
  atdtdsov    varchar2(1) default ' ' not null,
  atdtstxt    varchar2(50) default ' ' not null,
  atdtlspn    varchar2(6) default ' ' not null,
  atdtmpov    varchar2(1) default ' ' not null,
  atdtnmpt    varchar2(2) default ' ' not null,
  atdtsdcd    varchar2(3) default ' ' not null,
  atdttdur    varchar2(3) default ' ' not null,
  atdtrovr    varchar2(3) default ' ' not null,
  atspare     varchar2(58) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaedtre1 primary key( 
datnumb,
atinvno,
dattrans)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index aaedtre2 on aaedtref
(
datrecty,
atchgdte,
datnumb,
dattrans,
atinvno
)
  tablespace pas_indx; 
create unique index aaedtre3 on aaedtref
(
datnumb,
atinvno,
datrecty,
atddate,
dattrans
)
  tablespace pas_indx; 
create unique index aaedtre4 on aaedtref
(
atinvno,
datrecty,
datnumb,
dattrans
)
  tablespace pas_indx; 
create unique index aaedtre5 on aaedtref
(
atddate,
atdtedad,
datnumb,
atinvno,
dattrans
)
  tablespace pas_indx; 
create unique index aaedtre6 on aaedtref
(
atdtedad,
atddate,
datnumb,
atinvno,
dattrans
)
  tablespace pas_indx; 
create unique index aaedtre7 on aaedtref
(
atdtbtch,
atinvno,
datnumb,
dattrans
)
  tablespace pas_indx; 
