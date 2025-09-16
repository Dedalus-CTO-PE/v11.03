create table oprthiaf
(
  opticode    varchar2(15) default ' ' not null,
  optidesc    varchar2(60) default ' ' not null,
  optimchg    varchar2(9) default ' ' not null,
  optityim    varchar2(3) default ' ' not null,
  optimanu    varchar2(60) default ' ' not null,
  optisize    varchar2(10) default ' ' not null,
  optisupp    varchar2(30) default ' ' not null,
  opticost    number(14,2) default 0 not null,
  opticopc    varchar2(10) default ' ' not null,
  optistat    varchar2(1) default ' ' not null,
  optiregi    varchar2(1) default ' ' not null,
  optibcod    varchar2(60) default ' ' not null,
  optiaimp    varchar2(1) default ' ' not null,
  optilotn    varchar2(20) default ' ' not null,
  optispar    varchar2(17) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprthia1 primary key( 
opticode,
optibcod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create  index oprthia2 on oprthiaf
(
optidesc,
opticode
)
  tablespace pas_indx; 
create unique index oprthia3 on oprthiaf
(
optibcod,
opticode
)
  tablespace pas_indx; 
create unique index oprthia4 on oprthiaf
(
optiaimp,
optibcod,
opticode
)
  tablespace pas_indx; 
