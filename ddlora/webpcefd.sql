create table webpceaf
(
  wbpestat    varchar2(50) default ' ' not null,
  wbpeclid    varchar2(22) default ' ' not null,
  wbpeccmn    varchar2(10) default ' ' not null,
  wbpeccmr    varchar2(1) default ' ' not null,
  wbpepcmn    varchar2(10) default ' ' not null,
  wbpepcmr    varchar2(1) default ' ' not null,
  wbpeecde    varchar2(4) default ' ' not null,
  wbpeetxt    varchar2(500) default ' ' not null,
  wbpetrid    varchar2(24) default ' ' not null,
  wbpemsid    varchar2(36) default ' ' not null,
  wbpespar    varchar2(101) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webpcea1 primary key( 
wbpeclid,
wbpetrid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webpcea2 on webpceaf
(
wbpetrid,
wbpeclid
)
  tablespace pas_indx; 
create unique index webpcea3 on webpceaf
(
wbpemsid,
wbpeclid
)
  tablespace pas_indx; 
create unique index webpcea4 on webpceaf
(
wbpestat,
wbpeclid,
wbpetrid
)
  tablespace pas_indx; 
