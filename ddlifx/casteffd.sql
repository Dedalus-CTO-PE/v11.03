create table castefaf
(
  catetoe     char(3) default ' ' not null,
  catedes     char(35) default ' ' not null,
  catespa     char(50) default ' ' not null,
  lf          char(1)
);
create unique index castefa1 on castefaf
(
catetoe
);
revoke all on castefaf from public ; 
grant select on castefaf to public ; 
