create table pmsukiaf
(
  pmukvsid    char(3) default ' ' not null,
  pmukcode    char(30) default ' ' not null,
  pmukkkwd    char(50) default ' ' not null,
  pmukspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmsukia1 on pmsukiaf
(
pmukvsid,
pmukcode,
pmukkkwd
);
create unique index pmsukia2 on pmsukiaf
(
pmukvsid,
pmukkkwd,
pmukcode
);
revoke all on pmsukiaf from public ; 
grant select on pmsukiaf to public ; 
