create table legwcomf
(
  dlwcadmn    char(8) default ' ' not null,
  lwcename    char(30) default ' ' not null,
  lwceadd1    char(30) default ' ' not null,
  lwceadd2    char(30) default ' ' not null,
  lwceadd3    char(30) default ' ' not null,
  lwcepost    char(4) default ' ' not null,
  lwcetele    char(12) default ' ' not null,
  lwcacdat    char(8) default ' ' not null,
  lwcaccpt    decimal(1,0) default 0 not null,
  lwcicode    char(6) default ' ' not null,
  lwcclmno    char(20) default ' ' not null,
  lwccomn1    char(40) default ' ' not null,
  lwccomn2    char(40) default ' ' not null,
  lwcspare    char(22) default ' ' not null,
  lf          char(1)
);
create unique index legwcom1 on legwcomf
(
dlwcadmn
);
revoke all on legwcomf from public ; 
grant select on legwcomf to public ; 
