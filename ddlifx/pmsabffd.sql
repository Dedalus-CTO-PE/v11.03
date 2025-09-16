create table pmsabfaf
(
  pmabadmn    char(8) default ' ' not null,
  pmabinvn    char(8) default ' ' not null,
  pmabadjt    char(3) default ' ' not null,
  pmabinvc    char(1) default ' ' not null,
  pmababft    char(1) default ' ' not null,
  pmabepsn    char(2) default ' ' not null,
  pmabadrg    char(20) default ' ' not null,
  pmabdrgd    char(80) default ' ' not null,
  pmabadjv    decimal(14,4) default 0 not null,
  pmabcdes    char(100) default ' ' not null,
  pmabimpr    char(1) default ' ' not null,
  pmabcdat    char(8) default ' ' not null,
  pmabctim    char(8) default ' ' not null,
  pmabcuid    char(10) default ' ' not null,
  pmabudat    char(8) default ' ' not null,
  pmabutim    char(8) default ' ' not null,
  pmabuuid    char(10) default ' ' not null,
  pmabspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmsabfa1 on pmsabfaf
(
pmabadmn,
pmabinvn,
pmabadjt
);
create unique index pmsabfa2 on pmsabfaf
(
pmabinvn,
pmabadjt,
pmabadmn
);
create unique index pmsabfa3 on pmsabfaf
(
pmabadmn,
pmabadjt,
pmabinvn
);
revoke all on pmsabfaf from public ; 
grant select on pmsabfaf to public ; 
