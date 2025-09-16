create table mrtdsraf
(
  mrdsvisn    varchar2(8) default ' ' not null,
  dmrdscnt    varchar2(3) default ' ' not null,
  mrdsdtrq    varchar2(8) default ' ' not null,
  mrdscons    varchar2(10) default ' ' not null,
  mrdsltst    varchar2(3) default ' ' not null,
  mrdscom1    varchar2(100) default ' ' not null,
  mrdscom2    varchar2(100) default ' ' not null,
  mrdscom3    varchar2(100) default ' ' not null,
  mrdscom4    varchar2(100) default ' ' not null,
  mrdscom5    varchar2(100) default ' ' not null,
  mrdsspar    varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrtdsra1 primary key( 
mrdsvisn,
dmrdscnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mrtdsra2 on mrtdsraf
(
mrdsdtrq,
mrdsvisn,
dmrdscnt
)
  tablespace pas_indx; 
create unique index mrtdsra3 on mrtdsraf
(
mrdscons,
mrdsvisn,
dmrdscnt
)
  tablespace pas_indx; 
