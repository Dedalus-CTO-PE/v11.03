create table webomgaf
(
  wbogarid    char(20) default ' ' not null,
  wbogrptc    char(3) default ' ' not null,
  wbogctid    char(24) default ' ' not null,
  wbogstat    char(50) default ' ' not null,
  wbogmecd    char(4) default ' ' not null,
  wbogmetx    char(500) default ' ' not null,
  wbogmemn    char(10) default ' ' not null,
  wbogmemr    char(1) default ' ' not null,
  wbogmegn    char(40) default ' ' not null,
  wbogflid    char(8) default ' ' not null,
  wboglddt    char(8) default ' ' not null,
  wbogcdte    char(8) default ' ' not null,
  wbogctim    char(8) default ' ' not null,
  wbogcuid    char(10) default ' ' not null,
  wbogudte    char(8) default ' ' not null,
  wbogutim    char(8) default ' ' not null,
  wboguuid    char(10) default ' ' not null,
  wbogmsid    char(36) default ' ' not null,
  wbogspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webomga1 on webomgaf
(
wbogarid,
wbogrptc
);
create unique index webomga2 on webomgaf
(
wbogctid,
wbogarid,
wbogrptc
);
create unique index webomga3 on webomgaf
(
wbogmsid,
wbogarid,
wbogrptc
);
revoke all on webomgaf from public ; 
grant select on webomgaf to public ; 
