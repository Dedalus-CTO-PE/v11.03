create table fmsnraaf
(
  fmnacode    varchar2(3) default ' ' not null,
  fmnaledg    varchar2(2) default ' ' not null,
  fmnadesc    varchar2(40) default ' ' not null,
  fmnaspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsnraa1 primary key( 
fmnacode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
