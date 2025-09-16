create table legdetaf
(
  dladanum    varchar2(8) default ' ' not null,
  ladadate    varchar2(8) default ' ' not null,
  ladatime    varchar2(5) default ' ' not null,
  dladaurn    varchar2(8) default ' ' not null,
  ladacomp    varchar2(3) default ' ' not null,
  ladaclas    varchar2(3) default ' ' not null,
  ladainsu    varchar2(3) default ' ' not null,
  ladasrc     varchar2(3) default ' ' not null,
  ladasit     varchar2(3) default ' ' not null,
  ladamode    varchar2(3) default ' ' not null,
  ladafill    varchar2(1) default ' ' not null,
  ladadoct    varchar2(6) default ' ' not null,
  ladaseen    varchar2(5) default ' ' not null,
  ladaadmi    number(1,0) default 0 not null,
  ladalock    varchar2(2) default ' ' not null,
  ladadurn    number(4,0) default 0 not null,
  ladaempl    varchar2(20) default ' ' not null,
  ladaadd1    varchar2(25) default ' ' not null,
  ladaadd2    varchar2(25) default ' ' not null,
  ladasubr    varchar2(20) default ' ' not null,
  ladapost    varchar2(4) default ' ' not null,
  ladatele    varchar2(12) default ' ' not null,
  ladacont    varchar2(20) default ' ' not null,
  ladausr1    varchar2(3) default ' ' not null,
  ladausr2    varchar2(3) default ' ' not null,
  ladausr3    varchar2(3) default ' ' not null,
  ladausr4    varchar2(3) default ' ' not null,
  ladausr5    varchar2(3) default ' ' not null,
  ladadiag    varchar2(60) default ' ' not null,
  ladawait    varchar2(3) default ' ' not null,
  ladasdte    varchar2(8) default ' ' not null,
  ladaprev    varchar2(3) default ' ' not null,
  ladadigc    varchar2(3) default ' ' not null,
  laedaprt    varchar2(3) default ' ' not null,
  laedardo    varchar2(6) default ' ' not null,
  laedaudd    varchar2(8) default ' ' not null,
  laedaudt    varchar2(8) default ' ' not null,
  ladaspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legdeta1 primary key( 
dladanum)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index legdeta2 on legdetaf
(
dladaurn,
dladanum
)
  tablespace pas_indx; 
create unique index legdeta3 on legdetaf
(
ladadate,
ladatime,
dladanum
)
  tablespace pas_indx; 
create unique index legdeta4 on legdetaf
(
ladadoct,
ladadate,
ladatime,
dladanum
)
  tablespace pas_indx; 
