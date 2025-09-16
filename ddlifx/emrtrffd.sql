create table emrtrfaf
(
  emtftrig    char(3) default ' ' not null,
  emtfattd    char(3) default ' ' not null,
  emtfefda    char(8) default ' ' not null,
  emtfdesc    char(30) default ' ' not null,
  emtfamnt    decimal(14,2) default 0 not null,
  emtfscod    char(3) default ' ' not null,
  emtfactv    decimal(1,0) default 0 not null,
  emtfcdat    char(8) default ' ' not null,
  emtfctim    char(8) default ' ' not null,
  emtfcuid    char(10) default ' ' not null,
  emtfudat    char(8) default ' ' not null,
  emtfutim    char(8) default ' ' not null,
  emtfuuid    char(10) default ' ' not null,
  emtfspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index emrtrfa1 on emrtrfaf
(
emtftrig,
emtfattd,
emtfefda
);
revoke all on emrtrfaf from public ; 
grant select on emrtrfaf to public ; 
