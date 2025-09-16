create table mrtlocaf
(
  mrlocode    varchar2(4) default ' ' not null,
  mrlodesc    varchar2(30) default ' ' not null,
  mrlotype    varchar2(3) default ' ' not null,
  mrloindc    varchar2(1) default ' ' not null,
  mrlostat    number(1,0) default 0 not null,
  mrlousag    number(1,0) default 0 not null,
  mrloprnt    varchar2(6) default ' ' not null,
  mrlostcd    varchar2(6) default ' ' not null,
  mrlohosp    varchar2(3) default ' ' not null,
  mrloprlc    varchar2(1) default ' ' not null,
  mrlobprn    varchar2(6) default ' ' not null,
  mrlotrec    varchar2(1) default ' ' not null,
  mrlospar    varchar2(99) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrtloca1 primary key( 
mrlohosp,
mrlocode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mrtloca2 on mrtlocaf
(
mrloindc,
mrlohosp,
mrlocode
)
  tablespace pas_indx; 
create unique index mrtloca3 on mrtlocaf
(
mrlodesc,
mrlohosp,
mrlocode
)
  tablespace pas_indx; 
create unique index mrtloca4 on mrtlocaf
(
mrlocode,
mrlohosp
)
  tablespace pas_indx; 
