create table ibasmaaf
(
  ibsmnumb    char(3) default ' ' not null,
  ibsmname    char(20) default ' ' not null,
  ibsmnatv    char(20) default ' ' not null,
  ibsmhead    char(35) default ' ' not null,
  ibsmdmpg    char(8) default ' ' not null,
  ibsmaval    char(1) default ' ' not null,
  ibsmspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index ibasmaa1 on ibasmaaf
(
ibsmnumb
);
revoke all on ibasmaaf from public ; 
grant select on ibasmaaf to public ; 
