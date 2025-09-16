create table csmcucaf
(
  cscudbs     varchar2(3) default ' ' not null,
  cscucrd     varchar2(5) default ' ' not null,
  cscutyp     number(2,0) default 0 not null,
  cscuspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint csmcuca1 primary key( 
cscudbs,
cscucrd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
