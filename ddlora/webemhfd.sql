create table webemhaf
(
  wbeuarid    varchar2(20) default ' ' not null,
  wbeurptc    varchar2(3) default ' ' not null,
  wbeuctid    varchar2(24) default ' ' not null,
  wbeumscd    varchar2(4) default ' ' not null,
  wbeumstx    varchar2(500) default ' ' not null,
  wbeucpmn    varchar2(10) default ' ' not null,
  wbeucprn    varchar2(1) default ' ' not null,
  wbeucpfn    varchar2(40) default ' ' not null,
  wbeuflcn    varchar2(8) default ' ' not null,
  wbeuldat    varchar2(10) default ' ' not null,
  wbeucdte    varchar2(8) default ' ' not null,
  wbeuctim    varchar2(8) default ' ' not null,
  wbeucuid    varchar2(10) default ' ' not null,
  wbeuudte    varchar2(8) default ' ' not null,
  wbeuutim    varchar2(8) default ' ' not null,
  wbeuuuid    varchar2(10) default ' ' not null,
  wbeumsid    varchar2(36) default ' ' not null,
  wbeuspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webemha1 primary key( 
wbeuarid,
wbeurptc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webemha2 on webemhaf
(
wbeuctid,
wbeuarid,
wbeurptc
)
  tablespace pas_indx; 
create unique index webemha3 on webemhaf
(
wbeumsid,
wbeuarid,
wbeurptc
)
  tablespace pas_indx; 
