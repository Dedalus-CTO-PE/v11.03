create table ccsdrgaf
(
  ccdgdrgc    varchar2(4) default ' ' not null,
  ccdgdes     varchar2(60) default ' ' not null,
  ccdgmdc     varchar2(3) default ' ' not null,
  ccdgwar     number(1,0) default 0 not null,
  ccdgtyp     varchar2(1) default ' ' not null,
  ccdgsdr     varchar2(1) default ' ' not null,
  ccdgsdt     varchar2(1) default ' ' not null,
  ccdglow     number(8,2) default 0 not null,
  ccdghig     number(8,2) default 0 not null,
  ccdgslos    number(8,2) default 0 not null,
  ccdgswgt    number(10,4) default 0 not null,
  ccdgnat     number(10,4) default 0 not null,
  ccdgnlos    number(8,2) default 0 not null,
  ccdgspa     varchar2(44) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsdrga1 primary key( 
ccdgdrgc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
