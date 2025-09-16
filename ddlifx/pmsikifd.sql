create table pmsikiaf
(
  pmikcode    char(7) default ' ' not null,
  pmikkkwd    char(30) default ' ' not null,
  pmikspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index pmsikia1 on pmsikiaf
(
pmikcode,
pmikkkwd
);
create unique index pmsikia2 on pmsikiaf
(
pmikkkwd,
pmikcode
);
revoke all on pmsikiaf from public ; 
grant select on pmsikiaf to public ; 
