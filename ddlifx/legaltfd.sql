create table legaltaf
(
  lgaturno    char(8) default ' ' not null,
  lgatadat    char(8) default ' ' not null,
  lgatatim    char(8) default ' ' not null,
  lgatevno    char(8) default ' ' not null,
  lgattype    decimal(1,0) default 0 not null,
  lgatstat    char(30) default ' ' not null,
  lgatddrg    char(4) default ' ' not null,
  lgatddat    char(8) default ' ' not null,
  lgatdtim    char(8) default ' ' not null,
  lgathosc    char(5) default ' ' not null,
  lgatatdr    char(20) default ' ' not null,
  lgatprpf    char(120) default ' ' not null,
  lgatspar    char(21) default ' ' not null,
  lf          char(1)
);
create unique index legalta1 on legaltaf
(
lgaturno,
lgatadat,
lgatatim,
lgatevno
);
revoke all on legaltaf from public ; 
grant select on legaltaf to public ; 
