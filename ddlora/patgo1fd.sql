create table patgo1af
(
  gcode       varchar2(6) default ' ' not null,
  gname       varchar2(30) default ' ' not null,
  gadd1       varchar2(35) default ' ' not null,
  gadd2       varchar2(35) default ' ' not null,
  gadd3       varchar2(35) default ' ' not null,
  gadd4       varchar2(35) default ' ' not null,
  gcont       varchar2(30) default ' ' not null,
  gpost       varchar2(8) default ' ' not null,
  gteleb      varchar2(20) default ' ' not null,
  gvbill      number(14,2) default 0 not null,
  gvaout      number(14,2) default 0 not null,
  gsort       varchar2(6) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patgo1a1 primary key( 
gcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patgo1a2 on patgo1af
(
gsort,
gcode
)
  tablespace pas_indx; 
create unique index patgo1a3 on patgo1af
(
gname,
gcode
)
  tablespace pas_indx; 
