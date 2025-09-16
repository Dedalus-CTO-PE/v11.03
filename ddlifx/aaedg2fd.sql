create table aaedg2af
(
  aed2box1    char(1) default ' ' not null,
  aed2dise    char(2) default ' ' not null,
  aed2desc    char(35) default ' ' not null,
  aed2box2    char(1) default ' ' not null,
  lf          char(1)
);
create unique index aaedg2a1 on aaedg2af
(
aed2box1,
aed2dise
);
revoke all on aaedg2af from public ; 
grant select on aaedg2af to public ; 
