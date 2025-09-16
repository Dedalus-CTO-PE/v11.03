create table sinaudsa
(
  sisaaudd    varchar2(8) default ' ' not null,
  sisaaudt    varchar2(8) default ' ' not null,
  sisaaudp    varchar2(2) default ' ' not null,
  sisaaudr    varchar2(1) default ' ' not null,
  sisaauds    number(1,0) default 0 not null,
  sisaaudo    varchar2(4) default ' ' not null,
  sisacode    varchar2(5) default ' ' not null,
  sisadesc    varchar2(30) default ' ' not null,
  sisacomm    varchar2(6) default ' ' not null,
  sisagli     varchar2(12) default ' ' not null,
  sisaur1     varchar2(15) default ' ' not null,
  sisaur2     varchar2(15) default ' ' not null,
  sisaud1     varchar2(8) default ' ' not null,
  sisaud2     varchar2(8) default ' ' not null,
  sisauc1     varchar2(3) default ' ' not null,
  sisauc2     varchar2(3) default ' ' not null,
  sisauy1     varchar2(1) default ' ' not null,
  sisauy2     varchar2(1) default ' ' not null,
  sisaspa     varchar2(19) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index sinaudsa on sinaudsa
(
sisaaudd,
sisaaudt,
sisaaudp,
sisaaudr
)
tablespace pas_indx; 
create table sinsuaaf
(
  sisacode    varchar2(5) default ' ' not null,
  sisadesc    varchar2(30) default ' ' not null,
  sisacomm    varchar2(6) default ' ' not null,
  sisagli     varchar2(12) default ' ' not null,
  sisaur1     varchar2(15) default ' ' not null,
  sisaur2     varchar2(15) default ' ' not null,
  sisaud1     varchar2(8) default ' ' not null,
  sisaud2     varchar2(8) default ' ' not null,
  sisauc1     varchar2(3) default ' ' not null,
  sisauc2     varchar2(3) default ' ' not null,
  sisauy1     varchar2(1) default ' ' not null,
  sisauy2     varchar2(1) default ' ' not null,
  sisaspa     varchar2(19) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinsuaa1 primary key( 
sisacode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinsuaa2 on sinsuaaf
(
sisadesc,
sisacode
)
  tablespace pas_indx; 
create unique index sinsuaa3 on sinsuaaf
(
sisacomm,
sisacode
)
  tablespace pas_indx; 
