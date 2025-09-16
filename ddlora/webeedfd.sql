create table webeedaf
(
  wbedarid    varchar2(20) default ' ' not null,
  wbedrptc    varchar2(3) default ' ' not null,
  wbedcfec    varchar2(4) default ' ' not null,
  wbedexpc    varchar2(3) default ' ' not null,
  wbedcfet    varchar2(80) default ' ' not null,
  wbedctid    varchar2(24) default ' ' not null,
  wbedmsid    varchar2(36) default ' ' not null,
  wbedspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webeeda1 primary key( 
wbedarid,
wbedrptc,
wbedcfec,
wbedexpc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webeeda2 on webeedaf
(
wbedctid,
wbedarid,
wbedrptc,
wbedcfec,
wbedexpc
)
  tablespace pas_indx; 
create unique index webeeda3 on webeedaf
(
wbedmsid,
wbedarid,
wbedrptc,
wbedcfec,
wbedexpc
)
  tablespace pas_indx; 
