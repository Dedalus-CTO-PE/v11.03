create table webihhaf
(
  wbipfbid    varchar2(3) default ' ' not null,
  wbiparid    varchar2(20) default ' ' not null,
  wbipfrid    varchar2(15) default ' ' not null,
  wbiprptc    varchar2(3) default ' ' not null,
  wbipsecn    varchar2(2) default ' ' not null,
  wbipexcn    varchar2(2) default ' ' not null,
  wbipexcd    varchar2(4) default ' ' not null,
  wbipextx    varchar2(80) default ' ' not null,
  wbiptrid    varchar2(24) default ' ' not null,
  wbipmsid    varchar2(36) default ' ' not null,
  wbipspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webihha1 primary key( 
wbipfbid,
wbiparid,
wbipfrid,
wbiprptc,
wbipsecn,
wbipexcn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webihha2 on webihhaf
(
wbiptrid,
wbipfbid,
wbiparid,
wbipfrid,
wbiprptc,
wbipsecn,
wbipexcn
)
  tablespace pas_indx; 
create unique index webihha3 on webihhaf
(
wbipmsid,
wbipfbid,
wbiparid,
wbipfrid,
wbiprptc,
wbipsecn,
wbipexcn
)
  tablespace pas_indx; 
