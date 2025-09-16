create table ccscdtaf
(
  cccdhcd     char(2) default ' ' not null,
  cccdfdpt    char(8) default ' ' not null,
  cccdyear    char(4) default ' ' not null,
  cccdper     char(2) default ' ' not null,
  cccdtdpt    char(8) default ' ' not null,
  cccdcty     char(4) default ' ' not null,
  cccdaty     char(4) default ' ' not null,
  cccdtwg     decimal(18,6) default 0 not null,
  cccdwgt     decimal(18,6) default 0 not null,
  cccdtot     decimal(14,2) default 0 not null,
  cccdamt     decimal(14,2) default 0 not null,
  cccdspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index ccscdta1 on ccscdtaf
(
cccdhcd,
cccdfdpt,
cccdyear,
cccdper,
cccdtdpt,
cccdcty
);
create unique index ccscdta2 on ccscdtaf
(
cccdhcd,
cccdyear,
cccdper,
cccdfdpt,
cccdtdpt,
cccdcty
);
create unique index ccscdta3 on ccscdtaf
(
cccdhcd,
cccdtdpt,
cccdyear,
cccdper,
cccdfdpt,
cccdcty
);
revoke all on ccscdtaf from public ; 
grant select on ccscdtaf to public ; 
