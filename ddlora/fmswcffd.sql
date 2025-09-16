create table fmswcfaf
(
  fmwcledg    varchar2(2) default ' ' not null,
  fmwcacct    varchar2(12) default ' ' not null,
  fmwcur1     varchar2(25) default ' ' not null,
  fmwcur2     varchar2(25) default ' ' not null,
  fmwcud1     varchar2(8) default ' ' not null,
  fmwcud2     varchar2(8) default ' ' not null,
  fmwcuy1     varchar2(1) default ' ' not null,
  fmwcuy2     varchar2(1) default ' ' not null,
  fmwcspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmswcfa1 primary key( 
fmwcledg,
fmwcacct)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
