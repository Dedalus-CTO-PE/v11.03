create table patasdaf
(
  ptadclmn    char(3) default ' ' not null,
  ptadhfnd    char(6) default ' ' not null,
  ptadtabt    char(3) default ' ' not null,
  ptadcasm    char(9) default ' ' not null,
  ptadbtyp    char(3) default ' ' not null,
  ptaddes1    char(30) default ' ' not null,
  ptaddes2    char(35) default ' ' not null,
  ptaddreb    decimal(14,2) default 0 not null,
  ptaddpat    decimal(14,2) default 0 not null,
  ptadcnid    char(6) default ' ' not null,
  ptadfigr    char(3) default ' ' not null,
  ptadspar    char(15) default ' ' not null,
  lf          char(1)
);
create unique index patasda1 on patasdaf
(
ptadcnid,
ptadclmn,
ptadhfnd,
ptadtabt,
ptadcasm,
ptadbtyp
);
revoke all on patasdaf from public ; 
grant select on patasdaf to public ; 
