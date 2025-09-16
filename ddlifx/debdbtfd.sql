create table debauddb
(
  dbdbaudd    char(8) default ' ' not null,
  dbdbaudt    char(8) default ' ' not null,
  dbdbaudp    char(2) default ' ' not null,
  dbdbaudr    char(1) default ' ' not null,
  dbdbauds    decimal(1,0) default 0 not null,
  dbdbaudo    char(4) default ' ' not null,
  dbdbdeb     char(8) default ' ' not null,
  dbdbna1     char(35) default ' ' not null,
  dbdbna2     char(35) default ' ' not null,
  dbdbad1     char(35) default ' ' not null,
  dbdbad2     char(35) default ' ' not null,
  dbdbad3     char(35) default ' ' not null,
  dbdbad4     char(35) default ' ' not null,
  dbdbpc      char(8) default ' ' not null,
  dbdbph1     char(20) default ' ' not null,
  dbdbph2     char(20) default ' ' not null,
  dbdbph3     char(20) default ' ' not null,
  dbdbcon     char(30) default ' ' not null,
  dbdbact     decimal(1,0) default 0 not null,
  dbdbsta     decimal(1,0) default 0 not null,
  dbdbtex     decimal(1,0) default 0 not null,
  dbdbter     char(3) default ' ' not null,
  dbdbwrn     char(3) default ' ' not null,
  dbdblin     char(8) default ' ' not null,
  dbdbpur     char(8) default ' ' not null,
  dbdbbad     decimal(1,0) default 0 not null,
  dbdbclm     decimal(14,2) default 0 not null,
  dbdbsort    char(25) default ' ' not null,
  dbdbur2     char(25) default ' ' not null,
  dbdbud1     char(8) default ' ' not null,
  dbdbud2     char(8) default ' ' not null,
  dbdbuy1     char(1) default ' ' not null,
  dbdbuy2     char(1) default ' ' not null,
  dbdbuc1     char(3) default ' ' not null,
  dbdbuc2     char(3) default ' ' not null,
  dbdbuc3     char(3) default ' ' not null,
  dbdbuc4     char(3) default ' ' not null,
  dbdbdiss    char(5) default ' ' not null,
  dbdbspa     char(15) default ' ' not null,
  lf          char(1)
);
create index debauddb on debauddb
(
dbdbaudd,
dbdbaudt,
dbdbaudp,
dbdbaudr
);
revoke all on debauddb from public ; 
grant select on debauddb to public ; 
create table debdbtaf
(
  dbdbdeb     char(8) default ' ' not null,
  dbdbna1     char(35) default ' ' not null,
  dbdbna2     char(35) default ' ' not null,
  dbdbad1     char(35) default ' ' not null,
  dbdbad2     char(35) default ' ' not null,
  dbdbad3     char(35) default ' ' not null,
  dbdbad4     char(35) default ' ' not null,
  dbdbpc      char(8) default ' ' not null,
  dbdbph1     char(20) default ' ' not null,
  dbdbph2     char(20) default ' ' not null,
  dbdbph3     char(20) default ' ' not null,
  dbdbcon     char(30) default ' ' not null,
  dbdbact     decimal(1,0) default 0 not null,
  dbdbsta     decimal(1,0) default 0 not null,
  dbdbtex     decimal(1,0) default 0 not null,
  dbdbter     char(3) default ' ' not null,
  dbdbwrn     char(3) default ' ' not null,
  dbdblin     char(8) default ' ' not null,
  dbdbpur     char(8) default ' ' not null,
  dbdbbad     decimal(1,0) default 0 not null,
  dbdbclm     decimal(14,2) default 0 not null,
  dbdbsort    char(25) default ' ' not null,
  dbdbur2     char(25) default ' ' not null,
  dbdbud1     char(8) default ' ' not null,
  dbdbud2     char(8) default ' ' not null,
  dbdbuy1     char(1) default ' ' not null,
  dbdbuy2     char(1) default ' ' not null,
  dbdbuc1     char(3) default ' ' not null,
  dbdbuc2     char(3) default ' ' not null,
  dbdbuc3     char(3) default ' ' not null,
  dbdbuc4     char(3) default ' ' not null,
  dbdbdiss    char(5) default ' ' not null,
  dbdbspa     char(15) default ' ' not null,
  lf          char(1)
);
create unique index debdbta1 on debdbtaf
(
dbdbdeb
);
create unique index debdbta2 on debdbtaf
(
dbdbna1,
dbdbdeb
);
create unique index debdbta3 on debdbtaf
(
dbdbsort,
dbdbdeb
);
create unique index debdbta4 on debdbtaf
(
dbdbpur,
dbdbdeb
);
revoke all on debdbtaf from public ; 
grant select on debdbtaf to public ; 
