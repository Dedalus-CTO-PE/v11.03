create table pmsidwaf
(
  pmiwcode    varchar2(22) default ' ' not null,
  pmiwtype    varchar2(3) default ' ' not null,
  pmiwoldv    varchar2(250) default ' ' not null,
  pmiwnewv    varchar2(250) default ' ' not null,
  pmiwcdat    varchar2(8) default ' ' not null,
  pmiwctim    varchar2(8) default ' ' not null,
  pmiwcuid    varchar2(10) default ' ' not null,
  pmiwspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsidwa1 primary key( 
pmiwcdat,
pmiwctim,
pmiwcode,
pmiwtype)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsidwa2 on pmsidwaf
(
pmiwcode,
pmiwtype,
pmiwcdat,
pmiwctim
)
  tablespace pas_indx; 
