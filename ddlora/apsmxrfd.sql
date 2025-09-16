create table apsmxraf
(
  apmxcrd     varchar2(5) default ' ' not null,
  apmxref     varchar2(30) default ' ' not null,
  apmxtyp     varchar2(1) default ' ' not null,
  apmxspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apsmxra1 primary key( 
apmxref,
apmxcrd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index apsmxra2 on apsmxraf
(
apmxcrd,
apmxref
)
  tablespace pas_indx; 
