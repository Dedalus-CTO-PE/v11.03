create table aaedg3af
(
  aed3box2    char(1) default ' ' not null,
  aed3loct    char(2) default ' ' not null,
  aed3desc    char(35) default ' ' not null,
  aed3box3    char(1) default ' ' not null,
  lf          char(1)
);
create unique index aaedg3a1 on aaedg3af
(
aed3box2,
aed3loct
);
revoke all on aaedg3af from public ; 
grant select on aaedg3af to public ; 
