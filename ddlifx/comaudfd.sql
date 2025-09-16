create table comaudaf
(
  cmaurecn    char(12) default ' ' not null,
  cmautcnt    char(5) default ' ' not null,
  cmautdat    char(8) default ' ' not null,
  cmauttim    char(8) default ' ' not null,
  cmauurno    char(8) default ' ' not null,
  cmaufadm    char(8) default ' ' not null,
  cmautadm    char(8) default ' ' not null,
  cmaufpra    char(6) default ' ' not null,
  cmautpra    char(6) default ' ' not null,
  cmaufsdr    char(10) default ' ' not null,
  cmautsdr    char(10) default ' ' not null,
  cmaufdty    char(3) default ' ' not null,
  cmautdty    char(3) default ' ' not null,
  cmaufvty    char(1) default ' ' not null,
  cmautvty    char(1) default ' ' not null,
  cmaufreg    char(3) default ' ' not null,
  cmautreg    char(3) default ' ' not null,
  cmaucuid    char(10) default ' ' not null,
  cmauspar    char(46) default ' ' not null,
  lf          char(1)
);
create unique index comauda1 on comaudaf
(
cmaurecn,
cmautcnt,
cmautdat,
cmauttim
);
create unique index comauda2 on comaudaf
(
cmaurecn,
cmautdat,
cmauttim,
cmautcnt
);
create unique index comauda3 on comaudaf
(
cmauurno,
cmaurecn,
cmautdat,
cmauttim,
cmautcnt
);
create unique index comauda4 on comaudaf
(
cmautdat,
cmauttim,
cmauurno,
cmaurecn,
cmautcnt
);
revoke all on comaudaf from public ; 
grant select on comaudaf to public ; 
