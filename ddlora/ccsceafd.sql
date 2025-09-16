create table ccsceaaf
(
  cceaeid     varchar2(4) default ' ' not null,
  cceades     varchar2(35) default ' ' not null,
  cceahcd     varchar2(2) default ' ' not null,
  cceafdd     varchar2(8) default ' ' not null,
  cceatdd     varchar2(8) default ' ' not null,
  cceafad     varchar2(8) default ' ' not null,
  cceatad     varchar2(8) default ' ' not null,
  cceainc     varchar2(1) default ' ' not null,
  cceavis     varchar2(1) default ' ' not null,
  cceaday     varchar2(1) default ' ' not null,
  cceafcm     varchar2(4) default ' ' not null,
  cceafyr     varchar2(4) default ' ' not null,
  cceatcm     varchar2(4) default ' ' not null,
  cceatyr     varchar2(4) default ' ' not null,
  ccearua     varchar2(1) default ' ' not null,
  ccealv1     varchar2(3) default ' ' not null,
  ccealv2     varchar2(3) default ' ' not null,
  ccealv3     varchar2(3) default ' ' not null,
  cceaust     varchar2(1) default ' ' not null,
  cceaimod    varchar2(1) default ' ' not null,
  cceacmod    varchar2(1) default ' ' not null,
  cceaithe    varchar2(1) default ' ' not null,
  cceacthe    varchar2(1) default ' ' not null,
  cceascm1    varchar2(3) default ' ' not null,
  cceascm2    varchar2(3) default ' ' not null,
  cceastat    varchar2(1) default ' ' not null,
  cceaspa     varchar2(68) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsceaa1 primary key( 
cceaeid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
