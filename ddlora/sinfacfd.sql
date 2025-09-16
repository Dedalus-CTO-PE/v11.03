create table sinaudfa
(
  sifaaudd    varchar2(8) default ' ' not null,
  sifaaudt    varchar2(8) default ' ' not null,
  sifaaudp    varchar2(2) default ' ' not null,
  sifaaudr    varchar2(1) default ' ' not null,
  sifaauds    number(1,0) default 0 not null,
  sifaaudo    varchar2(4) default ' ' not null,
  sifaissu    varchar2(15) default ' ' not null,
  sifasupp    varchar2(15) default ' ' not null,
  sifactor    number(4,0) default 0 not null,
  sifafill    varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index sinaudfa on sinaudfa
(
sifaaudd,
sifaaudt,
sifaaudp,
sifaaudr
)
tablespace pas_indx; 
create table sinfacaf
(
  sifaissu    varchar2(15) default ' ' not null,
  sifasupp    varchar2(15) default ' ' not null,
  sifactor    number(4,0) default 0 not null,
  sifafill    varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinfaca1 primary key( 
sifaissu,
sifasupp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinfaca2 on sinfacaf
(
sifasupp,
sifaissu
)
  tablespace pas_indx; 
