create table aaedg1af
(
  aed1init    char(2) default ' ' not null,
  aed1desc    char(20) default ' ' not null,
  aed1box1    char(1) default ' ' not null,
  lf          char(1)
);
create unique index aaedg1a1 on aaedg1af
(
aed1init
);
revoke all on aaedg1af from public ; 
grant select on aaedg1af to public ; 
