create table fmsnrbaf
(
  fmnbcode    varchar2(3) default ' ' not null,
  fmnbtcod    varchar2(12) default ' ' not null,
  fmnbtlev    varchar2(3) default ' ' not null,
  fmnbdesc    varchar2(40) default ' ' not null,
  fmnbprtc    varchar2(3) default ' ' not null,
  fmnbspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsnrba1 primary key( 
fmnbcode,
fmnbtcod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsnrba2 on fmsnrbaf
(
fmnbcode,
fmnbtlev,
fmnbtcod
)
  tablespace pas_indx; 
