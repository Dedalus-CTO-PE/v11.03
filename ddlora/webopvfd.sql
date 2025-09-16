create table webopvaf
(
  wbopurno    varchar2(8) default ' ' not null,
  wbopdate    varchar2(8) default ' ' not null,
  wboptime    varchar2(8) default ' ' not null,
  dwbopcnt    varchar2(2) default ' ' not null,
  wbophosp    varchar2(3) default ' ' not null,
  wboptrid    varchar2(24) default ' ' not null,
  wbopfnam    varchar2(40) default ' ' not null,
  wbopmedn    varchar2(10) default ' ' not null,
  wbopmedr    varchar2(1) default ' ' not null,
  wbopstat    varchar2(4) default ' ' not null,
  wboperor    varchar2(500) default ' ' not null,
  wbopresp    varchar2(1) default ' ' not null,
  wbopmsid    varchar2(36) default ' ' not null,
  wbopspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webopva1 primary key( 
wbopurno,
wbopdate,
wboptime,
dwbopcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webopva2 on webopvaf
(
wboptrid,
wbopdate,
wboptime,
wbopurno,
dwbopcnt
)
  tablespace pas_indx; 
create unique index webopva3 on webopvaf
(
wbopresp,
wbopurno,
wbopdate,
wboptime,
dwbopcnt
)
  tablespace pas_indx; 
create unique index webopva4 on webopvaf
(
wbopmsid,
wbopurno,
wbopdate,
wboptime,
dwbopcnt
)
  tablespace pas_indx; 
