create table legdetaf
(
  dladanum    char(8) default ' ' not null,
  ladadate    char(8) default ' ' not null,
  ladatime    char(5) default ' ' not null,
  dladaurn    char(8) default ' ' not null,
  ladacomp    char(3) default ' ' not null,
  ladaclas    char(3) default ' ' not null,
  ladainsu    char(3) default ' ' not null,
  ladasrc     char(3) default ' ' not null,
  ladasit     char(3) default ' ' not null,
  ladamode    char(3) default ' ' not null,
  ladafill    char(1) default ' ' not null,
  ladadoct    char(6) default ' ' not null,
  ladaseen    char(5) default ' ' not null,
  ladaadmi    decimal(1,0) default 0 not null,
  ladalock    char(2) default ' ' not null,
  ladadurn    decimal(4,0) default 0 not null,
  ladaempl    char(20) default ' ' not null,
  ladaadd1    char(25) default ' ' not null,
  ladaadd2    char(25) default ' ' not null,
  ladasubr    char(20) default ' ' not null,
  ladapost    char(4) default ' ' not null,
  ladatele    char(12) default ' ' not null,
  ladacont    char(20) default ' ' not null,
  ladausr1    char(3) default ' ' not null,
  ladausr2    char(3) default ' ' not null,
  ladausr3    char(3) default ' ' not null,
  ladausr4    char(3) default ' ' not null,
  ladausr5    char(3) default ' ' not null,
  ladadiag    char(60) default ' ' not null,
  ladawait    char(3) default ' ' not null,
  ladasdte    char(8) default ' ' not null,
  ladaprev    char(3) default ' ' not null,
  ladadigc    char(3) default ' ' not null,
  laedaprt    char(3) default ' ' not null,
  laedardo    char(6) default ' ' not null,
  laedaudd    char(8) default ' ' not null,
  laedaudt    char(8) default ' ' not null,
  ladaspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index legdeta1 on legdetaf
(
dladanum
);
create unique index legdeta2 on legdetaf
(
dladaurn,
dladanum
);
create unique index legdeta3 on legdetaf
(
ladadate,
ladatime,
dladanum
);
create unique index legdeta4 on legdetaf
(
ladadoct,
ladadate,
ladatime,
dladanum
);
revoke all on legdetaf from public ; 
grant select on legdetaf to public ; 
