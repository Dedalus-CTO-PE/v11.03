create table sinlttaf
(
  siltled     varchar2(2) default ' ' not null,
  siltcod     varchar2(6) default ' ' not null,
  siltsub     varchar2(12) default ' ' not null,
  siltspa     varchar2(19) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinltta1 primary key( 
siltled,
siltcod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinltta2 on sinlttaf
(
siltled,
siltsub,
siltcod
)
  tablespace pas_indx; 
create unique index sinltta3 on sinlttaf
(
siltled,
siltcod,
siltsub
)
  tablespace pas_indx; 
