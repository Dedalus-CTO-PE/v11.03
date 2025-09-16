create table apsumpaf
(
  apumbch     varchar2(5) default ' ' not null,
  apumcrd     varchar2(5) default ' ' not null,
  apumdoc     varchar2(15) default ' ' not null,
  apumain     number(14,2) default 0 not null,
  apumspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apsumpa1 primary key( 
apumbch,
apumcrd,
apumdoc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
