create table legacmaf
(
  lgacurno    char(8) default ' ' not null,
  lgacadat    char(8) default ' ' not null,
  lgacatim    char(8) default ' ' not null,
  lgacevno    char(8) default ' ' not null,
  lgacline    char(3) default ' ' not null,
  lgaccomm    char(70) default ' ' not null,
  lgacspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index legacma1 on legacmaf
(
lgacurno,
lgacadat,
lgacatim,
lgacevno,
lgacline
);
revoke all on legacmaf from public ; 
grant select on legacmaf to public ; 
