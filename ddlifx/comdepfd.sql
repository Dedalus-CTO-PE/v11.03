create table comdepaf
(
  cmdetdat    char(8) default ' ' not null,
  cmderecn    char(12) default ' ' not null,
  cmdetcnt    char(5) default ' ' not null,
  cmdedtyp    char(3) default ' ' not null,
  cmderrfn    char(3) default ' ' not null,
  cmderefd    char(8) default ' ' not null,
  cmdereft    char(8) default ' ' not null,
  cmdeurno    char(8) default ' ' not null,
  cmdeadmn    char(8) default ' ' not null,
  cmdesflg    char(1) default ' ' not null,
  cmdesyst    decimal(2,0) default 0 not null,
  cmdeprac    char(6) default ' ' not null,
  cmdecdat    char(8) default ' ' not null,
  cmdectim    char(8) default ' ' not null,
  cmdecuid    char(10) default ' ' not null,
  cmdeudat    char(8) default ' ' not null,
  cmdeutim    char(8) default ' ' not null,
  cmdeuuid    char(10) default ' ' not null,
  cmdestat    char(1) default ' ' not null,
  cmdeainv    char(12) default ' ' not null,
  cmdesdoc    char(10) default ' ' not null,
  cmdetrsf    char(1) default ' ' not null,
  cmdespar    char(26) default ' ' not null,
  lf          char(1)
);
create unique index comdepa1 on comdepaf
(
cmderecn,
cmdetcnt
);
create unique index comdepa2 on comdepaf
(
cmdeadmn,
cmdestat,
cmderecn,
cmdetcnt
);
create unique index comdepa3 on comdepaf
(
cmdeurno,
cmdestat,
cmdeadmn,
cmderecn,
cmdetcnt
);
create unique index comdepa4 on comdepaf
(
cmdestat,
cmdeurno,
cmdesflg,
cmdeprac,
cmderecn,
cmdetcnt
);
create unique index comdepa5 on comdepaf
(
cmdestat,
cmdetdat,
cmderecn,
cmdetcnt
);
create unique index comdepa6 on comdepaf
(
cmdestat,
cmdeprac,
cmdeurno,
cmdesflg,
cmderecn,
cmdetcnt
);
create unique index comdepa7 on comdepaf
(
cmdestat,
cmderefd,
cmderecn,
cmdetcnt
);
revoke all on comdepaf from public ; 
grant select on comdepaf to public ; 
