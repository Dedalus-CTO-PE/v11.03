create table emrechaf
(
  emehuniq    char(10) default ' ' not null,
  emehtype    char(3) default ' ' not null,
  emehnote    char(6) default ' ' not null,
  emehcdat    char(8) default ' ' not null,
  emehctim    char(8) default ' ' not null,
  emehcuid    char(10) default ' ' not null,
  emehoccg    char(3) default ' ' not null,
  emehdelt    char(1) default ' ' not null,
  emehddat    char(8) default ' ' not null,
  emehdtim    char(8) default ' ' not null,
  emehduid    char(10) default ' ' not null,
  emehdocc    char(3) default ' ' not null,
  emehspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index emrecha1 on emrechaf
(
emehuniq,
emehtype,
emehnote
);
revoke all on emrechaf from public ; 
grant select on emrechaf to public ; 
