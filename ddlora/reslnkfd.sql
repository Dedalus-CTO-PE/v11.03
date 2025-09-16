create table reslnkaf
(
  relnlty     varchar2(2) default ' ' not null,
  relnlky     varchar2(10) default ' ' not null,
  relnrdt     varchar2(8) default ' ' not null,
  relnrtm     varchar2(5) default ' ' not null,
  relnrun     varchar2(4) default ' ' not null,
  relnmsn     varchar2(1) default ' ' not null,
  relnsdt     varchar2(8) default ' ' not null,
  relnstm     varchar2(5) default ' ' not null,
  relnspc     varchar2(4) default ' ' not null,
  relnfur     varchar2(1) default ' ' not null,
  relnpid     varchar2(16) default ' ' not null,
  relnucs     varchar2(12) default ' ' not null,
  relnusc     varchar2(12) default ' ' not null,
  relndss     varchar2(10) default ' ' not null,
  relnnor     varchar2(1) default ' ' not null,
  relnrty     varchar2(1) default ' ' not null,
  relnrst     varchar2(2) default ' ' not null,
  relnlab     varchar2(3) default ' ' not null,
  relnspa     varchar2(4) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint reslnka1 primary key( 
relnlty,
relnlky,
relnrdt,
relnrtm,
relnrun)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index reslnka2 on reslnkaf
(
relnlty,
relnlky,
relnmsn,
relnrdt,
relnrtm,
relnrun
)
  tablespace pas_indx; 
create unique index reslnka3 on reslnkaf
(
relnrdt,
relnrtm,
relnrun,
relnlty,
relnlky
)
  tablespace pas_indx; 
create unique index reslnka4 on reslnkaf
(
relnpid,
relnlty,
relnlky,
relnrdt,
relnrtm,
relnrun
)
  tablespace pas_indx; 
