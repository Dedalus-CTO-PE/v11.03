create table legdtraf
(
  ldtadmno    varchar2(8) default ' ' not null,
  ldtrnsn1    varchar2(6) default ' ' not null,
  lttypdeb    varchar2(1) default ' ' not null,
  ltdcode     varchar2(8) default ' ' not null,
  lpdtamtt    number(14,2) default 0 not null,
  lpdtamtg    number(14,2) default 0 not null,
  lpdtamth    number(14,2) default 0 not null,
  lpdtamti    number(14,2) default 0 not null,
  lpdtamtp    number(14,2) default 0 not null,
  ldtfcent    varchar2(2) default ' ' not null,
  ldtfyear    varchar2(2) default ' ' not null,
  ldtfmnth    varchar2(2) default ' ' not null,
  ldtfday     varchar2(2) default ' ' not null,
  lttcent     number(2,0) default 0 not null,
  lttyear     number(2,0) default 0 not null,
  lttmonth    number(2,0) default 0 not null,
  lttday      number(2,0) default 0 not null,
  lttype      varchar2(2) default ' ' not null,
  ltitemno    varchar2(9) default ' ' not null,
  ltref       varchar2(8) default ' ' not null,
  ltpaytyp    number(1,0) default 0 not null,
  ltrecept    varchar2(12) default ' ' not null,
  ltddesc     varchar2(30) default ' ' not null,
  ltinvprt    number(1,0) default 0 not null,
  ldtrctyp    varchar2(1) default ' ' not null,
  ltnodays    number(4,0) default 0 not null,
  ltclaim     number(1,0) default 0 not null,
  lpdtrebt    number(14,2) default 0 not null,
  ltdocta     varchar2(6) default ' ' not null,
  ltservs     number(5,0) default 0 not null,
  ltdocto     varchar2(6) default ' ' not null,
  ltchgdte    varchar2(8) default ' ' not null,
  ltchgtim    varchar2(8) default ' ' not null,
  ltsesion    varchar2(2) default ' ' not null,
  ltmisgrp    varchar2(3) default ' ' not null,
  ltdeptyp    varchar2(3) default ' ' not null,
  ltdward     varchar2(3) default ' ' not null,
  ltclmtyp    varchar2(3) default ' ' not null,
  ltadmtyp    varchar2(3) default ' ' not null,
  ltbatchn    varchar2(8) default ' ' not null,
  ltninvs     number(1,0) default 0 not null,
  lpdtbtyp    varchar2(3) default ' ' not null,
  lpdtptls    number(14,2) default 0 not null,
  lpdtrbls    number(14,2) default 0 not null,
  lpdtdtyp    number(1,0) default 0 not null,
  lpdtdes2    varchar2(35) default ' ' not null,
  lpdtepsd    number(1,0) default 0 not null,
  lptdtccu    number(1,0) default 0 not null,
  lpdtsurg    varchar2(6) default ' ' not null,
  ldpdtapa    varchar2(1) default ' ' not null,
  lpdtdeps    varchar2(1) default ' ' not null,
  lpdteffd    varchar2(8) default ' ' not null,
  lpdtgsta    number(1,0) default 0 not null,
  lpdtgstc    varchar2(6) default ' ' not null,
  lpdtgstm    number(14,2) default 0 not null,
  lpdtgstl    number(14,2) default 0 not null,
  lpdtssap    varchar2(1) default ' ' not null,
  lpdtmvbr    varchar2(1) default ' ' not null,
  ltspare     varchar2(46) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legdtra1 primary key( 
ldtadmno,
ltref,
ldtrnsn1)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index legdtra2 on legdtraf
(
ldtrctyp,
lpdtdeps,
lpdteffd,
ldtadmno,
ltref,
ldtrnsn1
)
  tablespace pas_indx; 
create unique index legdtra3 on legdtraf
(
ldtadmno,
ltref,
ldtrctyp,
ldtfcent,
ldtfyear,
ldtfmnth,
ldtfday,
ldtrnsn1
)
  tablespace pas_indx; 
create unique index legdtra4 on legdtraf
(
ldpdtapa,
ldtadmno,
ltref,
ldtrnsn1
)
  tablespace pas_indx; 
create unique index legdtra5 on legdtraf
(
lpdtssap,
ltref,
ldtrctyp,
ldtadmno,
ldtrnsn1
)
  tablespace pas_indx; 
