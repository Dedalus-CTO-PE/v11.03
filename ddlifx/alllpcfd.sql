create table alllpcaf
(
  allpsche    char(5) default ' ' not null,
  allpurno    char(8) default ' ' not null,
  allpvisn    char(8) default ' ' not null,
  allpprnt    char(6) default ' ' not null,
  allpcopy    decimal(3,0) default 0 not null,
  allpstat    char(6) default ' ' not null,
  allplett    char(3) default ' ' not null,
  allpptyp    char(1) default ' ' not null,
  allpouno    char(8) default ' ' not null,
  allpoust    char(6) default ' ' not null,
  allpwebu    char(10) default ' ' not null,
  allprdat    char(8) default ' ' not null,
  allprtim    char(8) default ' ' not null,
  allpspar    char(22) default ' ' not null,
  lf          char(1)
);
create unique index alllpca1 on alllpcaf
(
allpsche
);
revoke all on alllpcaf from public ; 
grant select on alllpcaf to public ; 
