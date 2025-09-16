create table ccscdtaf
(
  cccdhcd     varchar2(2) default ' ' not null,
  cccdfdpt    varchar2(8) default ' ' not null,
  cccdyear    varchar2(4) default ' ' not null,
  cccdper     varchar2(2) default ' ' not null,
  cccdtdpt    varchar2(8) default ' ' not null,
  cccdcty     varchar2(4) default ' ' not null,
  cccdaty     varchar2(4) default ' ' not null,
  cccdtwg     number(18,6) default 0 not null,
  cccdwgt     number(18,6) default 0 not null,
  cccdtot     number(14,2) default 0 not null,
  cccdamt     number(14,2) default 0 not null,
  cccdspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccscdta1 primary key( 
cccdhcd,
cccdfdpt,
cccdyear,
cccdper,
cccdtdpt,
cccdcty)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccscdta2 on ccscdtaf
(
cccdhcd,
cccdyear,
cccdper,
cccdfdpt,
cccdtdpt,
cccdcty
)
  tablespace pas_indx; 
create unique index ccscdta3 on ccscdtaf
(
cccdhcd,
cccdtdpt,
cccdyear,
cccdper,
cccdfdpt,
cccdcty
)
  tablespace pas_indx; 
