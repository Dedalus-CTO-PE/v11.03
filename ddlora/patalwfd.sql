create table patallw
(
  alwcode     varchar2(2) default ' ' not null,
  alwdesc     varchar2(20) default ' ' not null,
  alwamt      number(14,2) default 0 not null,
  ptawspar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patallw1 primary key( 
alwcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
