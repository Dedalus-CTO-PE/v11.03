create table ibaptyaf
(
  ibptcode    char(3) default ' ' not null,
  ibptdesc    char(35) default ' ' not null,
  ibptspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index ibaptya1 on ibaptyaf
(
ibptcode
);
revoke all on ibaptyaf from public ; 
grant select on ibaptyaf to public ; 
