create table fmsbzaaf
(
  fmbzport    varchar2(2) default ' ' not null,
  fmbzacct    varchar2(12) default ' ' not null,
  fmbzamt     number(14,2) default 0 not null,
  fmbzdesc    varchar2(35) default ' ' not null,
  fmbzspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsbzaa1 primary key( 
fmbzport,
fmbzacct)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
