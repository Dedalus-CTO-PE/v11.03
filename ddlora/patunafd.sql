create table patunaaf
(
  dptunadm    varchar2(8) default ' ' not null,
  ptundate    varchar2(8) default ' ' not null,
  ptuntime    varchar2(8) default ' ' not null,
  ptuntype    varchar2(1) default ' ' not null,
  ptunodte    varchar2(8) default ' ' not null,
  ptunhosp    varchar2(3) default ' ' not null,
  dptunsen    varchar2(1) default ' ' not null,
  ptundtyp    varchar2(3) default ' ' not null,
  ptunauid    varchar2(10) default ' ' not null,
  ptuncanc    varchar2(3) default ' ' not null,
  ptunottm    varchar2(8) default ' ' not null,
  ptunoprd    varchar2(4) default ' ' not null,
  ptunspar    varchar2(44) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patunaa1 primary key( 
dptunadm,
ptundate,
ptuntime,
ptuntype)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patunaa2 on patunaaf
(
ptuntype,
ptundate,
ptuntime,
dptunadm
)
  tablespace pas_indx; 
create unique index patunaa3 on patunaaf
(
ptundate,
ptuntime,
dptunadm,
ptuntype
)
  tablespace pas_indx; 
