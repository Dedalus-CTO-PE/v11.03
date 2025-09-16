create table priauddo
(
  prdoaudd    varchar2(8) default ' ' not null,
  prdoaudt    varchar2(8) default ' ' not null,
  prdoaudp    varchar2(2) default ' ' not null,
  prdoaudr    varchar2(1) default ' ' not null,
  prdoauds    number(1,0) default 0 not null,
  prdoaudo    varchar2(4) default ' ' not null,
  prdoprac    varchar2(6) default ' ' not null,
  prdodoct    varchar2(10) default ' ' not null,
  prdoclam    varchar2(3) default ' ' not null,
  prdopind    varchar2(3) default ' ' not null,
  prdocomm    number(5,2) default 0 not null,
  prdofeep    number(5,2) default 0 not null,
  prdostat    number(1,0) default 0 not null,
  prdocrcd    varchar2(5) default ' ' not null,
  prdoabnn    varchar2(11) default ' ' not null,
  prdogstr    number(1,0) default 0 not null,
  prdoprov    varchar2(10) default ' ' not null,
  prdospar    varchar2(13) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index priauddo on priauddo
(
prdoaudd,
prdoaudt,
prdoaudp,
prdoaudr
)
tablespace pas_indx; 
create table pridoctf
(
  prdoprac    varchar2(6) default ' ' not null,
  prdodoct    varchar2(10) default ' ' not null,
  prdoclam    varchar2(3) default ' ' not null,
  prdopind    varchar2(3) default ' ' not null,
  prdocomm    number(5,2) default 0 not null,
  prdofeep    number(5,2) default 0 not null,
  prdostat    number(1,0) default 0 not null,
  prdocrcd    varchar2(5) default ' ' not null,
  prdoabnn    varchar2(11) default ' ' not null,
  prdogstr    number(1,0) default 0 not null,
  prdoprov    varchar2(10) default ' ' not null,
  prdospar    varchar2(13) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pridoct1 primary key( 
prdoprac,
prdodoct,
prdoclam,
prdopind)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pridoct2 on pridoctf
(
prdodoct,
prdoprac,
prdoclam,
prdopind
)
  tablespace pas_indx; 
create unique index pridoct3 on pridoctf
(
prdoprov,
prdodoct,
prdoprac,
prdoclam,
prdopind
)
  tablespace pas_indx; 
