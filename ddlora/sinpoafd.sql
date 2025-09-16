create table sinaudpa
(
  sipaaudd    varchar2(8) default ' ' not null,
  sipaaudt    varchar2(8) default ' ' not null,
  sipaaudp    varchar2(2) default ' ' not null,
  sipaaudr    varchar2(1) default ' ' not null,
  sipaauds    number(1,0) default 0 not null,
  sipaaudo    varchar2(4) default ' ' not null,
  sipapon     varchar2(7) default ' ' not null,
  sipasup     varchar2(5) default ' ' not null,
  sipaori     varchar2(3) default ' ' not null,
  sipaicn     varchar2(30) default ' ' not null,
  sipascn     varchar2(30) default ' ' not null,
  sipadel     varchar2(40) default ' ' not null,
  sipames     varchar2(3) default ' ' not null,
  sipadin     varchar2(8) default ' ' not null,
  sipadpr     varchar2(8) default ' ' not null,
  sipadcn     varchar2(8) default ' ' not null,
  sipadcm     varchar2(8) default ' ' not null,
  sipacon     varchar2(3) default ' ' not null,
  sipaidp     varchar2(40) default ' ' not null,
  sipaur1     varchar2(15) default ' ' not null,
  sipaur2     varchar2(15) default ' ' not null,
  sipaud1     varchar2(8) default ' ' not null,
  sipaud2     varchar2(8) default ' ' not null,
  sipauc1     varchar2(3) default ' ' not null,
  sipauc2     varchar2(3) default ' ' not null,
  sipauy1     varchar2(1) default ' ' not null,
  sipauy2     varchar2(1) default ' ' not null,
  sipacst     varchar2(5) default ' ' not null,
  sipawar     varchar2(5) default ' ' not null,
  sipapnt     varchar2(1) default ' ' not null,
  sipamdp     varchar2(3) default ' ' not null,
  sipaspa     varchar2(6) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index sinaudpa on sinaudpa
(
sipaaudd,
sipaaudt,
sipaaudp,
sipaaudr
)
tablespace pas_indx; 
create table sinpoaaf
(
  sipapon     varchar2(7) default ' ' not null,
  sipasup     varchar2(5) default ' ' not null,
  sipaori     varchar2(3) default ' ' not null,
  sipaicn     varchar2(30) default ' ' not null,
  sipascn     varchar2(30) default ' ' not null,
  sipadel     varchar2(40) default ' ' not null,
  sipames     varchar2(3) default ' ' not null,
  sipadin     varchar2(8) default ' ' not null,
  sipadpr     varchar2(8) default ' ' not null,
  sipadcn     varchar2(8) default ' ' not null,
  sipadcm     varchar2(8) default ' ' not null,
  sipacon     varchar2(3) default ' ' not null,
  sipaidp     varchar2(40) default ' ' not null,
  sipaur1     varchar2(15) default ' ' not null,
  sipaur2     varchar2(15) default ' ' not null,
  sipaud1     varchar2(8) default ' ' not null,
  sipaud2     varchar2(8) default ' ' not null,
  sipauc1     varchar2(3) default ' ' not null,
  sipauc2     varchar2(3) default ' ' not null,
  sipauy1     varchar2(1) default ' ' not null,
  sipauy2     varchar2(1) default ' ' not null,
  sipacst     varchar2(5) default ' ' not null,
  sipawar     varchar2(5) default ' ' not null,
  sipapnt     varchar2(1) default ' ' not null,
  sipamdp     varchar2(3) default ' ' not null,
  sipaspa     varchar2(6) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinpoaa1 primary key( 
sipapon)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinpoaa2 on sinpoaaf
(
sipasup,
sipadin,
sipapon
)
  tablespace pas_indx; 
create unique index sinpoaa3 on sinpoaaf
(
sipadpr,
sipapon
)
  tablespace pas_indx; 
create unique index sinpoaa4 on sinpoaaf
(
sipadin,
sipapon
)
  tablespace pas_indx; 
