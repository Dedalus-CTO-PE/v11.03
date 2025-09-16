create table prieadaf
(
  predfbid    varchar2(3) default ' ' not null,
  predarid    varchar2(20) default ' ' not null,
  predclid    varchar2(6) default ' ' not null,
  predrptc    varchar2(3) default ' ' not null,
  predcfec    varchar2(4) default ' ' not null,
  predexpc    varchar2(3) default ' ' not null,
  predcfet    varchar2(80) default ' ' not null,
  predspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint prieada1 primary key( 
predfbid,
predarid,
predclid,
predrptc,
predcfec,
predexpc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
