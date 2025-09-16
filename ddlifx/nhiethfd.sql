create table nhiethaf
(
  nhetecd     char(5) default ' ' not null,
  nhetdes     char(25) default ' ' not null,
  nhetiba     char(3) default ' ' not null,
  nhetlev     char(1) default ' ' not null,
  nhetspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index nhietha1 on nhiethaf
(
nhetecd
);
create unique index nhietha2 on nhiethaf
(
nhetlev,
nhetecd
);
revoke all on nhiethaf from public ; 
grant select on nhiethaf to public ; 
