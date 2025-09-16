create table alletxaf
(
  aleturno    char(8) default ' ' not null,
  aletloan    char(8) default ' ' not null,
  alettype    char(3) default ' ' not null,
  aletnote    char(6) default ' ' not null,
  aletuniq    char(3) default ' ' not null,
  aletcmnt    char(100) default ' ' not null,
  aletspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index alletxa1 on alletxaf
(
aleturno,
aletloan,
alettype,
aletnote,
aletuniq
);
revoke all on alletxaf from public ; 
grant select on alletxaf to public ; 
