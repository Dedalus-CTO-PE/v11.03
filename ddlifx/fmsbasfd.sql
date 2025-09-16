create table fmsgyyyy
(
  fmbsbat     char(5) default ' ' not null,
  fmbsuniq    char(5) default ' ' not null,
  fmbsledg    char(2) default ' ' not null,
  fmbsbasc    char(3) default ' ' not null,
  fmbspdat    char(8) default ' ' not null,
  fmbsspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsbasa1 on fmsgyyyy
(
fmbsbat,
fmbsuniq
);
create unique index fmsbasa2 on fmsgyyyy
(
fmbsledg,
fmbsbasc,
fmbspdat,
fmbsbat,
fmbsuniq
);
revoke all on fmsgyyyy from public ; 
grant select on fmsgyyyy to public ; 
