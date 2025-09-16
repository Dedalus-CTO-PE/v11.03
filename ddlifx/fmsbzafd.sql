create table fmsbzaaf
(
  fmbzport    char(2) default ' ' not null,
  fmbzacct    char(12) default ' ' not null,
  fmbzamt     decimal(14,2) default 0 not null,
  fmbzdesc    char(35) default ' ' not null,
  fmbzspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsbzaa1 on fmsbzaaf
(
fmbzport,
fmbzacct
);
revoke all on fmsbzaaf from public ; 
grant select on fmsbzaaf to public ; 
