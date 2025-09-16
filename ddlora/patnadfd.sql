create table patnadaf
(
  ptndurno    varchar2(8) default ' ' not null,
  ptndrdat    varchar2(8) default ' ' not null,
  ptndscor    varchar2(3) default ' ' not null,
  ptndnrdt    varchar2(8) default ' ' not null,
  ptndprov    varchar2(6) default ' ' not null,
  ptndpvty    number(1,0) default 0 not null,
  ptndcodp    varchar2(6) default ' ' not null,
  ptndadat    varchar2(8) default ' ' not null,
  ptndcom1    varchar2(30) default ' ' not null,
  ptndcom2    varchar2(30) default ' ' not null,
  ptnspare    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patnada1 primary key( 
ptndurno,
ptndrdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patnada2 on patnadaf
(
ptndcodp,
ptndnrdt,
ptndurno,
ptndrdat
)
  tablespace pas_indx; 
