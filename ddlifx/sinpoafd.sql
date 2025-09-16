create table sinaudpa
(
  sipaaudd    char(8) default ' ' not null,
  sipaaudt    char(8) default ' ' not null,
  sipaaudp    char(2) default ' ' not null,
  sipaaudr    char(1) default ' ' not null,
  sipaauds    decimal(1,0) default 0 not null,
  sipaaudo    char(4) default ' ' not null,
  sipapon     char(7) default ' ' not null,
  sipasup     char(5) default ' ' not null,
  sipaori     char(3) default ' ' not null,
  sipaicn     char(30) default ' ' not null,
  sipascn     char(30) default ' ' not null,
  sipadel     char(40) default ' ' not null,
  sipames     char(3) default ' ' not null,
  sipadin     char(8) default ' ' not null,
  sipadpr     char(8) default ' ' not null,
  sipadcn     char(8) default ' ' not null,
  sipadcm     char(8) default ' ' not null,
  sipacon     char(3) default ' ' not null,
  sipaidp     char(40) default ' ' not null,
  sipaur1     char(15) default ' ' not null,
  sipaur2     char(15) default ' ' not null,
  sipaud1     char(8) default ' ' not null,
  sipaud2     char(8) default ' ' not null,
  sipauc1     char(3) default ' ' not null,
  sipauc2     char(3) default ' ' not null,
  sipauy1     char(1) default ' ' not null,
  sipauy2     char(1) default ' ' not null,
  sipacst     char(5) default ' ' not null,
  sipawar     char(5) default ' ' not null,
  sipapnt     char(1) default ' ' not null,
  sipamdp     char(3) default ' ' not null,
  sipaspa     char(6) default ' ' not null,
  lf          char(1)
);
create index sinaudpa on sinaudpa
(
sipaaudd,
sipaaudt,
sipaaudp,
sipaaudr
);
revoke all on sinaudpa from public ; 
grant select on sinaudpa to public ; 
create table sinpoaaf
(
  sipapon     char(7) default ' ' not null,
  sipasup     char(5) default ' ' not null,
  sipaori     char(3) default ' ' not null,
  sipaicn     char(30) default ' ' not null,
  sipascn     char(30) default ' ' not null,
  sipadel     char(40) default ' ' not null,
  sipames     char(3) default ' ' not null,
  sipadin     char(8) default ' ' not null,
  sipadpr     char(8) default ' ' not null,
  sipadcn     char(8) default ' ' not null,
  sipadcm     char(8) default ' ' not null,
  sipacon     char(3) default ' ' not null,
  sipaidp     char(40) default ' ' not null,
  sipaur1     char(15) default ' ' not null,
  sipaur2     char(15) default ' ' not null,
  sipaud1     char(8) default ' ' not null,
  sipaud2     char(8) default ' ' not null,
  sipauc1     char(3) default ' ' not null,
  sipauc2     char(3) default ' ' not null,
  sipauy1     char(1) default ' ' not null,
  sipauy2     char(1) default ' ' not null,
  sipacst     char(5) default ' ' not null,
  sipawar     char(5) default ' ' not null,
  sipapnt     char(1) default ' ' not null,
  sipamdp     char(3) default ' ' not null,
  sipaspa     char(6) default ' ' not null,
  lf          char(1)
);
create unique index sinpoaa1 on sinpoaaf
(
sipapon
);
create unique index sinpoaa2 on sinpoaaf
(
sipasup,
sipadin,
sipapon
);
create unique index sinpoaa3 on sinpoaaf
(
sipadpr,
sipapon
);
create unique index sinpoaa4 on sinpoaaf
(
sipadin,
sipapon
);
revoke all on sinpoaaf from public ; 
grant select on sinpoaaf to public ; 
