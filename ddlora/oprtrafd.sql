create table oprtryaf
(
  opthcode    varchar2(15) default ' ' not null,
  opthdesc    varchar2(30) default ' ' not null,
  opthhosp    varchar2(3) default ' ' not null,
  opthspar    varchar2(32) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprtrya1 primary key( 
opthcode,
opthhosp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index oprtrya2 on oprtryaf
(
opthdesc,
opthcode,
opthhosp
)
  tablespace pas_indx; 
