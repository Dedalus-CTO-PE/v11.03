create table debaudse
(
  dbseaudd    varchar2(8) default ' ' not null,
  dbseaudt    varchar2(8) default ' ' not null,
  dbseaudp    varchar2(2) default ' ' not null,
  dbseaudr    varchar2(1) default ' ' not null,
  dbseauds    number(1,0) default 0 not null,
  dbseaudo    varchar2(4) default ' ' not null,
  dbseusr     varchar2(4) default ' ' not null,
  dbsedep     varchar2(8) default ' ' not null,
  dbsespa     varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index debaudse on debaudse
(
dbseaudd,
dbseaudt,
dbseaudp,
dbseaudr
)
tablespace pas_indx; 
create table debsecaf
(
  dbseusr     varchar2(4) default ' ' not null,
  dbsedep     varchar2(8) default ' ' not null,
  dbsespa     varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debseca1 primary key( 
dbseusr,
dbsedep)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index debseca2 on debsecaf
(
dbsedep,
dbseusr
)
  tablespace pas_indx; 
