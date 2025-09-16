create table legecoaf
(
  dlpteoad    varchar2(8) default ' ' not null,
  dlpteoep    varchar2(2) default ' ' not null,
  dlpteocn    varchar2(2) default ' ' not null,
  lpteocod    varchar2(9) default ' ' not null,
  lpteotyp    varchar2(1) default ' ' not null,
  dlpteoun    varchar2(2) default ' ' not null,
  lpteodtc    varchar2(8) default ' ' not null,
  lpteoope    varchar2(4) default ' ' not null,
  lpteodat    varchar2(8) default ' ' not null,
  lpteostt    varchar2(5) default ' ' not null,
  lpteoedt    varchar2(5) default ' ' not null,
  lpteospa    varchar2(45) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legecoa1 primary key( 
dlpteoad,
dlpteoep,
dlpteocn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index legecoa2 on legecoaf
(
dlpteoad,
dlpteoun,
dlpteoep,
dlpteocn
)
  tablespace pas_indx; 
create unique index legecoa3 on legecoaf
(
lpteocod,
dlpteoad,
dlpteoun,
dlpteoep,
dlpteocn
)
  tablespace pas_indx; 
