create table weberdaf
(
  wbejftid    varchar2(24) default ' ' not null,
  wbejradv    varchar2(30) default ' ' not null,
  wbejpnum    varchar2(4) default ' ' not null,
  wbejtrid    varchar2(24) default ' ' not null,
  wbejarid    varchar2(20) default ' ' not null,
  wbejbamt    varchar2(9) default ' ' not null,
  wbejccod    varchar2(3) default ' ' not null,
  wbejldat    varchar2(8) default ' ' not null,
  wbejpari    varchar2(20) default ' ' not null,
  wbejptid    varchar2(24) default ' ' not null,
  wbejstat    varchar2(1) default ' ' not null,
  wbejltyp    varchar2(2) default ' ' not null,
  wbejclid    varchar2(6) default ' ' not null,
  wbejmsid    varchar2(36) default ' ' not null,
  wbejspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint weberda1 primary key( 
wbejftid,
wbejradv,
wbejpnum,
wbejtrid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index weberda2 on weberdaf
(
wbejtrid,
wbejftid,
wbejradv,
wbejpnum
)
  tablespace pas_indx; 
create unique index weberda3 on weberdaf
(
wbejarid,
wbejftid,
wbejradv,
wbejpnum,
wbejtrid
)
  tablespace pas_indx; 
