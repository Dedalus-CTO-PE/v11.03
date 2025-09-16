create table nhiethaf
(
  nhetecd     varchar2(5) default ' ' not null,
  nhetdes     varchar2(25) default ' ' not null,
  nhetiba     varchar2(3) default ' ' not null,
  nhetlev     varchar2(1) default ' ' not null,
  nhetspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nhietha1 primary key( 
nhetecd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index nhietha2 on nhiethaf
(
nhetlev,
nhetecd
)
  tablespace pas_indx; 
