create table amsdphaf
(
  amdhreg     varchar2(2) default ' ' not null,
  amdhass     varchar2(12) default ' ' not null,
  amdhdat     varchar2(8) default ' ' not null,
  amdhfdpt    varchar2(3) default ' ' not null,
  amdhtdpt    varchar2(3) default ' ' not null,
  amdhcom     varchar2(30) default ' ' not null,
  amdhua1     number(14,2) default 0 not null,
  amdhua2     number(14,2) default 0 not null,
  amdhur1     varchar2(30) default ' ' not null,
  amdhur2     varchar2(30) default ' ' not null,
  amdhuy1     varchar2(1) default ' ' not null,
  amdhuy2     varchar2(1) default ' ' not null,
  amdhspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint amsdpha1 primary key( 
amdhreg,
amdhass,
amdhdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
