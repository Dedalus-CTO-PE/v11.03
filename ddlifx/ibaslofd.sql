create table ibasloaf
(
  ibsluser    char(5) default ' ' not null,
  ibslpass    char(20) default ' ' not null,
  ibslibas    char(4) default ' ' not null,
  ibsldesc    char(20) default ' ' not null,
  ibsldate    char(8) default ' ' not null,
  ibslspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index ibasloa1 on ibasloaf
(
ibsluser
);
revoke all on ibasloaf from public ; 
grant select on ibasloaf to public ; 
