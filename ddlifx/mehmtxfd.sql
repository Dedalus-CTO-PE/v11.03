create table mehmtxaf
(
  mhmturno    char(8) default ' ' not null,
  mhmttype    char(3) default ' ' not null,
  mhmtnote    char(6) default ' ' not null,
  mhmtuniq    char(3) default ' ' not null,
  mhmtcmnt    char(100) default ' ' not null,
  mhmtspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index mehmtxa1 on mehmtxaf
(
mhmturno,
mhmttype,
mhmtnote,
mhmtuniq
);
revoke all on mehmtxaf from public ; 
grant select on mehmtxaf to public ; 
