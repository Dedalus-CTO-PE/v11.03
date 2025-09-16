create table outwmpaf
(
  otwmclid    varchar2(6) default ' ' not null,
  otwmmpsv    varchar2(8) default ' ' not null,
  otwmmprp    varchar2(2) default ' ' not null,
  otwmmptp    varchar2(3) default ' ' not null,
  otwmmptt    varchar2(3) default ' ' not null,
  otwmdesc    varchar2(30) default ' ' not null,
  otwmsite    varchar2(6) default ' ' not null,
  otwmspar    varchar2(44) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outwmpa1 primary key( 
otwmsite,
otwmclid,
otwmmpsv,
otwmmprp,
otwmmptp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
