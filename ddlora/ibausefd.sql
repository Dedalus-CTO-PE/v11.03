create table ibauseaf
(
  ibuscode    varchar2(4) default ' ' not null,
  ibussyst    varchar2(3) default ' ' not null,
  ibuslevl    varchar2(1) default ' ' not null,
  ibusmpro    varchar2(8) default ' ' not null,
  ibusspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibausea1 primary key( 
ibuscode,
ibussyst)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibausea2 on ibauseaf
(
ibussyst,
ibuscode
)
  tablespace pas_indx; 
