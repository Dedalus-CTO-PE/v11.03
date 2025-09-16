create table ccsceaaf
(
  cceaeid     char(4) default ' ' not null,
  cceades     char(35) default ' ' not null,
  cceahcd     char(2) default ' ' not null,
  cceafdd     char(8) default ' ' not null,
  cceatdd     char(8) default ' ' not null,
  cceafad     char(8) default ' ' not null,
  cceatad     char(8) default ' ' not null,
  cceainc     char(1) default ' ' not null,
  cceavis     char(1) default ' ' not null,
  cceaday     char(1) default ' ' not null,
  cceafcm     char(4) default ' ' not null,
  cceafyr     char(4) default ' ' not null,
  cceatcm     char(4) default ' ' not null,
  cceatyr     char(4) default ' ' not null,
  ccearua     char(1) default ' ' not null,
  ccealv1     char(3) default ' ' not null,
  ccealv2     char(3) default ' ' not null,
  ccealv3     char(3) default ' ' not null,
  cceaust     char(1) default ' ' not null,
  cceaimod    char(1) default ' ' not null,
  cceacmod    char(1) default ' ' not null,
  cceaithe    char(1) default ' ' not null,
  cceacthe    char(1) default ' ' not null,
  cceascm1    char(3) default ' ' not null,
  cceascm2    char(3) default ' ' not null,
  cceastat    char(1) default ' ' not null,
  cceaspa     char(68) default ' ' not null,
  lf          char(1)
);
create unique index ccsceaa1 on ccsceaaf
(
cceaeid
);
revoke all on ccsceaaf from public ; 
grant select on ccsceaaf to public ; 
