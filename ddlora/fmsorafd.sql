create table fmsoraaf
(
  fmorledg    varchar2(2) default ' ' not null,
  fmoracct    varchar2(12) default ' ' not null,
  fmorintr    varchar2(3) default ' ' not null,
  fmorspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsoraa1 primary key( 
fmorledg,
fmoracct)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
