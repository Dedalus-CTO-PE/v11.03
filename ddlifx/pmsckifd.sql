create table pmsckiaf
(
  pmckcntr    char(6) default ' ' not null,
  pmckkkwd    char(15) default ' ' not null,
  pmckspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index pmsckia1 on pmsckiaf
(
pmckcntr,
pmckkkwd
);
create unique index pmsckia2 on pmsckiaf
(
pmckkkwd,
pmckcntr
);
revoke all on pmsckiaf from public ; 
grant select on pmsckiaf to public ; 
