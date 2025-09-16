create table apstrkaf
(
  aptkcrd     char(5) default ' ' not null,
  aptkdtrc    char(8) default ' ' not null,
  aptkuniq    char(3) default ' ' not null,
  aptkdtin    char(8) default ' ' not null,
  aptkref     char(15) default ' ' not null,
  aptkord     char(8) default ' ' not null,
  aptkled     char(2) default ' ' not null,
  aptkccen    char(12) default ' ' not null,
  aptkdept    char(30) default ' ' not null,
  aptkamt     decimal(14,2) default 0 not null,
  aptkdtpr    char(8) default ' ' not null,
  aptkbat     char(5) default ' ' not null,
  aptkuid     char(4) default ' ' not null,
  aptkdate    char(8) default ' ' not null,
  aptktime    char(8) default ' ' not null,
  aptkur1     char(25) default ' ' not null,
  aptkur2     char(25) default ' ' not null,
  aptkud1     char(8) default ' ' not null,
  aptkud2     char(8) default ' ' not null,
  aptkuy1     char(1) default ' ' not null,
  aptkuy2     char(1) default ' ' not null,
  aptkspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index apstrka1 on apstrkaf
(
aptkcrd,
aptkdtrc,
aptkuniq
);
create unique index apstrka2 on apstrkaf
(
aptkdtrc,
aptkcrd,
aptkuniq
);
create unique index apstrka3 on apstrkaf
(
aptkcrd,
aptkbat,
aptkdtrc,
aptkuniq
);
revoke all on apstrkaf from public ; 
grant select on apstrkaf to public ; 
