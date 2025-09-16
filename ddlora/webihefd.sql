create table webiheaf
(
  wbilfbid    varchar2(3) default ' ' not null,
  wbilarid    varchar2(20) default ' ' not null,
  wbilfrid    varchar2(15) default ' ' not null,
  wbilrptc    varchar2(3) default ' ' not null,
  wbilcacn    varchar2(2) default ' ' not null,
  wbilelnm    varchar2(50) default ' ' not null,
  wbilmpid    varchar2(8) default ' ' not null,
  wbiltrid    varchar2(24) default ' ' not null,
  wbilmsid    varchar2(36) default ' ' not null,
  wbilspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webihea1 primary key( 
wbilfbid,
wbilarid,
wbilfrid,
wbilrptc,
wbilcacn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webihea2 on webiheaf
(
wbiltrid,
wbilfbid,
wbilarid,
wbilfrid,
wbilrptc,
wbilcacn
)
  tablespace pas_indx; 
create unique index webihea3 on webiheaf
(
wbilmsid,
wbilfbid,
wbilarid,
wbilfrid,
wbilrptc,
wbilcacn
)
  tablespace pas_indx; 
