create table aaeletaf
(
  daeleltn    char(3) default ' ' not null,
  daelelin    char(3) default ' ' not null,
  aeletext    char(70) default ' ' not null,
  aelelvar    decimal(1,0) default 0 not null,
  aelepbot    decimal(2,0) default 0 not null,
  aeleptop    decimal(2,0) default 0 not null,
  aeleppag    decimal(2,0) default 0 not null,
  aeleptab    decimal(2,0) default 0 not null,
  aelespar    char(12) default ' ' not null,
  lf          char(1)
);
create unique index aaeleta1 on aaeletaf
(
daeleltn,
daelelin
);
create unique index aaeleta2 on aaeletaf
(
daelelin,
daeleltn
);
revoke all on aaeletaf from public ; 
grant select on aaeletaf to public ; 
