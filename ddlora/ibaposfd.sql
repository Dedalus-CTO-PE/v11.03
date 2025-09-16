create table ibapostf
(
  ibpopcod    varchar2(8) default ' ' not null,
  ibposubr    varchar2(45) default ' ' not null,
  ibpostat    varchar2(3) default ' ' not null,
  ibpoasgc    varchar2(9) default ' ' not null,
  ibporrav    varchar2(5) default ' ' not null,
  ibpospar    varchar2(29) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibapost1 primary key( 
ibpopcod,
ibposubr,
ibpostat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibapost2 on ibapostf
(
ibposubr,
ibpopcod,
ibpostat
)
  tablespace pas_indx; 
