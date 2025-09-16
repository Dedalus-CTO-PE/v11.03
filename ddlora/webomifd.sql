create table webomiaf
(
  wboiarid    varchar2(20) default ' ' not null,
  wboirptc    varchar2(3) default ' ' not null,
  wboimect    varchar2(2) default ' ' not null,
  wboisvct    varchar2(4) default ' ' not null,
  wboisvid    varchar2(4) default ' ' not null,
  wboisvbe    varchar2(9) default ' ' not null,
  wboisvch    varchar2(9) default ' ' not null,
  wboisvds    varchar2(8) default ' ' not null,
  wboisvec    varchar2(4) default ' ' not null,
  wboisvit    varchar2(5) default ' ' not null,
  wboisvsc    varchar2(9) default ' ' not null,
  wboictid    varchar2(24) default ' ' not null,
  wboimsid    varchar2(36) default ' ' not null,
  wboispar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webomia1 primary key( 
wboiarid,
wboirptc,
wboimect,
wboisvct)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webomia2 on webomiaf
(
wboictid,
wboiarid,
wboirptc,
wboimect,
wboisvct
)
  tablespace pas_indx; 
create unique index webomia3 on webomiaf
(
wboimsid,
wboiarid,
wboirptc,
wboimect,
wboisvct
)
  tablespace pas_indx; 
