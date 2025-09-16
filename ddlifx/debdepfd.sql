create table debaudde
(
  dbdeaudd    char(8) default ' ' not null,
  dbdeaudt    char(8) default ' ' not null,
  dbdeaudp    char(2) default ' ' not null,
  dbdeaudr    char(1) default ' ' not null,
  dbdeauds    decimal(1,0) default 0 not null,
  dbdeaudo    char(4) default ' ' not null,
  dbdedep     char(8) default ' ' not null,
  dbdedes     char(35) default ' ' not null,
  dbdeact     decimal(1,0) default 0 not null,
  dbdeur1     char(25) default ' ' not null,
  dbdeur2     char(25) default ' ' not null,
  dbdeud1     char(8) default ' ' not null,
  dbdeud2     char(8) default ' ' not null,
  dbdeuy1     char(1) default ' ' not null,
  dbdeuy2     char(1) default ' ' not null,
  dbdeuc1     char(3) default ' ' not null,
  dbdeuc2     char(3) default ' ' not null,
  dbdespa     char(20) default ' ' not null,
  lf          char(1)
);
create index debaudde on debaudde
(
dbdeaudd,
dbdeaudt,
dbdeaudp,
dbdeaudr
);
revoke all on debaudde from public ; 
grant select on debaudde to public ; 
create table debdepaf
(
  dbdedep     char(8) default ' ' not null,
  dbdedes     char(35) default ' ' not null,
  dbdeact     decimal(1,0) default 0 not null,
  dbdeur1     char(25) default ' ' not null,
  dbdeur2     char(25) default ' ' not null,
  dbdeud1     char(8) default ' ' not null,
  dbdeud2     char(8) default ' ' not null,
  dbdeuy1     char(1) default ' ' not null,
  dbdeuy2     char(1) default ' ' not null,
  dbdeuc1     char(3) default ' ' not null,
  dbdeuc2     char(3) default ' ' not null,
  dbdespa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index debdepa1 on debdepaf
(
dbdedep
);
create unique index debdepa2 on debdepaf
(
dbdedes,
dbdedep
);
revoke all on debdepaf from public ; 
grant select on debdepaf to public ; 
