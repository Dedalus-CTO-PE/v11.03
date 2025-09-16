create table apscebaf
(
  apebisc     varchar2(1) default ' ' not null,
  apebord     varchar2(7) default ' ' not null,
  apebcat     varchar2(6) default ' ' not null,
  apebled     varchar2(2) default ' ' not null,
  apebacc     varchar2(12) default ' ' not null,
  apebdis     varchar2(5) default ' ' not null,
  apebres     varchar2(4) default ' ' not null,
  apebdes     varchar2(35) default ' ' not null,
  apebamt     number(14,2) default 0 not null,
  apebgst     number(14,2) default 0 not null,
  apebuct     number(16,4) default 0 not null,
  apebugs     number(16,4) default 0 not null,
  apebqty     number(14,2) default 0 not null,
  apebspa     varchar2(42) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apsceba1 primary key( 
apebisc,
apebord,
apebcat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index apsceba2 on apscebaf
(
apebled,
apebacc,
apebisc,
apebord,
apebcat
)
  tablespace pas_indx; 
