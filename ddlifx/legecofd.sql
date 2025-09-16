create table legecoaf
(
  dlpteoad    char(8) default ' ' not null,
  dlpteoep    char(2) default ' ' not null,
  dlpteocn    char(2) default ' ' not null,
  lpteocod    char(9) default ' ' not null,
  lpteotyp    char(1) default ' ' not null,
  dlpteoun    char(2) default ' ' not null,
  lpteodtc    char(8) default ' ' not null,
  lpteoope    char(4) default ' ' not null,
  lpteodat    char(8) default ' ' not null,
  lpteostt    char(5) default ' ' not null,
  lpteoedt    char(5) default ' ' not null,
  lpteospa    char(45) default ' ' not null,
  lf          char(1)
);
create unique index legecoa1 on legecoaf
(
dlpteoad,
dlpteoep,
dlpteocn
);
create unique index legecoa2 on legecoaf
(
dlpteoad,
dlpteoun,
dlpteoep,
dlpteocn
);
create unique index legecoa3 on legecoaf
(
lpteocod,
dlpteoad,
dlpteoun,
dlpteoep,
dlpteocn
);
revoke all on legecoaf from public ; 
grant select on legecoaf to public ; 
