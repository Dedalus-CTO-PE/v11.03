create table allpdiaf
(
  alpdrdep    char(3) default ' ' not null,
  alpdreas    char(9) default ' ' not null,
  alpddesc    char(40) default ' ' not null,
  alpdicd     char(9) default ' ' not null,
  alpdactv    char(1) default ' ' not null,
  alpdcdat    char(8) default ' ' not null,
  alpdctim    char(8) default ' ' not null,
  alpdcuid    char(10) default ' ' not null,
  alpdudat    char(8) default ' ' not null,
  alpdutim    char(8) default ' ' not null,
  alpduuid    char(10) default ' ' not null,
  alpdspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index allpdia1 on allpdiaf
(
alpdrdep,
alpdreas
);
create unique index allpdia2 on allpdiaf
(
alpdrdep,
alpddesc,
alpdreas
);
revoke all on allpdiaf from public ; 
grant select on allpdiaf to public ; 
