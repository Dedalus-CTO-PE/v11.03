create table casameaf
(
  caamtoe     varchar2(3) default ' ' not null,
  caamam      varchar2(3) default ' ' not null,
  caamdes     varchar2(35) default ' ' not null,
  caamdec     number(1,0) default 0 not null,
  caamunt     varchar2(6) default ' ' not null,
  caamsdec    varchar2(10) default ' ' not null,
  caamspa     varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint casamea1 primary key( 
caamtoe,
caamam)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
