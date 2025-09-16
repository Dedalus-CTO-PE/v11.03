create table patabfaf
(
  ptabadmn    char(8) default ' ' not null,
  ptabenct    char(8) default ' ' not null,
  ptabinvn    char(8) default ' ' not null,
  ptabadjt    char(3) default ' ' not null,
  ptabinvc    char(1) default ' ' not null,
  ptababft    char(1) default ' ' not null,
  ptabadjv    decimal(14,4) default 0 not null,
  ptabcdes    char(100) default ' ' not null,
  ptabimpr    char(1) default ' ' not null,
  ptabcdat    char(8) default ' ' not null,
  ptabctim    char(8) default ' ' not null,
  ptabcuid    char(10) default ' ' not null,
  ptabudat    char(8) default ' ' not null,
  ptabutim    char(8) default ' ' not null,
  ptabuuid    char(8) default ' ' not null,
  ptabspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index patabfa1 on patabfaf
(
ptabadmn,
ptabenct,
ptabinvn,
ptabadjt
);
create unique index patabfa2 on patabfaf
(
ptabadmn,
ptabenct,
ptabadjt,
ptabinvn
);
revoke all on patabfaf from public ; 
grant select on patabfaf to public ; 
