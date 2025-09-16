create table sysidxaf
(
  syidsys     char(2) default ' ' not null,
  syidfil     char(2) default ' ' not null,
  syididx     char(1) default ' ' not null,
  syiddes     char(35) default ' ' not null,
  syidfl1     char(4) default ' ' not null,
  syidfl2     char(4) default ' ' not null,
  syidfl3     char(4) default ' ' not null,
  syidfl4     char(4) default ' ' not null,
  syidfl5     char(4) default ' ' not null,
  syidfl6     char(4) default ' ' not null,
  syidfl7     char(4) default ' ' not null,
  syidfl8     char(4) default ' ' not null,
  syidiud     char(1) default ' ' not null,
  syidspa     char(79) default ' ' not null,
  lf          char(1)
);
create unique index sysidxa1 on sysidxaf
(
syidsys,
syidfil,
syididx
);
revoke all on sysidxaf from public ; 
grant select on sysidxaf to public ; 
