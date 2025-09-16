create table ibagkiaf
(
  ibgkgst     char(6) default ' ' not null,
  ibgkkwd     char(15) default ' ' not null,
  ibgkspa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index ibagkia1 on ibagkiaf
(
ibgkgst,
ibgkkwd
);
create unique index ibagkia2 on ibagkiaf
(
ibgkkwd,
ibgkgst
);
revoke all on ibagkiaf from public ; 
grant select on ibagkiaf to public ; 
