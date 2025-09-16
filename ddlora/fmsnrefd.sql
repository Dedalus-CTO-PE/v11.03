create table fmsnreaf
(
  fmnecode    varchar2(3) default ' ' not null,
  fmnetcod    varchar2(12) default ' ' not null,
  fmnetlev    varchar2(3) default ' ' not null,
  fmnedesc    varchar2(40) default ' ' not null,
  fmneprtc    varchar2(3) default ' ' not null,
  fmnespar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsnrea1 primary key( 
fmnecode,
fmnetcod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsnrea2 on fmsnreaf
(
fmnecode,
fmnetlev,
fmnetcod
)
  tablespace pas_indx; 
