create table csmaudia
(
  csiaaudd    varchar2(8) default ' ' not null,
  csiaaudt    varchar2(8) default ' ' not null,
  csiaaudp    varchar2(2) default ' ' not null,
  csiaaudr    varchar2(1) default ' ' not null,
  csiaauds    number(1,0) default 0 not null,
  csiaaudo    varchar2(4) default ' ' not null,
  csiacat     varchar2(7) default ' ' not null,
  csiades     varchar2(60) default ' ' not null,
  csiasub     varchar2(5) default ' ' not null,
  csiaiss     varchar2(15) default ' ' not null,
  csiasti     varchar2(6) default ' ' not null,
  csiaavc     number(18,6) default 0 not null,
  csianat     varchar2(10) default ' ' not null,
  csiaabc     varchar2(1) default ' ' not null,
  csiapsc     varchar2(5) default ' ' not null,
  csiarex     number(1,0) default 0 not null,
  csianon     number(1,0) default 0 not null,
  csiasab     number(1,0) default 0 not null,
  csiasus     number(1,0) default 0 not null,
  csiadtc     varchar2(8) default ' ' not null,
  csiatmc     varchar2(5) default ' ' not null,
  csiausc     varchar2(4) default ' ' not null,
  csiaur1     varchar2(25) default ' ' not null,
  csiaur2     varchar2(25) default ' ' not null,
  csiaud1     varchar2(8) default ' ' not null,
  csiaud2     varchar2(8) default ' ' not null,
  csiauy1     varchar2(1) default ' ' not null,
  csiauy2     varchar2(1) default ' ' not null,
  csiaspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index csmaudia on csmaudia
(
csiaaudd,
csiaaudt,
csiaaudp,
csiaaudr
)
tablespace pas_indx; 
create table csmciaaf
(
  csiacat     varchar2(7) default ' ' not null,
  csiades     varchar2(60) default ' ' not null,
  csiasub     varchar2(5) default ' ' not null,
  csiaiss     varchar2(15) default ' ' not null,
  csiasti     varchar2(6) default ' ' not null,
  csiaavc     number(18,6) default 0 not null,
  csianat     varchar2(10) default ' ' not null,
  csiaabc     varchar2(1) default ' ' not null,
  csiapsc     varchar2(5) default ' ' not null,
  csiarex     number(1,0) default 0 not null,
  csianon     number(1,0) default 0 not null,
  csiasab     number(1,0) default 0 not null,
  csiasus     number(1,0) default 0 not null,
  csiadtc     varchar2(8) default ' ' not null,
  csiatmc     varchar2(5) default ' ' not null,
  csiausc     varchar2(4) default ' ' not null,
  csiaur1     varchar2(25) default ' ' not null,
  csiaur2     varchar2(25) default ' ' not null,
  csiaud1     varchar2(8) default ' ' not null,
  csiaud2     varchar2(8) default ' ' not null,
  csiauy1     varchar2(1) default ' ' not null,
  csiauy2     varchar2(1) default ' ' not null,
  csiaspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint csmciaa1 primary key( 
csiacat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
