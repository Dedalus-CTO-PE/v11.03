create table casxhdaf
(
  caxhtoe     char(3) default ' ' not null,
  caxhsty     char(3) default ' ' not null,
  caxhkey     char(10) default ' ' not null,
  caxhdes     char(35) default ' ' not null,
  caxhsum     char(10) default ' ' not null,
  caxhsuma    char(10) default ' ' not null,
  caxhsumb    char(10) default ' ' not null,
  caxhsumc    char(10) default ' ' not null,
  caxhspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index casxhda1 on casxhdaf
(
caxhtoe,
caxhsty,
caxhkey
);
create unique index casxhda2 on casxhdaf
(
caxhtoe,
caxhsty,
caxhsum,
caxhkey
);
revoke all on casxhdaf from public ; 
grant select on casxhdaf to public ; 
