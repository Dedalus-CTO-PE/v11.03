create table ccshcdaf
(
  cchchcd     varchar2(2) default ' ' not null,
  cchcdes     varchar2(35) default ' ' not null,
  cchcpref    varchar2(1) default ' ' not null,
  cchcpuse    varchar2(1) default ' ' not null,
  cchcspa     varchar2(38) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccshcda1 primary key( 
cchchcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccshcda2 on ccshcdaf
(
cchcdes,
cchchcd
)
  tablespace pas_indx; 
