create table mrtmasaf
(
  mrmaurno    varchar2(8) default ' ' not null,
  mrmahhos    varchar2(3) default ' ' not null,
  mrmahloc    varchar2(4) default ' ' not null,
  mrmadoty    varchar2(3) default ' ' not null,
  dmrmavol    varchar2(2) default ' ' not null,
  mrmastat    varchar2(3) default ' ' not null,
  mrmacomm    varchar2(20) default ' ' not null,
  mrmakey     varchar2(10) default ' ' not null,
  mrmachos    varchar2(3) default ' ' not null,
  mrmacloc    varchar2(4) default ' ' not null,
  mrmafilm    varchar2(25) default ' ' not null,
  mrmaepdt    varchar2(8) default ' ' not null,
  mrmadtcr    varchar2(8) default ' ' not null,
  mrmatmcr    varchar2(8) default ' ' not null,
  mrmacuid    varchar2(10) default ' ' not null,
  mrmadtup    varchar2(8) default ' ' not null,
  mrmatmup    varchar2(8) default ' ' not null,
  mrmauuid    varchar2(10) default ' ' not null,
  mrmaohos    varchar2(3) default ' ' not null,
  mrmaspar    varchar2(51) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrtmasa1 primary key( 
mrmaurno,
mrmahhos,
mrmahloc,
mrmadoty,
dmrmavol)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mrtmasa2 on mrtmasaf
(
mrmakey
)
  tablespace pas_indx; 
create unique index mrtmasa3 on mrtmasaf
(
mrmaurno,
dmrmavol,
mrmahhos,
mrmahloc,
mrmadoty
)
  tablespace pas_indx; 
create unique index mrtmasa4 on mrtmasaf
(
mrmaurno,
mrmadoty,
dmrmavol,
mrmahhos,
mrmahloc
)
  tablespace pas_indx; 
