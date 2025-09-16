create table ceaaudst
(
  cestaudd    varchar2(8) default ' ' not null,
  cestaudt    varchar2(8) default ' ' not null,
  cestaudp    varchar2(2) default ' ' not null,
  cestaudr    varchar2(1) default ' ' not null,
  cestauds    number(1,0) default 0 not null,
  cestaudo    varchar2(4) default ' ' not null,
  cestbat     varchar2(5) default ' ' not null,
  cestlin     varchar2(4) default ' ' not null,
  cesthcd     varchar2(2) default ' ' not null,
  cesteps     varchar2(16) default ' ' not null,
  cestdat     varchar2(8) default ' ' not null,
  cesttim     varchar2(5) default ' ' not null,
  cestpsc     varchar2(7) default ' ' not null,
  cestspc     varchar2(3) default ' ' not null,
  cestqty     number(8,2) default 0 not null,
  cestst1     number(10,2) default 0 not null,
  cestst2     number(10,2) default 0 not null,
  cestst3     number(10,2) default 0 not null,
  cestst4     number(10,2) default 0 not null,
  cestst5     number(10,2) default 0 not null,
  cestfil     varchar2(8) default ' ' not null,
  cestkey     varchar2(30) default ' ' not null,
  cestud1     varchar2(8) default ' ' not null,
  cestud2     varchar2(8) default ' ' not null,
  cestuy1     varchar2(1) default ' ' not null,
  cestuy2     varchar2(1) default ' ' not null,
  cestitm     varchar2(10) default ' ' not null,
  cestdcd     varchar2(6) default ' ' not null,
  cestspa     varchar2(4) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index ceaaudst on ceaaudst
(
cestaudd,
cestaudt,
cestaudp,
cestaudr
)
tablespace pas_indx; 
create table ceastraf
(
  cestbat     varchar2(5) default ' ' not null,
  cestlin     varchar2(4) default ' ' not null,
  cesthcd     varchar2(2) default ' ' not null,
  cesteps     varchar2(16) default ' ' not null,
  cestdat     varchar2(8) default ' ' not null,
  cesttim     varchar2(5) default ' ' not null,
  cestpsc     varchar2(7) default ' ' not null,
  cestspc     varchar2(3) default ' ' not null,
  cestqty     number(8,2) default 0 not null,
  cestst1     number(10,2) default 0 not null,
  cestst2     number(10,2) default 0 not null,
  cestst3     number(10,2) default 0 not null,
  cestst4     number(10,2) default 0 not null,
  cestst5     number(10,2) default 0 not null,
  cestfil     varchar2(8) default ' ' not null,
  cestkey     varchar2(30) default ' ' not null,
  cestud1     varchar2(8) default ' ' not null,
  cestud2     varchar2(8) default ' ' not null,
  cestuy1     varchar2(1) default ' ' not null,
  cestuy2     varchar2(1) default ' ' not null,
  cestitm     varchar2(10) default ' ' not null,
  cestdcd     varchar2(6) default ' ' not null,
  cestspa     varchar2(4) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceastra1 primary key( 
cestbat,
cestlin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ceastra2 on ceastraf
(
cestfil,
cestkey,
cestbat,
cestlin
)
  tablespace pas_indx; 
create unique index ceastra3 on ceastraf
(
cesthcd,
cesteps,
cestbat,
cestlin
)
  tablespace pas_indx; 
create unique index ceastra4 on ceastraf
(
cestspc,
cestdat,
cestbat,
cestlin
)
  tablespace pas_indx; 
create unique index ceastra5 on ceastraf
(
cestpsc,
cestdat,
cestbat,
cestlin
)
  tablespace pas_indx; 
