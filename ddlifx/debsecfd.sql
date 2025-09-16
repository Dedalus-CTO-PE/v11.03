create table debaudse
(
  dbseaudd    char(8) default ' ' not null,
  dbseaudt    char(8) default ' ' not null,
  dbseaudp    char(2) default ' ' not null,
  dbseaudr    char(1) default ' ' not null,
  dbseauds    decimal(1,0) default 0 not null,
  dbseaudo    char(4) default ' ' not null,
  dbseusr     char(4) default ' ' not null,
  dbsedep     char(8) default ' ' not null,
  dbsespa     char(50) default ' ' not null,
  lf          char(1)
);
create index debaudse on debaudse
(
dbseaudd,
dbseaudt,
dbseaudp,
dbseaudr
);
revoke all on debaudse from public ; 
grant select on debaudse to public ; 
create table debsecaf
(
  dbseusr     char(4) default ' ' not null,
  dbsedep     char(8) default ' ' not null,
  dbsespa     char(50) default ' ' not null,
  lf          char(1)
);
create unique index debseca1 on debsecaf
(
dbseusr,
dbsedep
);
create unique index debseca2 on debsecaf
(
dbsedep,
dbseusr
);
revoke all on debsecaf from public ; 
grant select on debsecaf to public ; 
